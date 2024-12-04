#pragma once
#include<Vector2D.h>
#include<Animation.h>
#include"Actor.h"

class Drone : public Actor
{
public:
	Drone(Vector2D location); //vector 2 is seperate cpp class for location
	~Drone();

};

