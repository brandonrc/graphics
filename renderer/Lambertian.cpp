//
// Created by brand on 2/27/2019.
//

#include "Lambertian.h"
#include <math.h>

Lambertian::Lambertian(sivelab::Vector3D thisColor){
    setColor(thisColor);
}



sivelab::Vector3D Lambertian::applyShader(Ray &r, std::vector<Light *> &lights, std::vector<Shape *> &shapes, HitStruct &h ){
    sivelab::Vector3D newColor(-1,-1,-1);

 //   for(int i = 0; i < lights.size(); i++){
    sivelab::Vector3D lightP = lights[0]->getPosition();
    sivelab::Vector3D hP = h.getPointInterect();
    //Yes, this is backwords because I wanted the negative direction/reverse direction.
    //Used light as the head minus hit intersect as the tail.

    sivelab::Vector3D lightDir(lightP[0]-hP[0],lightP[1]-hP[1], lightP[2]-hP[2]);
    lightDir.normalize();
    sivelab::Vector3D normal = h.getNorm();
    normal.normalize();





    float temp = normal.dot(lightDir);
    if(temp < 0.00001) return sivelab::Vector3D(-1,-1,-1);


    newColor += lights[0]->getIntensity() * getColor() *sivelab::Vector3D(1,1,1) * std::fmax(0.f,temp);



  //  }

    return newColor;

}
