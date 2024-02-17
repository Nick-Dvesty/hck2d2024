#define GLFW_DLL

#include <print>
#include <GLFW/glfw3.h>


static void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}


int main() {
    if (!glfwInit()) {
        std::println("FATAL ERROR: could not init glfw");
        return 1;
    }

    // Window init
    auto *window = glfwCreateWindow(640, 480, "Test window", nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        std::println("FATAL ERROR: could not create windw");
        return 2;
    }

    // Key callback setup
    glfwSetKeyCallback(window, keyCallback);

    // Load OpenGL API
    glfwMakeContextCurrent(window);

    glfwSwapInterval(1);
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
    
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}