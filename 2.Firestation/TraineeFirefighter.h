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
	virtual void TurnOnHose() override //override Ű����� ����(������, �Լ� �̸��� Ʋ���� �� ��Ÿ�� ���� �ڵ� ����)
	{
		if (hoseTrainedOnFire)
		{
			Firefighter::TurnOnHose(); //�θ�Ŭ������ ���� = superŰ���� ���� �θ� Ŭ���� �����ϴ� ��� ����
			//std::cout << "���� ������ �ֽ��ϴ�.\n";
		}
		else
		{
			std::cout << "���� ������ ������ Ƣ�� �ֽ��ϴ�.\n";
		}
	}

	virtual void TrainHoseOnFire() override
	{
		hoseTrainedOnFire = true;
		Firefighter::TrainHoseOnFire();
		/*std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";*/
	}
private:
	bool hoseTrainedOnFire;
};