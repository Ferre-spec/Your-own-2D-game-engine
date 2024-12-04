#pragma once

class Window
{
public:
	Window();
	~Window();

	void DeleteRenderer();

	void DeleteWindow();

private:
	class SDL_Window* window = nullptr;
	class SDL_Renderer* renderTarget = nullptr;
};
