#include <GLFW/glfw3.h>
#include <cstdio>

void do_stuff() {
	GLFWwindow* window;

	// Initialize the library
	if (!glfwInit()) {
		printf("Failed to init glfw");
		return;
	}

	// Setup window hints
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);

	// Create window
	window = glfwCreateWindow(400, 300, "Cross Compile Example", NULL, NULL);
	if (!window) {
		printf("Failed to create GLFW Window");
		glfwTerminate();
		return;
	}

	glfwMakeContextCurrent(window);

	glfwPollEvents();

	glfwTerminate();
}