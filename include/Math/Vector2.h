
#pragma once

#ifndef VECTOR2_H
#define VECTOR2_H

#include<cmath>
#include<algorithm>

namespace Sera
{
	namespace Math
	{
		class Vector2i
		{
		private:
			int _x;
			int _y;

		public:
			Vector2i();
			Vector2i(const int x, const int y);
			Vector2i(const Vector2i &otherVect);
			~Vector2i();

			void setX(const int x);
			int getX() const;

			void setY(const int y);
			int getY() const;

			// vec2i = vec2i + vec2i
			Vector2i operator+(const Vector2f &otherVec2i);
			Vector2i add(const Vector2f &otherVec2i);

			// vec2i = vec2i + i
			Vector2i operator+(const int scalar);
			Vector2i add(const int scalar);

			// vec2i = vec2i - vec2i
			Vector2i operator-(const Vector2f &otherVec2i);
			Vector2i sub(const Vector2f &otherVec2i);

			// vec2i = vec2i - i
			Vector2i operator-(const int scalar);
			Vector2i sub(const int scalar);

			// vec2i = vec2i * vec2i
			Vector2i operator*(const Vector2f &otherVec2i);
			Vector2i mul(const Vector2f &otherVec2i);

			// vec2i = vec2i * i
			Vector2i operator*(const int scalar);
			Vector2i mul(const int scalar);

			// vec2i = vec2i / vec2i
			Vector2i operator/(const Vector2f &otherVec2i);
			Vector2i div(const Vector2f &otherVec2i);

			// vec2i = vec2i / i
			Vector2i operator/(const int scalar);
			Vector2i div(const int scalar);

			// dot product.
			Vector2i dotProduct(const Vector2i &otherVec2i);

			// cross product.
			Vector2i crossProduct(const Vector2i &otherVec2i);

			// component product.
			Vector2i componentProduct(const Vector2i &otherVec2i);

			// magnitude aka norm.

			// [x, y] -> abs(x) + abs(y)
			// [2, 3] -> abs(2) + abs(3) -> 5
			float l1norm();

			// [x, y] -> sqrt(x^2 + y^2)
			// [2, 3] -> sqrt(2*2 + 3*3) -> sqrt(14) -> 3.60...
			float l2norm();

			// [x, y] -> max(x, y)
			// [2, 3] -> max(2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector2i &otherVec2i);
		};

		class Vector2f
		{
		private:
			float _x;
			float _y;

		public:
			Vector2f();
			Vector2f(const float x, const float y);
			Vector2f(const Vector2f &otherVec2f);
			~Vector2f();

			void setX(const float x);
			float getX() const;

			void setY(const float y);
			float getY() const;

			// vec2f = vec2f + vec2f
			Vector2f operator+(const Vector2f &otherVec2f);
			Vector2f add(const Vector2f &otherVec2f);

			// vec2f = vec2f + f
			Vector2f operator+(const float scalar);
			Vector2f add(const float scalar);

			// vec2f = vec2f - vec2f
			Vector2f operator-(const Vector2f &otherVec2f);
			Vector2f sub(const Vector2f &otherVec2f);

			// vec2f = vec2f - f
			Vector2f operator-(const float scalar);
			Vector2f sub(const float scalar);

			// vec2f = vec2f * vec2f
			Vector2f operator*(const Vector2f &otherVec2f);
			Vector2f mul(const Vector2f &otherVec2f);

			// vec2f = vec2f * f
			Vector2f operator*(const float scalar);
			Vector2f mul(const float scalar);

			// vec2f = vec2f / vec2f
			Vector2f operator/(const Vector2f &otherVec2f);
			Vector2f div(const Vector2f &otherVec2f);

			// vec2f = vec2f / f
			Vector2f operator/(const float scalar);
			Vector2f div(const float scalar);

			// dot product.
			Vector2f dotProduct(const Vector2f &otherVec2f);

			// cross product.
			Vector2f crossProduct(const Vector2f &otherVec2f);

			// component product.
			Vector2f componentProduct(const Vector2f &otherVec2f);

			// magnitude aka norm.

			// [x, y] -> abs(x) + abs(y)
			// [2, 3] -> abs(2) + abs(3) -> 5
			float l1norm();

			// [x, y] -> sqrt(x^2 + y^2)
			// [2, 3] -> sqrt(2*2 + 3*3) -> sqrt(14) -> 3.60...
			float l2norm();

			// [x, y] -> max(x, y)
			// [2, 3] -> max(2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector2f &otherVec2f);
		};

		class Vector2d
		{
		private:
			double _x;
			double _y;

		public:
			Vector2d();
			Vector2d(const double x, const double y);
			Vector2d(const Vector2d &otherVect);
			~Vector2d();

			void setX(const double x);
			double getX() const;

			void setY(const double y);
			double getY() const;

			// vec2d = vec2d + vec2d
			Vector2d operator+(const Vector2d &otherVec2d);
			Vector2d add(const Vector2d &otherVec2d);

			// vec2d = vec2d + d
			Vector2d operator+(const double scalar);
			Vector2d add(const double scalar);

			// vec2d = vec2d - vec2d
			Vector2d operator-(const Vector2d &otherVec2d);
			Vector2d sub(const Vector2d &otherVec2d);

			// vec2d = vec2d - d
			Vector2d operator-(const double scalar);
			Vector2d sub(const double scalar);

			// vec2d = vec2d * vec2d
			Vector2d operator*(const Vector2d &otherVec2d);
			Vector2d mul(const Vector2d &otherVec2d);

			// vec2d = vec2d * d
			Vector2d operator*(const double scalar);
			Vector2d mul(const double scalar);

			// vec2d = vec2d / vec2d
			Vector2d operator/(const Vector2d &otherVec2d);
			Vector2d div(const Vector2d &otherVec2d);

			// vec2d = vec2d / d
			Vector2d operator/(const double scalar);
			Vector2d div(const double scalar);

			// dot product.
			Vector2d dotProduct(const Vector2d &otherVec2d);

			// cross product.
			Vector2d crossProduct(const Vector2d &otherVec2d);

			// component product.
			Vector2d componentProduct(const Vector2d &otherVec2d);

			// magnitude aka norm.

			// [x, y] -> abs(x) + abs(y)
			// [2, 3] -> abs(2) + abs(3) -> 5
			float l1norm();

			// [x, y] -> sqrt(x^2 + y^2)
			// [2, 3] -> sqrt(2*2 + 3*3) -> sqrt(14) -> 3.60...
			float l2norm();

			// [x, y] -> max(x, y)
			// [2, 3] -> max(2, 3) -> 3
			float l3norm();

			// angle between 2 vectors.
			float angle(const Vector2d &otherVec2d);
		};

		void rotate(Vector2f, Vector2f, float);
		void rotate(Vector2d, Vector2f, float);
		void rotate(Vector2i, Vector2f, float);
	}
}

#endif // VECTOR2_H