
#pragma once

#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include<include/Math/Vector2.h>

namespace Sera
{
	class RigidBody2D
	{
	public:
		Math::Vector2f position;
		Math::Vector2f velocity;
		Math::Vector2f acceleration;
		float rotation;
		float mass;

		RigidBody2D(const Math::Vector2f position, const Math::Vector2f velocity, const Math::Vector2f acceleration, float mass, float rotation);
		RigidBody2D();
		~RigidBody2D();

		float getRotation() const;
		void setRotation(const float rotationAngle);

		float getMass() const;
		void setMass(const float);
		float getInverseMass() const;

		float getXPos() const;
		void setXPos(const float x_pos);

		float getYPos() const;
		void setYPos(const float y_pos);

		Math::Vector2f getPosition() const;
		void setPosition(const Math::Vector2f _position);
	};
}

#endif // RIGIDBODY_H