
#pragma once

#ifndef MAT2_H
#define MAT2_H

namespace Sera
{
	namespace Math
	{
		class Mat2i
		{
		private:
			int x1, x2, x3, x4;

		public:
			Mat2i();
			Mat2i(const Mat2i &otherMat2i);
			~Mat2i();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};

		class Mat2f
		{
		private:
			float x1, x2, x3, x4;

		public:
			Mat2f();
			Mat2f(const Mat2i &otherMat2i);
			~Mat2f();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};

		class Mat2d
		{
		private:
			double x1, x2, x3, x4;

		public:
			Mat2d();
			Mat2d(const Mat2i &otherMat2i);
			~Mat2d();

			void getColumn(const int col) const;
			void getRow(const int row) const;
		};
	}
}

#endif // MAT2_H