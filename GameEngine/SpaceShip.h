#pragma once
#include"Vector2D.h"
#include"Animation.h"
class SpaceShip
{
private:

	Vector2D position;
	float speed;



	public:
		SpaceShip(Vector2D location);

		~SpaceShip();

		void move_left(float deltaTime);
		void move_right(float deltaTime);
		void move_forward(float deltaTime);
		void move_backward(float deltaTime);

		void InputMovementKeyboard(float moveSpeed, float deltaTime);
		void InputMovementGamePad();

		Vector2D getPosition() const { return position; }

};

