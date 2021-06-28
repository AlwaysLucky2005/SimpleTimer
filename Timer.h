#pragma once
#include <ctime>
#include <iostream>
#include <chrono>
#include <thread>
class Timer
{
private:
	std::chrono::milliseconds startTime, endTime;
public:
	Timer();
	~Timer();
};