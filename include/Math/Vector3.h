
#pragma once

#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>
#include <algorithm>

namespace Sera
{
	namespace Math
	{
		class Vector3i
		{
		private:
			int _x;
			int _y;
			int _z;

		public:
			Vector3i();
			Vector3i(const int x, const int y, const int z);
			Vector3i(const Vector3i &otherVec3);
			~Vector3i();

			void setX(const int x);
			int getX() const;

			void setY(const int y);
			int getY() const;

			void setZ(const int z);
			int getZ() const;

			// vec3i = vec3i + vec3i
			Vector3i operator+(const Vector3i &otherVec3i);
			Vector3i add(const Vector3i &otherVec3i);

			// vec3i = vec3i + i
			Vector3i operator+(const int scalar);
			Vector3i add(const int scalar);

			// vec3i = vec3i - vec3i
			Vector3i operator-(const Vector3i &otherVec3i);
			Vector3i sub(const Vector3i &otherVec3i);

			// vec3i = vec3i - i
			Vector3i operator-(const int scalar);
			Vector3i sub(const int scalar);

			// vec3i = vec3i * vec3i
			Vector3i operator*(const Vector3i &otherVec3i);
			Vector3i mul(const Vector3i &otherVec3i);

			// vec3i = vec3i * i
			Vector3i operator*(const int scalar);
			Vector3i mul(const int scalar);

			// vec3i = vec3i / vec3i
			Vector3i operator/(const Vector3i &otherVec3i);
			Vector3i div(const Vector3i &otherVec3i);

			// vec3i = vec3i / i
			Vector3i operator/(const int scalar);
			Vector3i div(const int scalar);

			// dot product.
			Vector3i dotProduct(const Vector3i &otherVec3i);

			// cross product.
			Vector3i crossProduct(const Vector3i &otherVec3i);

			// component product.
			Vector3i componentProduct(const Vector3i &otherVec3i);

			// magnitude aka norm.

			// [x, y, z] -> abs(x) + abs(y) + abs(z)
			// [1, 2, 3] -> abs(1) + abs(2) + abs(3) -> 6
			float l1norm();

			// [x, y, z] -> sqrt(x^2 + y^2 + z^2)
			// [1, 2, 3] -> sqrt(1*1 + 2*2 + 3*3) -> sqrt(14) -> 3.74... 
			float l2norm();

			// [x, y, z] -> max(x, y, z)
			// [1, 2, 3] -> max(1, 2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector3i &otherVec3i);
		};

		class Vector3f
		{
		private:
			float _x;
			float _y;
			float _z;

		public:
			Vector3f();
			Vector3f(const float x, const float y, const float z);
			Vector3f(const Vector3i &otherVec3);
			~Vector3f();

			void setX(const float x);
			float getX() const;

			void setY(const float y);
			float getY() const;

			void setZ(const float z);
			float getZ() const;

			// vec3f = vec3f + vec3f
			Vector3f operator+(const Vector3f &othervec3f);
			Vector3f add(const Vector3f &othervec3f);

			// vec3f = vec3f + f
			Vector3f operator+(const float scalar);
			Vector3f add(const float scalar);

			// vec3f = vec3f - vec3f
			Vector3f operator-(const Vector3f &othervec3f);
			Vector3f sub(const Vector3f &othervec3f);

			// vec3f = vec3f - f
			Vector3f operator-(const float scalar);
			Vector3f sub(const float scalar);

			// vec3f = vec3f * vec3f
			Vector3f operator*(const Vector3f &othervec3f);
			Vector3f mul(const Vector3f &othervec3f);

			// vec3f = vec3f * f
			Vector3f operator*(const float scalar);
			Vector3f mul(const float scalar);

			// vec3f = vec3f / vec3f
			Vector3f operator/(const Vector3f &othervec3f);
			Vector3f div(const Vector3f &othervec3f);

			// vec3f = vec3f / f
			Vector3f operator/(const float scalar);
			Vector3f div(const float scalar);

			// dot product.
			Vector3f dotProduct(const Vector3f &othervec3f);

			// cross product.
			Vector3f crossProduct(const Vector3f &othervec3f);

			// component product.
			Vector3f componentProduct(const Vector3f &othervec3f);

			// magnitude aka norm.

			// [x, y, z] -> abs(x) + abs(y) + abs(z)
			// [1, 2, 3] -> abs(1) + abs(2) + abs(3) -> 6
			float l1norm();

			// [x, y, z] -> sqrt(x^2 + y^2 + z^2)
			// [1, 2, 3] -> sqrt(1*1 + 2*2 + 3*3) -> sqrt(14) -> 3.74...
			float l2norm();

			// [x, y, z] -> max(x, y, z)
			// [1, 2, 3] -> max(1, 2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector3f &othervec3f);
		};

		class Vector3d
		{
		private:
			int _x;
			int _y;
			int _z;

		public:
			Vector3d();
			Vector3d(const double x, const double y, const double z);
			Vector3d(const Vector3d &otherVec3);
			~Vector3d();

			void setX(const double x);
			double getX() const;

			void setY(const double y);
			double getY() const;

			void setZ(const double z);
			double getZ() const;

			// vec3d = vec3d + vec3d
			Vector3d operator+(const Vector3d &othervec3d);
			Vector3d add(const Vector3d &othervec3d);

			// vec3d = vec3d + d
			Vector3d operator+(const double scalar);
			Vector3d add(const double scalar);

			// vec3d = vec3d - vec3d
			Vector3d operator-(const Vector3d &othervec3d);
			Vector3d sub(const Vector3d &othervec3d);

			// vec3d = vec3d - d
			Vector3d operator-(const double scalar);
			Vector3d sub(const double scalar);

			// vec3d = vec3d * vec3d
			Vector3d operator*(const Vector3d &othervec3d);
			Vector3d mul(const Vector3d &othervec3d);

			// vec3d = vec3d * d
			Vector3d operator*(const double scalar);
			Vector3d mul(const double scalar);

			// vec3d = vec3d / vec3d
			Vector3d operator/(const Vector3d &othervec3d);
			Vector3d div(const Vector3d &othervec3d);

			// vec3d = vec3d / d
			Vector3d operator/(const double scalar);
			Vector3d div(const double scalar);

			// dot product.
			Vector3d dotProduct(const Vector3d &othervec3d);

			// cross product.
			Vector3d crossProduct(const Vector3d &othervec3d);

			// component product.
			Vector3d componentProduct(const Vector3d &othervec3d);

			// magnitude aka norm.

			// [x, y, z] -> abs(x) + abs(y) + abs(z)
			// [1, 2, 3] -> abs(1) + abs(2) + abs(3) -> 6
			float l1norm();

			// [x, y, z] -> sqrt(x^2 + y^2 + z^2)
			// [1, 2, 3] -> sqrt(1*1 + 2*2 + 3*3) -> sqrt(14) -> 3.74...
			float l2norm();

			// [x, y, z] -> max(x, y, z)
			// [1, 2, 3] -> max(1, 2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector3d &othervec3d);
		};

		void rotate(Vector3f, Vector3f, float);
		void rotate(Vector3d, Vector3f, float);
		void rotate(Vector3i, Vector3f, float);
	}
}

#endif // VECTOR3_H