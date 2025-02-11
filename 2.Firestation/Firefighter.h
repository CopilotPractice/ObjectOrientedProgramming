#pragma once

#include "FirefighterBase.h"

// �ҹ�� Ŭ����.
// �ҹ���� ���� �� �� ����.
// �ҹ���� �ҹ����� ������ �� ����.
class Firefighter : public FirefighterBase
{
public:
	Firefighter(const std::string& name)
		: FirefighterBase(name)
	{
	}

	// �Ҳ��� �޼ҵ� (�ҹ���� �ӹ�).
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