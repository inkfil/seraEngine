
#pragma once

#ifndef POLYGON_H
#define POLYGON_H

namespace Sera
{
	namespace Math
	{

		class Polygon
		{
		private:
			int sides;

		public:
			Polygon();
			Polygon(const Polygon &otherPolygon);
			~Polygon();
		};
	}
}

#endif // POLYGON_H