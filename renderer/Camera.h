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
#ifndef OPENGL_FCG_CAMERA_H
#define OPENGL_FCG_CAMERA_H

#include <string>
#include <vector>
#include"../src/Vector3D.h"
#include"./CoordinateSystem.h"
#include"../renderer/Ray.h"

class Camera {
protected:
    sivelab::Vector3D position;
    CoordinateSystem csys;
    float focalLength, width, height;
    int imageLength, imageWidth;

public:
    /// Create a CameraClass
    Camera();
    virtual void generateRay(const int i, const int j, Ray &r) const = 0;

};


#endif //OPENGL_FCG_CAMERA_H
