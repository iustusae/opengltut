//
// Created by Ayman Ougri on 3/13/23.
//
#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>

using namespace std;

int main() {
    //initializing and terminating the glfw instance
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Here we create the window :)
    GLFWwindow *window = glfwCreateWindow(800, 800, "Tutorial", NULL, NULL);

    //Error checking
    if (window == NULL) {
        cout << "Failed to create window :(" << endl;
        glfwTerminate();
        return -1;
    }

    //Making the window usable | context => object that holds opengl
    glfwMakeContextCurrent(window);

    //Making the window stay long as long as it is not closed
    while (!glfwWindowShouldClose(window))
    {
        //making the window aware of all events.
        glfwPollEvents();
    }

    //Destroying and terminating the processes
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}