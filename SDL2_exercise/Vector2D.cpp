#include "Vector2D.h"
//Vector2D::Vector2D(SDL_Rect Rect, SDL_Rect Position)
//{
//	//Vector2D::playerRect = playerRect;
//	//Vector2D::playerPosition = playerPosition;
//
//	this->playerRect = Rect;
//	this->playerPosition = Position;
//}

Vector2D::Vector2D()
{
	//Vector2D::playerRect = Rect;
	//Vector2D::playerPosition = Position;
}

void Vector2D::Position(SDL_Rect playerPosition, int coordinates, int scale)
{

	playerPosition.x = playerPosition.y = coordinates;
	playerPosition.w = playerPosition.h = scale;


}
void Vector2D::Rect(SDL_Rect playerRect)
{
	playerRect.x = playerRect.y = 0;

}



