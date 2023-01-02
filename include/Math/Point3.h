
#pragma once

#ifndef POINT3_H
#define POINT3_H

namespace Sera
{
	namespace Math
	{
		class Point3i
		{
		private:
			int _x;
			int _y;
			int _z;

		public:
			Point3i(const int x, const int y, const int z);
			Point3i(const Point3i &otherPoint3i);
			~Point3i();

			void setX(const int _x);
			int getX() const;
			void setY(const int _y);
			int getY() const;
			void setZ(const int _z);
			int getZ() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};

		class Point3f
		{
		private:
			float _x;
			float _y;
			float _z;

		public:
			Point3f(const float x, const float y, const float z);
			Point3f(const Point3f &otherPoint3f);
			~Point3f();

			void setX(const float _x);
			float getX() const;
			void setY(const float _y);
			float getY() const;
			void setZ(const float _z);
			float getZ() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};

		class Point3d
		{
		private:
			double _x;
			double _y;
			double _z;

		public:
			Point3d(const double x, const double y, const double z);
			Point3d(const Point3d &otherPoint3d);
			~Point3d();

			void setX(const double _x);
			double getX() const;
			void setY(const double _y);
			double getY() const;
			void setZ(const double _z);
			double getZ() const;

			// void toString()
			// {
			// 	std::cout << "point: {" << x << ", " << y << "}." << std::endl;
			// }
		};
	}
}

#endif // POINT3_H