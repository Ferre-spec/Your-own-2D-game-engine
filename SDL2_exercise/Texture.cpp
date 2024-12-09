#include"SDL.h"
#include"Texture.h"
#include<vector>
#include <iostream>

//
//SDL_Texture* LoadTexture(std::string filePath, SDL_Renderer* renderTarget)
//{
//	SDL_Texture* texture = nullptr;
//	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
//	if (surface == NULL)
//		std::cout << "Error" << std::endl;
//	else
//	{
//		SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 255));
//		texture = SDL_CreateTextureFromSurface(renderTarget, surface);
//		if (texture == NULL)
//			std::cout << "Error" << std::endl;
//	}
//
//	SDL_FreeSurface(surface);
//
//	return texture;
//}


Texture::~Texture()
{


}

Texture::Texture()
{

	//LoadTexture(background_file_path, );

}

void forLoadTexture(std::string textureName)
{
	//LoadTexture(textureName, wantSurface);
}

void textureRender()
{
	//SDL_RenderCopy()
}