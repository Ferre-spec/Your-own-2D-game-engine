#include"SDL.h"
#include"Window.h"

Window::Window()
{

	window = SDL_CreateWindow("SDL window", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);
	renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED |
		SDL_RENDERER_PRESENTVSYNC);

	SDL_SetRenderDrawColor(renderTarget, 0xFF, 0, 0, 0xFF);

}
Window::~Window()
{
	SDL_DestroyWindow(window);
}

void Window::DeleteWindow()
{
	SDL_DestroyWindow(window);
	window = nullptr;
}
void Window::DeleteRenderer()
{
	SDL_DestroyRenderer(renderTarget);
	renderTarget = nullptr;
}