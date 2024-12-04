#include "SpaceShip.h"
#include<TileSet.h>
#include"Pawn.h"
#include <SDL.h>
#include<iostream>
#include"Vector2D.h"

#ifndef SPACESHIP_H
#define SPACESHIP_H
SpaceShip::SpaceShip(Vector2D location) : position(location), speed(10.0f) /*: Pawn(location)*/
{
	location.playerPosition;
		//speed = 10.0f;
	//TileSet* tile_set = new TileSet("graphics/Ship2.bmp", 7, 3);
	//Animation* idle_Animation = new Animation(tile_set, { 2, 3, 4, 3 }, true);
	//set_animation(idle_animation);


}

void SpaceShip :: InputMovementKeyboard(float moveSpeed, float deltaTime)
{
	const Uint8* keyState;
	keyState = SDL_GetKeyboardState(NULL);
//
//	if (keyState[SDL_SCANCODE_RIGHT])
//	{
//		playerPosition.x += moveSpeed * deltaTime;
//
//		frameTime += deltaTime;
//		if (frameTime >= 0.1f)
//		{
//			frameTime = 0;
//			playerRect.x = frameWidth * 3;
//			if (playerRect.x < textureWidth - frameWidth)
//			{
//				playerRect.x += frameWidth;
//			}
//
//		}
//	}
//	// movement right
//
//	else if (keyState[SDL_SCANCODE_LEFT])
//	{
//		playerPosition.x -= moveSpeed * deltaTime;
//
//		frameTime += deltaTime;
//
//		if (frameTime >= 0.1f)
//		{
//			frameTime = 0;
//			playerRect.x = frameWidth * 3;
//			if (playerRect.x > 0)
//			{
//				playerRect.x -= frameWidth;
//			}
//
//		}
//	}
//	//movement left
//
//	else if (keyState[SDL_SCANCODE_UP])
//		playerPosition.y -= moveSpeed * deltaTime; //movement up
//
//	else if (keyState[SDL_SCANCODE_DOWN])
//		playerPosition.y += moveSpeed * deltaTime;	 // movement down
//	else
//		playerRect.x = frameWidth * 3; //default frame
//}
//
//void InputMovementGamePad()
//{
//	//add gamepad controls;
}


void SpaceShip ::move_left(float delta_Time)
{
	position.x -= speed * delta_Time;
}
void SpaceShip::move_right(float delta_Time)
{
	position.x -= speed * delta_Time;
}
void SpaceShip::move_forward(float delta_Time)
{
	position.x -= speed * delta_Time;
}
void SpaceShip::move_backward(float delta_Time)
{
	position.x -= speed * delta_Time;
}

#endif
//implement movement, firing, animation?
