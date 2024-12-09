#pragma once
#include <string>
#include "Window.h"
#include "RenderTarget.h"
#include<SDL.h>

class MyGameEngine
{
public:
	void start();
	void events();
	void render();
	void destroy();
	void update();

	bool GetisRunning() { return isRunning; }

	MyGameEngine();
    //~MyGameEngine();

private:
	bool isRunning;
	SDL_Renderer* renderTarget;
	SDL_Window* window;

};
