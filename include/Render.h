#pragma once

#include <string>
#include <GLFW/glfw3.h>
#include "Figure.h"
#include "Rectangle.h"


namespace hck2d2024 {


void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);


/// Renders shapes to figures for write to screen
class Renderer {

public:
    Renderer();
};


/// Display shapes to pinned window
class Display {
    //TODO need only one window in whole program 
    GLFWwindow *window_;

    std::vector<Figure> currentFrameFigures_;
    std::vector<Figure> nextFrameFigures_;
    
    Rectangle displayArea_;

    static void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

public:
    Display(size_t winSizeX, size_t winSizeY, std::string windowName);

    ~Display();

    void addFigureToNextFrame(Figure &&fig);

    bool releaseNextFrame();
};


}