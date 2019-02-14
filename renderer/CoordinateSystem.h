//
// Created by brand on 2/12/2019.
//

#ifndef OPENGL_FCG_COORDINATESYSTEM_H
#define OPENGL_FCG_COORDINATESYSTEM_H

#include <vector>
#include"../src/Vector3D.h"


class CoordinateSystem {
private:
    sivelab::Vector3D U,V,W;
public:
    const sivelab::Vector3D &getU() const;

    const sivelab::Vector3D &getV() const;

    const sivelab::Vector3D &getW() const;

public:
    CoordinateSystem();
    CoordinateSystem(sivelab::Vector3D direction, sivelab::Vector3D temp);





};


#endif //OPENGL_FCG_COORDINATESYSTEM_H