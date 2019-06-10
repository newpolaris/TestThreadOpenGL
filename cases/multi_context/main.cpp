#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <thread>
#include <cmath>

static void display(GLFWwindow *window)
{
    static float blue = 0.f;
    glClearColor(0.f, 0.f, sin(blue+=0.05f), 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glfwSwapBuffers(window);
}

static void reshape(GLFWwindow *window, int w, int h)
{
    width = w > 1 ? w : 1;
    height = h > 1 ? h : 1;
    glViewport(0, 0, width, height);
    glClearDepth(1.0);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glEnable(GL_DEPTH_TEST);
}

bool TestWindow()
{
    GLFWwindow* window = glfwCreateWindow(1024, 768, "Sample", nullptr, nullptr);
	glfwSetFramebufferSizeCallback(window, reshape);
	glfwSetWindowRefreshCallback(window, display);
	glfwMakeContextCurrent(window);
    gladLoadGL();

    while (!glfwWindowShouldClose(window)) {
        display(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    return true;
}

bool TestApp()
{
    if (!glfwInit())
        return false;
    TestWindow();
    return true;
}

int main()
{
    EL_ASSERT(TestApp());
    return 0;
}
