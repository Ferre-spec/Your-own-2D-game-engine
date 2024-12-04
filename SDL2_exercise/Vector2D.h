#pragma once
#include<SDL.h>
#include<iostream>
class Vector2D
{
public:
	SDL_Rect playerRect;
	SDL_Rect playerPosition;

	//Vector2D(SDL_Rect Rect, SDL_Rect Position);
	

	//Vector2D() {};
	Vector2D();	//void Position();

	void Position(SDL_Rect Position, int coordinates = 0, int scale = 0);
	void Rect(SDL_Rect Rect);
};

