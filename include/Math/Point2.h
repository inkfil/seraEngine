
#pragma once

#ifndef POINT2_H
#define POINT2_H

namespace Sera
{
	namespace Math
	{
		class Point2i
		{
		private:
			int _x;
			int _y;

		public:
			Point2i(const int x, const int y);
			Point2i(const Point2i &otherPoint2i);
			~Point2i();

			void setX(const int _x);
			int getX() const;
			void setY(const int _y);
			int getY() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};

		class Point2f
		{
		private:
			float _x;
			float _y;

		public:
			Point2f(const float x, const float y);
			Point2f(const Point2f &otherPoint2f);
			~Point2f();

			void setX(const float _x);
			float getX() const;
			void setY(const float _y);
			float getY() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};

		class Point2d
		{
		private:
			double _x;
			double _y;

		public:
			Point2d(const double x, const double y);
			Point2d(const Point2d &otherPoint2d);
			~Point2d();

			void setX(const double _x);
			double getX() const;
			void setY(const double _y);
			double getY() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};
	}
}

#endif // POINT2_H