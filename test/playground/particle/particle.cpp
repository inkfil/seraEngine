#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

#include <iostream>
#include <vector>
#include <string>

class Particle2D : public sf::Shape
{
public:
	Particle2D();
	Particle2D(const sf::Vector2f& pos, const sf::Vector2f& vel);

	float getXPos() const;
	void setXPos(float x_pos);

	float getYPos() const;
	void setYPos(float y_pos);

	float getX2Pos() const; // this.x2_pos = this.x_pos + this.width;
	float getY2Pos() const; // this.y2_pos = this.y_pos + this.height;

	float getParticleLife();

	void setInitialPosition(const sf::Vector2f &pos_v2f);
	void setInitialPosition(const float &x_pos, float &y_pos);

	void setInitialVelocity(const sf::Vector2f &vel_v2f);
	void setInitialVelocity(const float &x_vel, const float &y_vel);
	sf::Vector2f getVelocity() const;
	// std::pair<float, float> getVelocity();

	void setInitialAcceleration(const sf::Vector2f &acc_v2f);
	void setInitialAcceleration(const float &x_acc, const float &y_acc);
	sf::Vector2f getAcceleration() const;
	// std::pair<float, float> getAcceleration() const;

	void setSize(const sf::Vector2f &size_v2f);
	void setSize(const float &x_size, const float &y_size);
	void setRandSize(const sf::RenderWindow &window);

	void positionBoundCheck();

	bool update(const sf::Event& event);
	bool render(sf::RenderWindow &window);

private:
	float particleLife = 1.f;
	sf::Vector2f _pos{0, 0};
	sf::Vector2f _vel{0, 0};
	sf::Vector2f _acc{0, 0};
	sf::Vector2f _force{0, 0};
};

Particle2D::Particle2D()
{
}

Particle2D::Particle2D(const sf::Vector2f &pos, const sf::Vector2f &vel)
{
	this->_pos = pos;
	this->_vel = vel;
}

float Particle2D::getXPos() const
{
	return this->_pos.x;
}

void Particle2D::setXPos(float x_pos)
{
	this->_pos.x = x_pos;
}

float Particle2D::getYPos() const
{
	return this->_pos.y;
}

void Particle2D::setYPos(float y_pos)
{
	this->_pos.y = y_pos;
}

float Particle2D::getX2Pos() const
{
	return this->_pos.x;
}

float Particle2D::getY2Pos() const
{
	return this->_pos.y;
}

float Particle2D::getParticleLife()
{
	return this->particleLife;
}

void Particle2D::setInitialPosition(const sf::Vector2f &pos_v2f)
{
	this->_pos = pos_v2f;
}

void Particle2D::setInitialPosition(const float &x_pos, float &y_pos)
{
	this->_pos.x = x_pos;
	this->_pos.y = y_pos;
}

void Particle2D::setInitialVelocity(const sf::Vector2f &vel_v2f)
{
	this->_vel = vel_v2f;
}

void Particle2D::setInitialVelocity(const float &x_vel, const float &y_vel)
{
	this->_vel.x = x_vel;
	this->_vel.y = y_vel;
}

sf::Vector2f Particle2D::getVelocity() const
{
	return this->_vel;
}

//
void Particle2D::setInitialAcceleration(const sf::Vector2f &acc_v2f)
{
	this->_acc = acc_v2f;
}

void Particle2D::setInitialAcceleration(const float &x_acc, const float &y_acc)
{
	this->_acc.x = x_acc;
	this->_acc.y = y_acc;
}

sf::Vector2f Particle2D::getAcceleration() const
{
	return this->_acc;
}


void Particle2D::setSize(const sf::Vector2f &size_v2f)
{

}

void Particle2D::setSize(const float &x_size, const float &y_size)
{
}

void Particle2D::setRandSize(const sf::RenderWindow &window)
{
	// generate random number.

	// check if random number is within window bounds
	// else clamp

	// 
}

void Particle2D::positionBoundCheck()
{

}

bool Particle2D::update(const sf::Event &event)
{
	// move particle by event polled (Right-Left-Top-Bottom)
	// if (event.type == rightMoved){ particle.position.x += particle.velocity.x }
	// if (event.type == leftMoved){ particle.position.x -= particle.velocity.x }
	// if (event.type == upMoved){ particle.position.y += particle.velocity.y }
	// if (event.type == downMoved){ particle.position.y -= particle.velocity.y }

	if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->_pos.x += this->_vel.x;
	}
	if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->_pos.x -= this->_vel.x;
	}
	if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		this->_pos.y += this->_vel.y;
	}
	if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		this->_pos.y -= this->_vel.y;
	}

	// check for collision with other particles
	// Rect-Rect Collision
	// Rect-Circle Collision

	// update particle position if collision occurs
	// if (particle.x_right > 0){ particle.x_right = otherParticle.x_left}
	// if (particle.x_left < 0){ particle.x_left = otherParticle.x_right}
	// if (particle.y_top > 0){ particle.y_top = otherParticle.y_bottom}
	// if (particle.y_bottom > 0){ particle.y_bottom = otherParticle.y_top}
	return false;
}

bool Particle2D::render(sf::RenderWindow &window)
{
	return false;
}

int main()
{
	// std::cout << sf::VideoMode::getDesktopMode().width << std::endl;
	// std::cout << sf::VideoMode::getDesktopMode().height << std::endl;
	// std::cout << win.getSize().x << std::endl;
	// std::cout << win.getSize().y << std::endl;
	uint8_t WIDTH = 800;
	uint8_t HEIGHT = 600;
	std::string TITLE = "my window.";
	sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), TITLE, sf::Style::None); // sf::Style::Fullscreen);
	window.clear(sf::Color(0, 200, 0, 0));

	// set frame rate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);

	std::vector<Particle2D> particles(1000);
	std::cout << "particles size: " << particles.size() << std::endl;
	sf::Event event;
	while (window.isOpen() && !sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			window.clear();
			for(auto particleIter = 0; particleIter <= particles.size(); particleIter++){
				// particles.at(particleIter).
			}
			for (auto &particleIter : particles)
			{
				if (particleIter.getParticleLife() < 0)
				{
					// remove particle from particles.
				}
			}
		}
	}

	return 0;
}

// cl particle.cpp /I "\usr\local\include" /I "F:\All_Projects_Source\Cpp_Tuts\randomProjects\seraEngine\deps\SFML-2.5.1\include" /link "F:\All_Projects_Source\Cpp_Tuts\randomProjects\seraEngine\deps\SFML-2.5.1\build\lib"