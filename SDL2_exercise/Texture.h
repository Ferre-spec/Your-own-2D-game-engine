#pragma once
#include"SDL.h"
#include"RenderTarget.h"

class Texture
{
public:
	Texture();
	~Texture();

	//we want to initialize textures in the application using this class

	//SDL_Texture LoadTexture(std::string filePath, SDL_Renderer* renderTarget);

	SDL_Texture LoadTexture(std::string filePath);

	void textureRender();

private:
	SDL_Rect* entityRect;
	SDL_Texture* imageTexture;
	SDL_Renderer* renderTarget;
	SDL_Surface* wantSurface;

};
