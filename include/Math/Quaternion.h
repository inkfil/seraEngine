
#pragma once

#ifndef QUATERNION_H
#define QUATERNION_H

namespace Sera
{
	namespace Math
	{
		class Quaternion
		{
		private:
			float _x;
			float _y;
			float _z;
			float _w;

		public:
			Quaternion(const float x, const float y, const float z);
			Quaternion(const Quaternion &otherQuat);
			~Quaternion();

			// Quat = Quat + Quat
			Quaternion operator+(const Quaternion &otherQuat);
			Quaternion add(const Quaternion &otherQuat);

			// Quat = Quat + scalar
			Quaternion operator+(const float scalar);
			Quaternion add(const float scalar);

			// Quat = Quat - Quat
			Quaternion operator-(const Quaternion &otherQuat);
			Quaternion sub(const Quaternion &otherQuat);

			// Quat = Quat - scalar
			Quaternion operator-(const float scalar);
			Quaternion sub(const float scalar);

			// Quat = Quat * Quat
			Quaternion operator*(const Quaternion &otherQuat);
			Quaternion mul(const Quaternion &otherQuat);

			// Quat = Quat * scalar
			Quaternion operator*(const float scalar);
			Quaternion mul(const float scalar);

			// Quat = Quat / Quat
			Quaternion operator/(const Quaternion &otherQuat);
			Quaternion div(const Quaternion &otherQuat);

			// Quat = Quat / scalar
			Quaternion operator/(const float scalar);
			Quaternion div(const float scalar);

			// magnitude aka norm.
			float norm(const Quaternion &otherQuat);
		};
	}
}

#endif // QUATERNION_H