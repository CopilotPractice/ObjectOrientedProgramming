#pragma once

#include <vector>
#include <iostream>
#include "INamedPerson.h"

class FireStation
{
public:
	//출근 함수
	void ClockIn(INamedPerson* staffMember)
	{
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffMember) // heap에 주소가 같은지 확인
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
	//출석 확인 함수

	void RollCall() // 객체지향의 꽃은 인터페이스인데, 추상클래스만 추가 다중 상속
	// 두 개의 부모가 다른 클래스가 발생했는데, 클래스 기반으로 다중 상속하면 되는데,
	// 그렇게 되면 구조가 복잡해져서 다중 상속은 인터페이스만 가능하도록 약속 
	{
		//인터페이스를 통해서 함수에 생긴 형식으로만 보여줌
		for (INamedPerson* staff : clockedInStaff)
		{
			std::cout << staff->GetName() << "\n";
		}
	}
private:
	std::vector<INamedPerson*> clockedInStaff;
};