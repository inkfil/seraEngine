
#pragma once

#ifndef LINE3_H
#define LINE3_H

#include <include/Math/Point3.h>

namespace Sera
{
	namespace Math
	{
		class Line3i
		{
		private:
			Point3i _p1;
			Point3i _p2;

		public:
			Line3i(const Point3i &p1, const Point3i &p2);
			Line3i(const Line3i &otherLine3i);
			~Line3i();

			float getLenth() const;
			float getSlope() const;
			Point3i getCenterOfLine() const;
			float getYIntercept() const;

			int getPerpendicularDistance(const Point3i &point3i) const;
			int getPerpendicularDistance(const Point3f &point3f) const;
			int getPerpendicularDistance(const Point3d &point3d) const;

			bool isInterseting(const Line3i &otherLine3i) const;
			float getAngleOfIntersection(const Line3i &otherLine3i) const;

			bool isCollinear(const Line3i &otherLine3i) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};

		class Line3f
		{
		private:
			Point3f _p1;
			Point3f _p2;

		public:
			Line3f(const Point3f &p1, const Point3f &p2);
			Line3f(const Line3f &otherLine3f);
			~Line3f();

			float getLenth() const;
			float getSlope() const;
			Point3f getCenterOfLine() const;

			float getPerpendicularDistance(const Point3i &point3i) const;
			float getPerpendicularDistance(const Point3f &point3f) const;
			float getPerpendicularDistance(const Point3d &point3d) const;

			bool isInterseting(const Line3f &otherLine3f) const;
			float getAngleOfIntersection(const Line3f &otherLine3f) const;

			bool isCollinear(const Line3f &otherLine3f) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};

		class Line3d
		{
		private:
			Point3d _p1;
			Point3d _p2;

		public:
			Line3d(const Point3d &p1, const Point3d &p2);
			Line3d(const Line3d &otherLine3d);
			~Line3d();

			float getLenth() const;
			float getSlope() const;
			Point3d getCenterOfLine() const;

			double getPerpendicularDistance(const Point3i &point3i) const;
			double getPerpendicularDistance(const Point3f &point3f) const;
			double getPerpendicularDistance(const Point3d &point3d) const;

			bool isInterseting(const Line3d &otherLine3d) const;
			float getAngleOfIntersection(const Line3d &otherLine3d) const;

			bool isCollinear(const Line3d &otherLine3d) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};
	}
}

#endif // LINE3_H