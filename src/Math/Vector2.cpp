#include <include/Math/Vector2.h>

// vec2i

Sera::Math::Vector2i::Vector2i()
{
}

Sera::Math::Vector2i::Vector2i(const int x, const int y) : _x(x), _y(y)
{
}

Sera::Math::Vector2i::Vector2i(const Vector2i &otherVec2i)
{
	_x = otherVec2i.getX();
	_y = otherVec2i.getY();
}

Sera::Math::Vector2i::~Vector2i()
{
}

void Sera::Math::Vector2i::setX(const int x)
{
	_x = x;
}

int Sera::Math::Vector2i::getX() const
{
	return _x;
}

void Sera::Math::Vector2i::setY(const int y)
{
	_y = y;
}

int Sera::Math::Vector2i::getY() const
{
	return _y;
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator+(const Vector2f &otherVec2i)
{
	return {_x + otherVec2i.getX(), _y + otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::add(const Vector2f &otherVec2i)
{
	return {_x + otherVec2i.getX(), _y + otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator+(const int scalar)
{
	return {_x + scalar, _y + scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::add(const int scalar)
{
	return {_x + scalar, _y + scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator-(const Vector2f &otherVec2i)
{
	return {_x - otherVec2i.getX(), _y - otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::sub(const Vector2f &otherVec2i)
{
	return {_x - otherVec2i.getX(), _y - otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator-(const int scalar)
{
	return {_x - scalar, _y - scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::sub(const int scalar)
{
	return {_x - scalar, _y - scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator*(const Vector2f &otherVec2i)
{
	return {_x * otherVec2i.getX(), _y * otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::mul(const Vector2f &otherVec2i)
{
	return {_x * otherVec2i.getX(), _y * otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator*(const int scalar)
{
	return {_x * scalar, _y * scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::mul(const int scalar)
{
	return {_x * scalar, _y * scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator/(const Vector2f &otherVec2i)
{
	return {_x / otherVec2i.getX(), _y / otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::div(const Vector2f &otherVec2i)
{
	return {_x / otherVec2i.getX(), _y / otherVec2i.getY()};
}

Sera::Math::Vector2i Sera::Math::Vector2i::operator/(const int scalar)
{
	return {_x / scalar, _y / scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::div(const int scalar)
{
	return {_x / scalar, _y / scalar};
}

Sera::Math::Vector2i Sera::Math::Vector2i::dotProduct(const Vector2i &otherVec2i)
{
}

Sera::Math::Vector2i Sera::Math::Vector2i::crossProduct(const Vector2i &otherVec2i)
{
}

Sera::Math::Vector2i Sera::Math::Vector2i::componentProduct(const Vector2i &otherVec2i)
{
}

float Sera::Math::Vector2i::l1norm()
{
	// if (_x < 0)
	// {
	// 	_x *= -1;
	// }

	_x = std::abs(_x);

	// if (_y < 0)
	// {
	// 	_y *= -1;
	// }

	_y = std::abs(_y);

	return _x + _y;
}

float Sera::Math::Vector2i::l2norm()
{
	return std::sqrt(_x*_x + _y*_y);
}

float Sera::Math::Vector2i::l3norm()
{
	return std::max(_x, _y);
}

float Sera::Math::Vector2i::angle(const Vector2i &otherVec2i)
{
}

// vec2f

Sera::Math::Vector2f::Vector2f()
{
}

Sera::Math::Vector2f::Vector2f(const float x, const float y)
{
}

Sera::Math::Vector2f::Vector2f(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f::~Vector2f()
{
}

void Sera::Math::Vector2f::setX(const float x)
{
}

float Sera::Math::Vector2f::getX() const
{
}

void Sera::Math::Vector2f::setY(const float y)
{
}

float Sera::Math::Vector2f::getY() const
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator+(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::add(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator+(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::add(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator-(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::sub(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator-(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::sub(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator*(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::mul(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator*(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::mul(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator/(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::div(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::operator/(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::div(const float scalar)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::dotProduct(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::crossProduct(const Vector2f &otherVec2f)
{
}

Sera::Math::Vector2f Sera::Math::Vector2f::componentProduct(const Vector2f &otherVec2f)
{
}

float Sera::Math::Vector2f::l1norm()
{
}

float Sera::Math::Vector2f::l2norm()
{
}

float Sera::Math::Vector2f::l3norm()
{
}

float Sera::Math::Vector2f::angle(const Vector2f &otherVec2f)
{
}

// vec2d

Sera::Math::Vector2d::Vector2d()
{
}

Sera::Math::Vector2d::Vector2d(const double x, const double y)
{
}

Sera::Math::Vector2d::Vector2d(const Vector2d &otherVect)
{
}

Sera::Math::Vector2d::~Vector2d()
{
}

void Sera::Math::Vector2d::setX(const double x)
{
}

double Sera::Math::Vector2d::getX() const
{
}

void Sera::Math::Vector2d::setY(const double y)
{
}

double Sera::Math::Vector2d::getY() const
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator+(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::add(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator+(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::add(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator-(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::sub(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator-(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::sub(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator*(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::mul(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator*(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::mul(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator/(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::div(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::operator/(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::div(const double scalar)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::dotProduct(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::crossProduct(const Vector2d &otherVec2d)
{
}

Sera::Math::Vector2d Sera::Math::Vector2d::componentProduct(const Vector2d &otherVec2d)
{
}

float Sera::Math::Vector2d::l1norm()
{
}

float Sera::Math::Vector2d::l2norm()
{
}

float Sera::Math::Vector2d::l3norm()
{
}

float Sera::Math::Vector2d::angle(const Vector2d &otherVec2d)
{
}

// utils.

void Sera::Math::rotate(Vector2f, Vector2f, float)
{
}

void Sera::Math::rotate(Vector2d, Vector2f, float)
{
}

void Sera::Math::rotate(Vector2i, Vector2f, float)
{
}