#include<string>

class Window{
public:
	typedef enum{
		FullScreen,
		BorderLess,
	} ScreenMode;
	Window();
	~Window();
private:
	int height = 1080;
	int width = 720;
	bool isResizable;
	bool isMovable;
	std::string name = nullptr;
};

class SFMLWindow : public Window{
public:
	SFMLWindow();
	SFMLWindow(int height, int width, std::string name, ScreenMode mode);
};