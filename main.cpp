#define GLFW_DLL

#include <print>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit()) {
        std::println("FATAL ERROR: could not init glfw");
        return 1;
    }

    auto *window = glfwCreateWindow(640, 480, "Test window", nullptr, nullptr);
    if (!window) {
        std::println("FATAL ERROR: could not create windw");
        return 2;
    }

    while (!glfwWindowShouldClose(window));
}