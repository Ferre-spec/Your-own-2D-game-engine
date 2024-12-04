#include<iostream>
#include<string>
#include"SDL.h"
#include<vector>
#include"Texture.h"
#include"RenderTarget.h"
#pragma once
class Level
{
public:
	Level();
	//~Level();

	//add box2D gravity and such

	/*LoadTexture("graphics/galaxy2.bmp", renderTarget);*/

	//SDL_Texture* LoadTexture(std::string filePath, SDL_Renderer* renderTarget);

	void setbackground(std::string file_path);

	std::string background_file_path;

};
