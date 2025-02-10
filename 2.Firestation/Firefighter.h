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
	virtual~Firefighter() = default;// virtual ������� �ڽ� Ŭ�������� �Ҹ��ڸ� ȣ������ ��,
									// �ڽ� Ŭ�������� ����� �Ҹ��� ȣ��

	//�Ҳ���
	virtual void ExtinguishFire()
	{
		std::cout << name << " �ҹ���� ���� ���� ����!\n";
	}

	//����
	void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		//������ Ȯ��

		if (truckToDrive->GetDriver() != this)
		{
			return;
		}

		//�̵�
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