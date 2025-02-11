#pragma once

#include "Firetruck.h"
#include <string>
#include <iostream>
#include "INamedPerson.h"

class FirefighterBase : public INamedPerson
{
public:
	FirefighterBase(const std::string& name)
		:name(name)
	{
	}

	/*Firefighter(Firefighter& other)
	{

	}*/
	
	//불끄기
	virtual void ExtinguishFire() = 0; //순수 가상함수(부모클래스에서 상속시킬 함수에다 0 대입)
	                                   // 이 자체로는 객체화 할 수 없으나, 

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

	virtual std::string GetName() const override{ return name; }
	void SetName(const std::string& name)
	{
		this->name = name;
	}

protected:
	std::string name;
};