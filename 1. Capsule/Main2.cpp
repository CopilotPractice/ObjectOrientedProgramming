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
		std::cout << "[" << hour << "�� " << minute << "��" << second << "��]\n";
	}
	
	void ShowTimeInSeconds()
	{
		std::cout << (hour * 3600) + (minute * 60) + second << "��\n";
	}
private:
	int hour;
	int minute;
	int second;
};


int main()
{
	Time time1 = Time(10);            // 10�� 0�� 0��.
	Time time2 = Time(10, 20);        // 10�� 20�� 0��.
	Time time3 = Time(10, 20, 30);    // 10�� 20�� 30��.

	time2.ShowTime();
	time2.ShowTimeInSeconds();
}

/// ��� ���.
//[10�� 20�� 0��]
//37200��