#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

//���� ����
// 1. ��� ��ȯ ���� ����
// 2. ������ �ӵ� ����(��� ��ġ �ּ�ȭ)
class FirefighterBase;
class Firetruck
{
public:
	Firetruck()
	{
		ladder = new Ladder(10.f); // �����ֱ� ���� = composition
	}

	~Firetruck()
	{
		delete ladder; // �����ֱ� ���� = composition

		// actor(entity) component�� �����ֱ� ���� = composition (ecs)
		//
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << "�ҹ���� " << position.GetX() << ", " << position.GetY() << "�� �̵� ��\n";
	}

	const Ladder* GetLadder() const { return ladder; }

	const Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

	FirefighterBase* GetDriver() const { return driver; }
	void SetDriver(FirefighterBase* driver) { this->driver = driver; }

private:
	FirefighterBase* driver = nullptr; // �ּҸ� �ٷ�� �����ʹ� Ÿ���� ũ�⸦ ���� �Ǳ� ������ ����
									// ���ؿ� ���� ������ ������ ũ�⸦ �˾ƾ���
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};