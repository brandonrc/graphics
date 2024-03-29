/**
 * \class PerspectiveCamera
 *
 * \ingroup render_util
 *
 * \brief Computer Graphics class.
 *
 *
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

#include"./Camera.h"
#include"./Ray.h"


class PerspectiveCamera: public Camera {
private:
    double aspectRatio = 1;
public:
    PerspectiveCamera();
    PerspectiveCamera(sivelab::Vector3D position, sivelab::Vector3D direction, double focalLength, double m_aspectRation, double imageWidth);
    Ray generateRay(int i, int j, int rppX, int rppY, int rpp);




};


