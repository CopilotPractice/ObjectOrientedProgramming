#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

//전방 선언
// 1. 헤더 순환 참조 방지
// 2. 컴파일 속도 개선(헤더 덩치 최소화)
class FirefighterBase;
class Firetruck
{
public:
	Firetruck()
	{
		ladder = new Ladder(10.f); // 생명주기 관리 = composition
	}

	~Firetruck()
	{
		delete ladder; // 생명주기 관리 = composition

		// actor(entity) component의 생명주기 관리 = composition (ecs)
		//
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << "소방관이 " << position.GetX() << ", " << position.GetY() << "로 이동 중\n";
	}

	const Ladder* GetLadder() const { return ladder; }

	const Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

	FirefighterBase* GetDriver() const { return driver; }
	void SetDriver(FirefighterBase* driver) { this->driver = driver; }

private:
	FirefighterBase* driver = nullptr; // 주소를 다루는 포인터는 타입의 크기를 몰라도 되기 때문에 가능
									// 스텍에 담기면 온전히 변수의 크기를 알아야함
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};