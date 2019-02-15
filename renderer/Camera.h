/**
 * \class Camera
 *
 * \ingroup render_util
 *
 * \brief Computer Graphics class.
 *
 * This is the Shape class that other shapes will inherent from.
 *
 * \note University of Minnesota Duluth Computer Graphics
 *
 * \author (last to touch it) $Author: bv Brandon Geraci$
 *
 * \version $Revision: 0.0 $
 *
 * \date $Date: 2019/02/06 8:16:20 $
 *
 * Contact: bran0847@d.umn.edu
 *
 * Created on: Wed Feb 6 18:39:37 2019
 *
 */
#pragma once

#include <string>
#include <vector>
#include"../src/Vector3D.h"
#include"./CoordinateSystem.h"
#include"../renderer/Ray.h"

class Camera {
protected:
    sivelab::Vector3D position, direction;
    CoordinateSystem csys;

    float width, height, focalLength,imageLength, imageWidth, ratio;
public:
    void setRatio(float ratio);

public:
    /// Create a CameraClass
    virtual Ray generateRay(const int i, const int j) = 0;

    void setPosition(const sivelab::Vector3D &position);

    void setDirection(const sivelab::Vector3D &direction);

    void setFocalLength(float focalLength);

    void setImageWidth(float imageWidth);



};



