#pragma once

#include "Firefighter.h"

class FireChief : public Firefighter
{
public:
	FireChief(const std::string name, Firefighter* numberOne = nullptr)
		:Firefighter(name), numberOne(numberOne)
	{
	}

	void TellFirefiterToExtinguishFire(Firefighter* colleague)
	{
		colleague->ExtinguishFire();
	}

	//ÀçÁ¤ÀÇ
	virtual void ExtinguishFire() override
	{
		if(numberOne == nullptr)
		{
			return;
		}

		TellFirefiterToExtinguishFire(numberOne);
	}

	const Firefighter* GetNumberOne() const { return numberOne; }
	void SetNumberOne(Firefighter* numberOne) { this->numberOne = numberOne; }
private:
	Firefighter* numberOne = nullptr;
};