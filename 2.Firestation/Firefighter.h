#pragma once

#include "FirefighterBase.h"

// 소방관 클래스.
// 소방관은 불을 끌 수 있음.
// 소방관은 소방차를 운전할 수 있음.
class Firefighter : public FirefighterBase
{
public:
	Firefighter(const std::string& name)
		: FirefighterBase(name)
	{
	}

	// 불끄기 메소드 (소방관의 임무).
	virtual void ExtinguishFire() override
	{
		std::cout << name << " is putting out the fire!\n";
		TrainHoseOnFire();
		TurnOnHose();
	}

protected:
	virtual void TurnOnHose()
	{
		std::cout << "The fire is going out.\n";
	}

	virtual void TrainHoseOnFire()
	{
		std::cout << "Training the hose on the fire.\n";
	}
};