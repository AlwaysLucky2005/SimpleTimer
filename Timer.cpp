#include "Timer.h"
using namespace std::chrono;

Timer::Timer()
{
	startTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
}
Timer::~Timer()
{
	endTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	int x = (endTime - startTime).count();
	std::cout <<"Your Programm finished his work at: "<< x/1000.0<<" seconds"<< std::endl;
}