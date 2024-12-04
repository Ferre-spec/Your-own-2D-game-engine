#include"Level.h"
#include<iostream>

Level::Level()
{

}
//
//SDL_Texture* LoadTexture(std::string filePath, SDL_Renderer* renderTarget)
//{
//	SDL_Texture* texture = nullptr;
//	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
//	if (surface == NULL)
//		std::cout << "Errorsurface" << std::endl;
//	else
//	{
//		SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 255));
//		texture = SDL_CreateTextureFromSurface(renderTarget, surface);
//		if (texture == NULL)
//			std::cout << "Errortexture" << std::endl;
//	}
//
//	SDL_FreeSurface(surface);
//
//	return texture;
//}

void Level::setbackground(std::string file_path) //also in xennonlevel load background first texture
{
	background_file_path = file_path;


	//LoadTexture(background_file_path);
}



//last page sdl 