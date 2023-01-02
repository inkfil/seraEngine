
#pragma once

#ifndef LINE2_H
#define LINE2_H

#include <include/Math/Point2.h>

namespace Sera
{
	namespace Math
	{
		class Line2i
		{
		private:
			Point2i _p1;
			Point2i _p2;

		public:
			Line2i(const Point2i &p1, const Point2i &p2);
			Line2i(const Line2i &otherLine2i);
			~Line2i();

			float getLenth() const;
			float getSlope() const;
			Point2i getCenterOfLine() const;
			float getYIntercept() const;

			int getPerpendicularDistance(const Point2i &point2i) const;
			int getPerpendicularDistance(const Point2f &point2f) const;
			int getPerpendicularDistance(const Point2d &point2d) const;

			bool isInterseting(const Line2i &otherLine2i) const;
			float getAngleOfIntersection(const Line2i &otherLine2i) const;

			bool isCollinear(const Line2i &otherLine2i) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};

		class Line2f
		{
		private:
			Point2f _p1;
			Point2f _p2;

		public:
			Line2f(const Point2f &p1, const Point2f &p2);
			Line2f(const Line2f &otherLine2f);
			~Line2f();

			float getLenth() const;
			float getSlope() const;
			Point2f getCenterOfLine() const;

			float getPerpendicularDistance(const Point2i &point2i) const;
			float getPerpendicularDistance(const Point2f &point2f) const;
			float getPerpendicularDistance(const Point2d &point2d) const;

			bool isInterseting(const Line2f &otherLine2f) const;
			float getAngleOfIntersection(const Line2f &otherLine2f) const;

			bool isCollinear(const Line2f &otherLine2f) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};

		class Line2d
		{
		private:
			Point2d _p1;
			Point2d _p2;

		public:
			Line2d(const Point2d &p1, const Point2d &p2);
			Line2d(const Line2d &otherLine2d);
			~Line2d();

			float getLenth() const;
			float getSlope() const;
			Point2d getCenterOfLine() const;

			double getPerpendicularDistance(const Point2i &point2i) const;
			double getPerpendicularDistance(const Point2f &point2f) const;
			double getPerpendicularDistance(const Point2d &point2d) const;

			bool isInterseting(const Line2d &otherLine2d) const;
			float getAngleOfIntersection(const Line2d &otherLine2d) const;

			bool isCollinear(const Line2d &otherLine2d) const;

			// std::string toString()
			// {
			// std::string ret_val;
			// ret_val("Line: {{" + _p1.getX() + ", " + _p1.getY() + "}, {" + _p2.getX() + ", " + _p2.getY() + "}.");
			// }
		};
	}
}

#endif // LINE2_H