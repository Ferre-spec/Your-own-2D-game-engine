#pragma once
#include"SDL.h"
#include"RenderTarget.h"
#include "stb_image.h"
#include<glad/glad.h>


class Texture
{
public:
	Texture();
	~Texture();

	void textureUpdate();
	void deleteTexture();



private:

	GLuint shaderProgram;
	GLuint vao;
	GLuint texture;
};
