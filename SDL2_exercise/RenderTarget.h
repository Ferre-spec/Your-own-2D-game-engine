#pragma once
#include<SDL.h>
class RenderTarget
{
public:
	SDL_Renderer* renderTarget;


	RenderTarget();
	~RenderTarget();

	void InitRenderer();

};

