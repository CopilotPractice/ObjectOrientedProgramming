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
	
	//�Ҳ���
	virtual void ExtinguishFire() = 0; //���� �����Լ�(�θ�Ŭ�������� ��ӽ�ų �Լ����� 0 ����)
	                                   // �� ��ü�δ� ��üȭ �� �� ������, 

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

	virtual std::string GetName() const override{ return name; }
	void SetName(const std::string& name)
	{
		this->name = name;
	}

protected:
	std::string name;
};