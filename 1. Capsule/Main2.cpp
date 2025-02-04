#include <iostream>

class Time
{
public:
	Time(int hour)
		:hour(hour), minute(0), second(0)
	{

	}
	Time(int hour, int minute)
		:hour(hour), minute(minute), second(0)
	{

	}
	Time(int hour, int minute, int second)
		:hour(hour), minute(minute), second(second)
	{

	}

	void ShowTime()
	{
		std::cout << "[" << hour << "시 " << minute << "분" << second << "초]\n";
	}
	
	void ShowTimeInSeconds()
	{
		std::cout << (hour * 3600) + (minute * 60) + second << "초\n";
	}
private:
	int hour;
	int minute;
	int second;
};


int main()
{
	Time time1 = Time(10);            // 10시 0분 0초.
	Time time2 = Time(10, 20);        // 10시 20분 0초.
	Time time3 = Time(10, 20, 30);    // 10시 20분 30초.

	time2.ShowTime();
	time2.ShowTimeInSeconds();
}

/// 출력 결과.
//[10시 20분 0초]
//37200초