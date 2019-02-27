//
// Created by brand on 2/5/2019.
//

#include "Camera.h"

void Camera::setPosition(const sivelab::Vector3D &position) {
    Camera::position = position;
}

void Camera::setDirection(const sivelab::Vector3D &direction) {
    Camera::direction = direction;
}

void Camera::setFocalLength(float focalLength) {
    Camera::focalLength = focalLength;
}

void Camera::setImageWidth(float imageWidth) {
    Camera::imageWidth = imageWidth;
}

void Camera::setRatio(float ratio) {
    Camera::ratio = ratio;
}

void Camera::setCsys(const CoordinateSystem &csys) {
    Camera::csys = csys;
}

void Camera::setImageHeight(float imageHeight) {
    Camera::imageHeight = imageHeight;
}
