#include <Engine.h>
#include <iostream>
#include <SDL.h>
#include<vector>
#undef main
#include<random>
#include"Engine.h"
#include"Window.h"
#include"Texture.h"
#include"Vector2D.h"
#include"SpaceShip.h"
#include "RenderTarget.h"

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
//
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

//MyGameEngine* engine = nullptr;

int main(int argc, char* argv[])
{	
	//engine = new MyGameEngine();

	MyGameEngine engine;

	engine.start();
	
	//background.setbackground("graphics/galaxy2.bmp");


	while (engine.GetisRunning())
	{
		engine.events();
		engine.update();
		engine.render();
	}

	engine.destroy();

	
		//SDL_Event ev;
		////Window window;
		//SDL_Texture* background = nullptr;
		//SDL_Surface* background2 = nullptr;

		//SDL_Surface* windowSurface = nullptr;
		//SDL_Window* window = nullptr;
		//SDL_Renderer* renderTarget = nullptr;

		//SDL_Init(SDL_INIT_VIDEO);

		//window = SDL_CreateWindow("SDL window", SDL_WINDOWPOS_CENTERED,
		//	SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);
		//renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED |
		//	SDL_RENDERER_PRESENTVSYNC);



		//windowSurface = SDL_GetWindowSurface(window);
		//background = LoadTexture("graphics/galaxy2.bmp", renderTarget);
		//background2 = SDL_LoadBMP("graphics/galaxy2.bmp");

		//if (background2 != NULL) 
		//{
		//	SDL_BlitSurface(background2, NULL, windowSurface, NULL);
		//	SDL_UpdateWindowSurface(window);
		//	SDL_Delay(2000);
		//}

		////Texture LoadTexture("graphics/galaxy2.bmp", );
		//SDL_SetRenderDrawColor(renderTarget, 0xFF, 0, 0, 0xFF);


		//bool isRunning = true;

		//while (isRunning)
		//{
		//	while (SDL_PollEvent(&ev) != 0)
		//	{
		//		// Getting the events
		//		if (ev.type == SDL_QUIT)
		//			isRunning = false;
		//	}
		//	SDL_RenderClear(renderTarget);
		//	SDL_RenderCopy(renderTarget, background, NULL, NULL);

		//	SDL_RenderPresent(renderTarget);
		//}


		//SDL_FreeSurface(background2);
		//SDL_DestroyWindow(window);
		//SDL_DestroyTexture(background);

		//SDL_DestroyRenderer(renderTarget);
		//window = nullptr;
		//background = nullptr;
		//renderTarget = nullptr;

		//SDL_Quit();

		
		//create the window in here

	
	//window.~Window();
	//background.~Texture();
	//background.setbackground("graphics/galaxy2.bmp");

	//background.setbackground("graphics/galaxy2.bmp");

	//tileset* tile_Set = new tielset(drone.bmp, 8, 2);

	//drone==>set_animation(anim)   actor.cpp

	//xennonlevel.h has no code extends level

	//level.add_actor

	//Actor for drone

	//create level
	//Setbackgroundhere
	return 0;

}