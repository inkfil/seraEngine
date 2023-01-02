#pragma once

#ifndef TIMER_H
#define TIMER_H

namespace S
{
	namespace Utils
	{

		class Timer
		{
		private:
			float mTime;

		public:
			Timer(float time = 0.0f) : mTime(time){};
			float getSeconds() const { return mTime; }
			float getMilliseconds() const { return mTime * 1000.0f; }
		};
	}
}

#endif // endif TIMER_H
