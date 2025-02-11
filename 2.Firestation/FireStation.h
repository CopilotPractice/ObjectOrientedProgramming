#pragma once

#include <vector>
#include <iostream>
#include "INamedPerson.h"

class FireStation
{
public:
	//��� �Լ�
	void ClockIn(INamedPerson* staffMember)
	{
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffMember) // heap�� �ּҰ� ������ Ȯ��
			{
				contains = true;
				break;
			}
		}

		if (!contains)
		{
			clockedInStaff.emplace_back(staffMember);
		}
	}
	//�⼮ Ȯ�� �Լ�

	void RollCall() // ��ü������ ���� �������̽��ε�, �߻�Ŭ������ �߰� ���� ���
	// �� ���� �θ� �ٸ� Ŭ������ �߻��ߴµ�, Ŭ���� ������� ���� ����ϸ� �Ǵµ�,
	// �׷��� �Ǹ� ������ ���������� ���� ����� �������̽��� �����ϵ��� ��� 
	{
		//�������̽��� ���ؼ� �Լ��� ���� �������θ� ������
		for (INamedPerson* staff : clockedInStaff)
		{
			std::cout << staff->GetName() << "\n";
		}
	}
private:
	std::vector<INamedPerson*> clockedInStaff;
};