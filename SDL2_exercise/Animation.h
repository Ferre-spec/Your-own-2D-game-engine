#pragma once
#include<SDL.h>
class Animation
{
	Animation();
	~Animation();

	int frameWidth, frameHeight;
	int textureWidth, textureHeight;

	void defaultAnimation();
	void animationTimer();

	//implement objectRect and texture height and width

};