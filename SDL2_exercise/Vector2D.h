#pragma once
#include<SDL.h>
#include<iostream>
class Vector2D
{
private:
	int xPosition;
	int yPosition;


public:

	Vector2D(int xPosition, int yPosition);

	void SetxPosition();
	void SetyPosition();


	SDL_Rect playerRect;
	SDL_Rect playerPosition;

	//Vector2D(SDL_Rect Rect, SDL_Rect Position);
	

	//Vector2D() {};
		//void Position();

	void Position(SDL_Rect Position, int coordinates = 0, int scale = 0);
	void Rect(SDL_Rect Rect);
};

