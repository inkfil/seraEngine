
#pragma once

#ifndef OBJECT2D_H
#define OBJECT2D_H

namespace Sera
{
	class Object2D
	{
	private:
	public:
		Object2D();
		~Object2D();

		// how to generate and index objects based on the ObjectID?
		// id ObjectID even neecessary??
		int objectid;
		bool isStatic;
		bool is;

		vec2f position;
		vec2f linearVelocity;

		float angle;
		vec2f angularVelocity;

		float mass;
		float density;
		float bouyancy;
		vec2f linearForce;
		float angularForce;
		vec2f inertialTensor;
		vec2f torque;

		// gravity and drag are types of forces that needs to be generated by a Force Generator.
		float gravity;
		float drag;
		float angularDrag;
		vec2f friction;
		vec2f restitution; // aka elasticity

		int width;
		int height;
		float radius;
		float invRadius;
		float invMass;
		float invDistance;
		vec2f scale;
		vec2f normal;

		// freeze axis of rotation i.e. make rotation vector value 0 (or constant) for x axis [0, y_rot, z_rot]
		// freeze axis of position i.e. make position vector value o (or constant) for x axis [0, y_pos, z_pos]

		// reset net force function set force vector for all axis to 0 i.,e. force: [0, 0, 0].
		// force need to be reset after every update, so Force Generators can produce new force vectors every update.

		// update function updates the position, velocity and other object properties.
		void update(float deltaTime);

		// draw function draws the objects onto the screen.
 
	};
}

#endif // OBJECT2D_H