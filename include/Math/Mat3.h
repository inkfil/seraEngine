
#pragma once

#ifndef MAT3_H
#define MAT3_H

namespace Sera
{
	namespace Math
	{
		class Mat3i
		{
		private:
			int x1, x2, x3, x4, x5, x6, x7, x8, x9;

		public:
			Mat3i();
			Mat3i(const Mat3i &otherMat2f);
			~Mat3i();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};

		class Mat3f
		{
		private:
			float x1, x2, x3, x4, x5, x6, x7, x8, x9;

		public:
			Mat3f();
			Mat3f(const Mat3f &otherMat3i);
			~Mat3f();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};

		class Mat3d
		{
		private:
			double x1, x2, x3, x4, x5, x6, x7, x8, x9;

		public:
			Mat3d();
			Mat3d(const Mat3d &otherMat3d);
			~Mat3d();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};
	}
}

#endif // MAT3_H