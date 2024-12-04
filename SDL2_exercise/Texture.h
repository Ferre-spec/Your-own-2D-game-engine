#pragma once
#include"SDL.h"
#include"Level.h"
#include"RenderTarget.h"

class Texture : public Level
{
public:
	Texture();
	~Texture();

	//SDL_Texture LoadTexture(std::string filePath, SDL_Renderer* renderTarget);

	SDL_Texture LoadTexture(std::string filePath, SDL_Renderer* renderTarget)

};
