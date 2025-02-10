#pragma once

#include "Firetruck.h"
#include <string>
#include <iostream>

class Firefighter
{
public:
	Firefighter(const std::string& name)
		:name(name)
	{
	}

	/*Firefighter(Firefighter& other)
	{

	}*/
	virtual~Firefighter() = default;// virtual 붙혀줘야 자식 클래스에서 소멸자를 호출했을 때,
									// 자식 클래스에서 제대로 소멸자 호출

	//불끄기
	virtual void ExtinguishFire()
	{
		std::cout << name << " 소방관이 불을 끄고 있음!\n";
	}

	//운전
	void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		//운전자 확인

		if (truckToDrive->GetDriver() != this)
		{
			return;
		}

		//이동
		truckToDrive->Drive(position);
	}

	const std::string GetName() const { return name; }
	void SetName(const std::string& name)
	{
		this->name = name;
	}
private:
	std::string name;
};