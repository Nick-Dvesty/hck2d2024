#include "Render.h"
#include "Rectangle.h"
#include <GLFW/glfw3.h>
#include <cassert>
#include <limits>
#include <print>

using namespace hck2d2024;


void Display::keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}


Display::~Display() {
    glfwDestroyWindow(window_);
    glfwTerminate();
}


bool Display::releaseNextFrame() {
    if (!glfwWindowShouldClose(window_)) {
        glfwPollEvents();
        return true;
    }
    return false;
}


void Display::addFigureToNextFrame(Figure &&fig) {
    nextFrameFigures_.emplace_back(fig);
}


Display::Display(size_t winSizeX, size_t winSizeY, std::string windowName) 
: displayArea_({0, 0}, {static_cast<double>(winSizeX), static_cast<double>(winSizeY)}) {
    assert(winSizeX <= std::numeric_limits<short>::max());
    assert(winSizeY <= std::numeric_limits<short>::max());
    if (!glfwInit()) {
        std::println("FATAL ERROR: glfw library not inited");
        exit(1);
    }
    
    window_ = glfwCreateWindow(winSizeX, winSizeY, windowName.c_str(), nullptr, nullptr);
    if (!window_) {
        glfwTerminate();
        std::println("FATAL ERROR: could not create window");
        exit(1);
    }

    glfwSetKeyCallback(window_, keyCallback);
    glfwMakeContextCurrent(window_);

    glfwSwapInterval(1);
}