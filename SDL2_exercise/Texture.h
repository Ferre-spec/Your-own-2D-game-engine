#pragma once
#include"SDL.h"
#include"RenderTarget.h"
#include "stb_image.h"

class Texture
{
public:
	Texture();
	~Texture();

	void textureUpdate();
	void deleteTexture();

	float GetVertices() { return vertices; }

private:

	float vertices;

};
