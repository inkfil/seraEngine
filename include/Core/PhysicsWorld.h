#pragma once

#ifndef PHYSICSWORLD_2D
#define PHYSICSWORLD_2D

#include<vector>
#include<include/Core/Object2D.h>

namespace Sera
{
	class PhysicsWorld2D
	{
	private:
	public:
		PhysicsWorld2D();
		~PhysicsWorld2D();

		std::vector<Object2D> worldObjects;

		void addObjects();
		void removeObjects();
		void step(float deltaTime);

	};
}

#wndif // PHYSICSWORLD_2D