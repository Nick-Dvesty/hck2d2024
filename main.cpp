#define GLFW_DLL

#include <GLFW/glfw3.h>
#include "Render.h"

using namespace hck2d2024;


int main() {
    Display display(640, 480, "Window name");
    while (display.releaseNextFrame());
    return 0;
}