//
// Created by brand on 3/4/2019.
//

#include "BlinnPhong.h"
#include <math.h>



sivelab::Vector3D BlinnPhong::applyShader(Ray &r, std::vector<Light *> &lights, std::vector<Shape *> &shapes, HitStruct &h ){
    sivelab::Vector3D newColor(-1,-1,-1);

    for(int i = 0; i < lights.size(); i++) {
        sivelab::Vector3D lightP = lights[i]->getPosition();
        sivelab::Vector3D hP = h.getPointInterect();
        //Yes, this is backwords because I wanted the negative direction/reverse direction.
        //Used light as the head minus hit intersect as the tail.
        sivelab::Vector3D lightDir(lightP[0] - hP[0], lightP[1] - hP[1], lightP[2] - hP[2]);
        lightDir.normalize();
        sivelab::Vector3D normal = h.getNorm();
        normal.normalize();

        sivelab::Vector3D H = (lightDir + r.getDirection());
        H.normalize();


        float Ks = pow(std::max((float)normal.dot(H),0.0f),phongExp);

        newColor +=  specular * Ks + lights[i]->getIntensity() * getColor() * sivelab::Vector3D(1, 1, 1) *
                    std::max(0.0f, (float) normal.dot(lightDir));

    }

    return newColor;

}


BlinnPhong::BlinnPhong(const Vector3D &diffuse, const Vector3D &specular, float phongExp) : diffuse(diffuse),
                                                                                            specular(specular),
                                                                                            phongExp(phongExp) {
    setColor(diffuse);
}
