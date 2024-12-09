#pragma once
#include<SDL.h>
#include<iostream>
class RenderTarget
{
public:
	SDL_Renderer* renderTarget;


	RenderTarget();
	~RenderTarget();

	void InitRenderer();


private:


};

