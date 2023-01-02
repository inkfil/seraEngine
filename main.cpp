
// Standard Headers
#include <iostream>
#include <string>
#include <vector>

// SFML Headers
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

// Engine Specific Headers

template <typename T>
class vector3
{
private:
	T _x;
	T _y;
	T _z;

public:
	vector3(const T x, const T y, const T z);
	vector3(const vector3<T> &otherVec3);
	~vector3();

	void setX(const T x);
	T getX() const;

	void setY(const T y);
	T getY() const;

	void setZ(const T z);
	T getZ() const;

	// vec3<T> + vec3<T>
	// vec3<T> + T

	// vec3<T> - vec3<T>
	// vec3<T> - T

	// vec3<T> * vec3<T>
	// vec3<T> * T

	// vec3<T> / vec3<T>
	// vec3<T> / T

	// dot product
	// cross product
	// magnitude
	// vector3<T>& operator=(const vector3<T>& otherVec3);
	// oparator=(const T& scalar);
	// operator+(const vector3<T>& otherVec3);
	// operator+(const T& scalar);
	// operator*(const vector3<T>& otherVec3);
	// operator*(const T& scalar);
	// operator-(const vector3<T>& otherVec3);
	// operator-(const T& scalar);
	// operator/(const vector3<T>& otherVec3);
	// operator/(const T& scalar);
};


template <typename T>
class vector2
{
private:
	T _x;
	T _y;

public:
	vector2(const T x, const T y);
	vector2(const vector2<T> &otherVect);
	~vector2();

	void setX(const T x);
	T getX() const;

	void setY(const T y);
	T getY() const;

	// vec2<T> + vec2<T>
	// vec2<T> + T

	// vec2<T> - vec2<T>
	// vec2<T> - T

	// vec2<T> * vec2<T>
	// vec2<T> * T

	// vec2<T> / vec2<T>
	// vec2<T> / T

	// dot product
	// cross product
	// magnitude
	// vector2<T>& operator=(const vector2<T>& otherVec2);
	// oparator=(const T& scalar);
	// operator+(const vector2<T>& otherVec2);
	// operator+(const T& scalar);
	// operator*(const vector2<T>& otherVec2);
	// operator*(const T& scalar);
	// operator-(const vector2<T>& otherVec2);
	// operator-(const T& scalar);
	// operator/(const vector2<T>& otherVec2);
	// operator/(const T& scalar);
};



class Object
{
};

class RigidBody : public Object
{
};

class SoftBody : public Object
{
};

class Shape : public Object
{
};

class Rectangle : public Shape
{
};

class Circle : public Shape
{
};

class Point : public Shape
{
};

class Collider : public Object
{
};

class RectRectCollider : public Collider
{
};
class RectCircleCollider : public Collider
{
};

class RectPointCollider : public Collider
{
};
class CircleCircleCollider : public Collider
{
};

class CirclePointCollider : public Collider
{
};

class PointPointCollider : public Collider
{
};

int main()
{
	// std::cout << sf::VideoMode::getDesktopMode().width << std::endl;
	// std::cout << sf::VideoMode::getDesktopMode().height << std::endl;
	// std::cout << win.getSize().x << std::endl;
	// std::cout << win.getSize().y << std::endl;
	uint8_t WIDTH = 800;
	uint8_t HEIGHT = 600;
	std::string TITLE = "SFML WINDOW.";
	sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), TITLE, sf::Style::None);

	// set frame rate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);

	std::vector<Particle> particles;

	while (window.isOpen() && !sf::Keyboard::isKeyPressed(sf::Keyboard::Escaped))
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event::type == Event::Closed)
			{
				window.close();
			}
			// window.clear();
			// for(auto particleIter = 0; particleIter <= particles.size(); particleIter++){
			// 	particles.at(particleIter).
			// }
			for (auto &particleIter : particles)
			{
				if (particleIter.particleLife < 0)
				{
					// remove particle from particles.
				}
			}
		}
	}

	return 0;
}

namespace AABB
{
	bool RectRectCollision(const Rectangle &otherRect)
	{
		// Conditions to determine if 2 Rectangles Collide:
		// 1. (this.left > otherRect.right)
		// 2. (this.right < otherRect.left)
		// 3. (this.top > otherRect.bottom)
		// 4. (this.bottom < otherRect.top)
		if ((this.getXPos() > otherRect.getX2Pos()) && (this.getX2Pos() < otherRect.getXPos()) &&
			(this.getYPos() > otherRect.getY2Pos()) && (this.getY2Pos() < otherRect.getYPos()))
		{
			return false;
		}
		return true;
	}

	bool RectCircleCollisionV1(const Circle &circle)
	{
		// Conditions to determine if a Rectangle and Circle Collide:

		// 1. (this.left > circle.radius + )
		// 2. (this.right < otherRect.left)
		// 3. (this.top > otherRect.bottom)
		// 4. (this.bottom < otherRect.top)
	}

	bool CircleRectCollisionV1(const Rectangle &otherRect)
	{
		// Conditions to determine if a Rectangle and Circle Collide:
		// 1. (this.left > otherRect.right)
		// 2. (this.right < otherRect.left)
		// 3. (this.top > otherRect.bottom)
		// 4. (this.bottom < otherRect.top)
	}

	bool RectCircleCollisionV2(const Circle &circle)
	{
		// Conditions to determine if a Rectangle and Circle Collide:
		// 1. if (circle.x_pos < rect.x_pos){tmpx = rect.x_pos;}
		// 	  elseif (circle.x_pos > rect.x_pos + rect.width){tmpx = rect.x_pos + rect.width;}
		// 2. if (circle.y_pos < rect.y_pos){tmpy = rect.y_pos;}
		// 	  elseif (circle.y_pos > rect.y_pos + rect.height){tmpy = rect.y_pos + rect.height;}
		// 3. find (x_dist = circle.x_pos - tmpx) and (y_dist = circle.y_pos - tmpy)
		// 4. find (distance_squared = x_dist*x_dist + y_dist*y_dist)
		// 5. if (distance_squared < circle.radius){ return true}
		// 6. return false;
	}

	bool CircleRectCollisionV2(const Rectangle &otherRect)
	{
		// Conditions to determine if a Rectangle and Circle Collide:
		// 1. (this.left > otherRect.right)
		// 2. (this.right < otherRect.left)
		// 3. (this.top > otherRect.bottom)
		// 4. (this.bottom < otherRect.top)
	}

	bool CircleCircleCollision(const Circle &otherCircle)
	{
		// Conditions to determine if 2 Circles Collide:
		// 1. (dist(this.rad, otherCircle.rad) > sum(this.rad, otherCircle.rad))
		float distance_squared = this.radius * this.radius + otherCircle.radius * otherCircle.radius;
		float sum_of_radii = this.radius + otherCircle.radius;
	}
}

void Move()
{
	// move particle by event polled (Right-Left-Top-Bottom)
	// if (event.type == rightMoved){ particle.position.x += particle.velocity.x }
	// if (event.type == leftMoved){ particle.position.x -= particle.velocity.x }
	// if (event.type == upMoved){ particle.position.y += particle.velocity.y }
	// if (event.type == downMoved){ particle.position.y -= particle.velocity.y }

	// check for collision with other particles
	// Rect-Rect Collision
	// Rect-Circle Collision
	// circle-circle collision

	// update particle position if collision occurs
	// if (particle.x_right > 0){ particle.x_right = otherParticle.x_left}
	// if (particle.x_left < 0){ particle.x_left = otherParticle.x_right}
	// if (particle.y_top > 0){ particle.y_top = otherParticle.y_bottom}
	// if (particle.y_bottom > 0){ particle.y_bottom = otherParticle.y_top}
}