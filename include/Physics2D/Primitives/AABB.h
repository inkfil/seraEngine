#include<include/Math/Math.h>
#include<include/Physics2D/RigidBody/RigidBody.h>
#include<vector>

#pragma once

#ifndef AABB_H
#define AABB_H

namespace Sera
{
	class AABB
	{
	public:
		Sera::Math::Vector2f center;
		Sera::Math::Vector2f size;
		Sera::Math::Vector2f max;
		Sera::Math::Vector2f min;
		Sera::RigidBody rigidbody;

		AABB(const Sera::Math::Vector2f _min, const Sera::Math::Vector2f _max)
		{
			size = Sera::Math::Vector2f(_max - _min);
			center = Sera::Math::Vector2f(_min + (size * 0.5f));
		}

		Sera::Math::Vector2f getMin() const
		{
			return min;
		}

		Sera::Math::Vector2f getMax() const
		{
			return max;
		}

		Sera::Math::Vector2f getCenter() const
		{
			return center;
		}

		Sera::Math::Vector2f getSize() const
		{
			return size;
		}

		std::vector<Sera::Math::Vector2f> getVertices() const
		{
			std::vector<Sera::Math::Vector2f> vertices{{min.getX(), min.getY()}, {min.getX(), max.getY()}, {max.getX(), min.getY()}, {max.getX(), max.getY()}};
			// compare using epsilon not like this
			if (rigidbody.rotation == 0.0f)
			{
				return vertices;
			}

			for (const auto &vertex : vertices)
			{
				// TODO: rotate method to rotate a point about center axis of the rigid body by "rotate" degree
				Sera::Math::rotate(vertex, rigidbody.getPosition(), rigidbody.getRotation());
			}

			return vertices;
		}
	};
}

#endif // AABB_H