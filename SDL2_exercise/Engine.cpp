//// SDL2_exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
////

#include <iostream>
#include <SDL.h>
#include<vector>
#undef main
#include<random>
#include"Engine.h"
#include"Window.h"
#include"Texture.h"
#include"Level.h"
#include"Vector2D.h"
#include"SpaceShip.h"
#include""

//struct Missile
//{
//	SDL_Rect position;
//	SDL_Rect missileRect;
//	float speed;
//};
//
//struct Rusher
//{
//	SDL_Rect position;
//	SDL_Rect RusherRect;
//	float speed;
//	int currentFrame = 0;
//	float frameTime = 0.0f;
//};
//
//struct Loner
//{
//	SDL_Rect position;
//	SDL_Rect LonerRect;
//	float speed;
//};
//
////void CreateRandomNumber(float randomNumber)
////{
////	randomNumber = rand() % 11;
////	//std::random_device dev;
////	//std::mt19937 rng(dev());
////	//std::uniform_int_distribution<std::mt19937::result_type> randomNumber(1, 6); // distribution in range [1, 6]
////
////}
//
//std::vector<Rusher> rushers;
//std::vector<Missile> missiles;
//std::vector<Loner> loners;
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
//SDL_Surface* OptimizedSurface(std::string filePath, SDL_Surface* windowSurface)
//{
//	SDL_Surface* optimizedSurface = nullptr;
//	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
//	if (surface == NULL)
//		std::cout << "Error" << std::endl;
//	else
//	{
//		optimizedSurface = SDL_ConvertSurface(surface, windowSurface->format, 0);
//		if (optimizedSurface == NULL)
//			std::cout << "Error" << std::endl;
//	}
//
//	SDL_FreeSurface(surface);
//
//	return optimizedSurface;
//}
//int main(int argc, char* argv[])
//{
//
//	SDL_Window* window = nullptr;
//	SDL_Texture* currentImage = nullptr;
//
//	SDL_Texture* missileImage = nullptr;
//	SDL_Rect missilePosition;
//
//	SDL_Texture* rusherImage = nullptr;
//	SDL_Rect rusherPosition;
//
//	SDL_Texture* lonerImage = nullptr;
//	SDL_Rect lonerPosition;
//
//	SDL_Texture* background = nullptr;
//	SDL_Renderer* renderTarget = nullptr;
//
//	SDL_Rect playerRect;
//	SDL_Rect playerPosition;
//
//	SDL_Rect missileRect;
//	SDL_Rect rusherRect;
//	SDL_Rect lonerRect;
//
//	
//
//	playerPosition.x = playerPosition.y = 0;
//	playerPosition.w = playerPosition.h = 64;
//
//	missilePosition.x = playerPosition.y = 0;
//
//	rusherPosition.x = rusherPosition.y = 0;
//
//	lonerPosition.x = lonerPosition.y = 0;
//
//	int frameWidth, frameHeight;
//	int missileframeWidth, missileframeHeight;
//	int rusherframeWidth, rusherframeHeight;
//
//	int textureWidth, textureHeight;
//	int missiletextureWidth, missiletextureHeight;
//	int rushertextureWidth, rushertextureHeight;
//	int lonertextureWidth, lonertextureHeight;
//
//	float frameTime = 0;
//	
//	int prevTime = 0;
//	int currentTime = 0;
//	float deltaTime = 0;
//
//	float randomNumberRusher = 0; //number for random meteorite spawner
//	float randomSpawnRusher = 0; //number for random meteorite position
//
//	float randomNumberLoner = 0;
//	float randomSpawnLoner = 0;
//
//	float moveSpeed = 200.0f;
//	const Uint8* keyState;
//
//	SDL_Init(SDL_INIT_VIDEO);
//
//	window = SDL_CreateWindow("SDL window", SDL_WINDOWPOS_CENTERED,
//		SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);
//	renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED |
//		SDL_RENDERER_PRESENTVSYNC);
//	currentImage = LoadTexture("graphics/Ship1.bmp", renderTarget);
//
//	missileImage = LoadTexture("graphics/missile.bmp", renderTarget);
//
//	rusherImage = LoadTexture("graphics/rusher.bmp", renderTarget);
//
//	lonerImage = LoadTexture("graphics/LonerA.bmp", renderTarget);
//
//	background = LoadTexture("graphics/galaxy2.bmp", renderTarget);
//
//	SDL_QueryTexture(currentImage, NULL, NULL, &textureWidth, &textureHeight);
//	SDL_QueryTexture(missileImage, NULL, NULL, &missiletextureWidth, &missiletextureHeight);
//	SDL_QueryTexture(rusherImage, NULL, NULL, &rushertextureWidth, &rushertextureHeight);
//	SDL_QueryTexture(lonerImage, NULL, NULL, &lonertextureWidth, &lonertextureHeight);
//
//
//	frameWidth = textureWidth / 7; //the grid, so basically the boxes inside the images
//	frameHeight = textureHeight / 1;
//
//	missileframeWidth = missiletextureWidth / 2; //the grid, so basically the boxes inside the images
//	missileframeHeight = missiletextureHeight / 3;
//
//	rusherframeWidth = rushertextureWidth / 4;
//	rusherframeHeight = rushertextureHeight / 6;
//
//	playerRect.x = playerRect.y = 0;
//	playerRect.w = frameWidth;
//	playerRect.h = frameHeight;
//
//	
//
//
//	SDL_SetRenderDrawColor(renderTarget, 0xFF, 0, 0, 0xFF);
//
//	bool isRunning = true;
//	SDL_Event ev;
//
//	while (isRunning)
//	{
//		prevTime = currentTime;
//		currentTime = SDL_GetTicks();
//		deltaTime = (currentTime - prevTime) / 1000.0f;
//
//		while (SDL_PollEvent(&ev) != 0)
//		{
//			// Getting the events
//			if (ev.type == SDL_QUIT)
//				isRunning = false;
//		}
//
//		keyState = SDL_GetKeyboardState(NULL);
//		if (keyState[SDL_SCANCODE_RIGHT])
//		{
//			playerPosition.x += moveSpeed * deltaTime;
//
//			frameTime += deltaTime;
//			if (frameTime >= 0.1f)
//			{
//				frameTime = 0;
//				playerRect.x = frameWidth * 3;
//				if (playerRect.x < textureWidth - frameWidth)
//				{
//					playerRect.x += frameWidth;
//				}
//
//			}
//		} 
//		// movement right
//		
//		else if (keyState[SDL_SCANCODE_LEFT])
//		{
//			playerPosition.x -= moveSpeed * deltaTime;
//
//			frameTime += deltaTime;
//
//			if (frameTime >= 0.1f)
//			{
//				frameTime = 0;
//				playerRect.x = frameWidth * 3;
//				if (playerRect.x > 0)
//				{
//					playerRect.x -= frameWidth;
//				}
//
//			}
//		}
//		//movement left
//
//		else if (keyState[SDL_SCANCODE_UP])
//			playerPosition.y -= moveSpeed * deltaTime; //movement up
//
//		else if (keyState[SDL_SCANCODE_DOWN])
//			playerPosition.y += moveSpeed * deltaTime;	 // movement down
//		else
//			playerRect.x = frameWidth * 3; //default frame
//
//		//CreateRandomNumber(randomNumberMeteorite);
//		
//		randomNumberRusher -= deltaTime;
//
//		if (randomNumberRusher <= 0)
//		{
//			randomSpawnRusher = rand() % 640;
//
//			Rusher newRusher;
//		
//
//			rusherRect.x = rusherRect.y = 0;
//			rusherRect.w = rusherframeWidth;
//			rusherRect.h = rusherframeHeight;
//
//	
//
//			newRusher.position.x = randomSpawnRusher;
//			newRusher.position.y = 0;
//			newRusher.position.w = 50;
//			newRusher.position.h = 30;
//			newRusher.speed = 100.0f;
//
//			rushers.push_back(newRusher);
//
//			randomNumberRusher = rand() % 7;
//
//
//			
//		}
//		for (size_t i = 0; i < rushers.size(); ++i)
//		{
//			rushers[i].position.y += rushers[i].speed * deltaTime; //meteorite goes down
//
//		
//
//			if (rushers[i].position.y < 0)
//			{
//				rushers.erase(rushers.begin() + i); //delete le meteorite
//				i--;
//			}
//		}
//
//		static bool spaceWasPressed = false;
//
//			if (keyState[SDL_SCANCODE_SPACE])
//			{
//				if (!spaceWasPressed)
//				{
//					Missile newMissile;
//					/*SDL_Rect missileRect;*/
//
//					missileRect.x = missileRect.y = 0;
//					missileRect.w = missileframeWidth;
//					missileRect.h = missileframeHeight;
//
//					missileRect.x = missileframeWidth * 1;
//
//					newMissile.position.x = playerPosition.x + playerPosition.w / 2;
//					newMissile.position.y = playerPosition.y;
//					newMissile.position.w = 15; 
//					newMissile.position.h = 30;
//					newMissile.speed = 100.0f; 
//
//					missiles.push_back(newMissile);
//
//					spaceWasPressed = true;
//					SDL_RenderCopy(renderTarget, missileImage, &missileRect, &missilePosition);
//				}
//				
//	    	}
//			else
//			{
//				spaceWasPressed = false; 
//			}
//
//		for (size_t i = 0; i < missiles.size(); ++i)
//		{
//			missiles[i].position.y -= missiles[i].speed * deltaTime; //missile goes up
//
//			
//			if (missiles[i].position.y < 0)
//			{
//				missiles.erase(missiles.begin() + i); //delete le missile
//				i--; 
//			}
//		}
//
//
//		frameTime += deltaTime;
//
//		
//
//		SDL_RenderClear(renderTarget);
//		SDL_RenderCopy(renderTarget, background, NULL, NULL);
//		SDL_RenderCopy(renderTarget, currentImage, &playerRect, &playerPosition);
//
//		for (const auto& missile : missiles)
//		{
//			SDL_RenderCopy(renderTarget, missileImage, &missileRect, &missile.position);
//		}
//		for (auto& rusher : rushers)
//		{
//			rusher.frameTime += deltaTime;
//			if (rusher.frameTime >= 0.1f) // Update frame every 0.1 seconds
//			{
//				rusher.frameTime = 0;
//				rusher.currentFrame = (rusher.currentFrame + 1) % 4; // Cycle through frames
//			}
//
//			// Update rusherRect for the current frame
//			rusherRect.x = rusher.currentFrame * rusherframeWidth;
//			rusherRect.y = 0;
//
//			SDL_RenderCopy(renderTarget, rusherImage, &rusherRect, &rusher.position);
//		}
//		SDL_RenderPresent(renderTarget);
//
//	}
//
//	SDL_DestroyWindow(window);
//	SDL_DestroyTexture(currentImage);
//	SDL_DestroyTexture(missileImage);
//	SDL_DestroyTexture(rusherImage);
//	SDL_DestroyTexture(background);
//	SDL_DestroyRenderer(renderTarget);
//	window = nullptr;
//	currentImage = nullptr;
//	missileImage = nullptr;
//	rusherImage = nullptr;
//	renderTarget = nullptr;
//
//	SDL_Quit();
//
//	return 0;
//}
//
//
SDL_Texture* LoadTexture(std::string filePath, SDL_Renderer* renderTarget)
{
	SDL_Texture* texture = nullptr;
	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
	if (surface == NULL)
		std::cout << "Errorsurface" << std::endl;
	else
	{
		SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 255));
		texture = SDL_CreateTextureFromSurface(renderTarget, surface);
		if (texture == NULL)
			std::cout << "Errortexture" << std::endl;
	}

	SDL_FreeSurface(surface);

	return texture;
}
SDL_Surface* OptimizedSurface(std::string filePath, SDL_Surface* windowSurface)
{
	SDL_Surface* optimizedSurface = nullptr;
	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
	if (surface == NULL)
		std::cout << "Error" << std::endl;
	else
	{
		optimizedSurface = SDL_ConvertSurface(surface, windowSurface->format, 0);
		if (optimizedSurface == NULL)
			std::cout << "Error" << std::endl;
	}

	SDL_FreeSurface(surface);

	return optimizedSurface;
}

MyGameEngine::MyGameEngine()
{

}

void MyGameEngine::start()
{

	SDL_Event ev;
	//Window window;
	SDL_Texture* background = nullptr;
	SDL_Window* window = nullptr;
	SDL_Renderer* renderTarget = nullptr;

	SDL_Texture* currentImage = nullptr;
	SDL_Rect playerRect;
	SDL_Rect playerPosition;
	playerPosition.x = playerPosition.y = 0;
	playerPosition.w = playerPosition.h = 32;
	int frameWidth, frameHeight;
	int textureWidth, textureHeight;

	Vector2D playerPos;

	playerPos.Position(playerPosition, 0, 32);

	//Vector2D playerPosition(playerRect, playerPosition);

	//playerPosition.Position(playerPosition);

	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow("SDL window", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);
	renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED |
		SDL_RENDERER_PRESENTVSYNC);


	currentImage = LoadTexture("graphics/Ship1.bmp", renderTarget);
	background = LoadTexture("graphics/galaxy2.bmp", renderTarget);


	SDL_QueryTexture(currentImage, NULL, NULL, &textureWidth, &textureHeight);

	frameWidth = textureWidth / 7;
	frameHeight = textureHeight / 1;

	playerRect.x = playerRect.y = 0;
	//playerPos.Rect(playerRect);


	playerRect.w = frameWidth;
	playerRect.h = frameHeight;

	//Texture LoadTexture("graphics/galaxy2.bmp", );

	bool isRunning = true;

	while (isRunning)
	{
		while (SDL_PollEvent(&ev) != 0)
		{

			SDL_UpdateWindowSurface(window); //game Loop
			// Getting the events
			if (ev.type == SDL_QUIT)
				isRunning = false;
		}
		SDL_UpdateWindowSurface(window);
		SDL_RenderClear(renderTarget);
		SDL_RenderCopy(renderTarget, background, NULL, NULL);
		SDL_RenderCopy(renderTarget, currentImage, &playerRect, &playerPosition);

		SDL_RenderPresent(renderTarget);
	}

	

	SDL_DestroyWindow(window);
	SDL_DestroyTexture(currentImage);

	SDL_DestroyRenderer(renderTarget);
	SDL_DestroyTexture(background);
	window = nullptr;
	currentImage = nullptr;
	renderTarget = nullptr;

	SDL_Quit();
	
	//create the window in here
	
}

//ADD THE GAMELOOP AND THE WINDOW

//void Structs::addStruct(SDL_Rect)
//{
//
//}


