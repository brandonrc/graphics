/**
 * \class Shader
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

#ifndef OPENGL_FCG_SHADER_H
#define OPENGL_FCG_SHADER_H

#include <string>
#include "../src/Vector3D.h"
using namespace sivelab;

class Shader {
private:
public:
    void setColor(const Vector3D &color);

private:
    sivelab::Vector3D color = sivelab::Vector3D(0,0,0);
    std::string name = "";
public:
    void setName(const std::string &name);

public:
    const Vector3D &getColor() const;

public:
    Shader(const Vector3D &color);

public:
    Shader();

    const std::string &getName() const;

};


#endif //OPENGL_FCG_SHADER_H
