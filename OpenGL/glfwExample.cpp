#include <cstdlib>
#include <iostream>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

#include "GLSL.h"

int CheckGLErrors(const char *s)
{
    int errCount = 0;

    return errCount;
}

int main(void)
{
    //
    // INITIALIZATION PART
    //
    #ifdef WSL
    setenv("DISPLAY", "127.0.0.1:0", true);
    #endif

    /* Initialize the library */
    if (!glfwInit())
        exit (-1);
    // throw std::runtime_error("Error! initialization of glfw failed!");

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    int winWidth = 1000;
    float aspectRatio = 16.0 / 9.0; // winWidth / (float)winHeight;
    int winHeight = winWidth / aspectRatio;

    GLFWwindow* window = glfwCreateWindow(winWidth, winHeight, "FCG4E Examples", NULL, NULL);
    if (!window) {
        std::cerr << "GLFW did not create a window!" << std::endl;

        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    GLenum err=glewInit();
    if(err != GLEW_OK) {
        std::cerr <<"GLEW Error! glewInit failed, exiting."<< std::endl;
        exit(EXIT_FAILURE);
    }

    const GLubyte* renderer = glGetString (GL_RENDERER);
    const GLubyte* version = glGetString (GL_VERSION);
    std::cout << "Renderer: " << renderer << std::endl;
    std::cout << "OpenGL version supported: " << version << std::endl;

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glClearColor(0.0, 0.7, 1.0, 1.0);

    int fb_width, fb_height;
    glfwGetFramebufferSize(window, &fb_width, &fb_height);
    glViewport(0, 0, fb_width, fb_height);

    GLint major_version;
    glGetIntegerv(GL_MAJOR_VERSION, &major_version);
    std::cout << "GL_MAJOR_VERSION: " << major_version << std::endl;

    // 
    // RENDER LOOP
    //
    double timeDiff = 0.0, startFrameTime = 0.0, endFrameTime = 0.0;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        endFrameTime = glfwGetTime();
        timeDiff = endFrameTime - startFrameTime;
        startFrameTime = glfwGetTime();

        // Clear the window's buffer (or clear the screen to our
        // background color)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        /* Render stuff here */

        // Swap the front and back buffers
        // glfwSwapInterval(0);
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();

#if 0
        // Here are some other examples for polling the keys...
        if (glfwGetKey( window, GLFW_KEY_1 ) == GLFW_PRESS) {
            // if key 1 is pressed do something
        }
        else if (glfwGetKey( window, GLFW_KEY_2 ) == GLFW_PRESS) {
            // if key 2 is pressed do something  else...
        }
#endif

        if (glfwGetKey( window, GLFW_KEY_T ) == GLFW_PRESS) {
            std::cout << "fps: " << 1.0/timeDiff << std::endl;
        }

        if (glfwGetKey( window, GLFW_KEY_ESCAPE ) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, 1);
    }

    glfwTerminate();
    return 0;
}

