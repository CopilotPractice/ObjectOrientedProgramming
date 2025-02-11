#pragma once

#include "FirefighterBase.h"

class FireChief : public FirefighterBase
{
public:
	FireChief(const std::string name, FirefighterBase* numberOne = nullptr)
		:FirefighterBase(name), numberOne(numberOne)
	{
	}

	void TellFirefiterToExtinguishFire(FirefighterBase* colleague)
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


	const FirefighterBase* GetNumberOne() const { return numberOne; }
	void SetNumberOne(FirefighterBase* numberOne) { this->numberOne = numberOne; }
private:
	FirefighterBase* numberOne = nullptr;
};