//
// Created by brand on 2/5/2019.
//

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cassert>

#include "Vector3D.h"
#include "../renderer/framebuffer.h"
#include "XMLSceneParser.h"
#include "handleGraphicsArgs.h"
#include "../renderer/PerspectiveCamera.h"

#include "SceneDataTypes.h"

using namespace sivelab;

int main(int argc, char *argv[]){

    framebuffer fb( args.width, args.height );


// Create your Perspective Camera using
// focal length  = 1, image plane width = 0.5, position = (0, 0, 0), view direction = (0, 0, -1)
    Camera *pCam = new PerspectiveCamera pCam( .... );
    for (int j=0; j<fb.getHeight(); ++j) {
        for (int i=0; i<fb.getWidth(); ++i) {
            Ray r;
            pCam->generateRay( i, j, r );
        }
    }

}
