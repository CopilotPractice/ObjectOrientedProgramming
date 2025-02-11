#pragma once

#include "Firefighter.h"

class TraineeFirefighter : public Firefighter
{
public:
	TraineeFirefighter(const std::string& name, bool hoseTrainedOnFire = false)
		: Firefighter(name), hoseTrainedOnFire(hoseTrainedOnFire)
	{

	}
protected:
	virtual void TurnOnHose() override //override 키워드는 선택(있으면, 함수 이름이 틀렸을 때 런타임 에러 코드 나옴)
	{
		if (hoseTrainedOnFire)
		{
			Firefighter::TurnOnHose(); //부모클래스로 접근 = super키워드 같은 부모 클래스 접근하는 기능 없음
			//std::cout << "불이 꺼지고 있습니다.\n";
		}
		else
		{
			std::cout << "물이 엉뚱한 곳으로 튀고 있습니다.\n";
		}
	}

	virtual void TrainHoseOnFire() override
	{
		hoseTrainedOnFire = true;
		Firefighter::TrainHoseOnFire();
		/*std::cout << "호스를 불이 발생한 곳에 겨냥하고 있습니다.\n";*/
	}
private:
	bool hoseTrainedOnFire;
};