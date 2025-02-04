#include <iostream>
#include <string>
using namespace std;

class NameCard
{
public:
	NameCard(string name, string phone, string address, string job)
		:name(name), phone(phone), address(address), job(job)
	{

	}

	void ShowData()
	{
		cout << "이    름 : " << name << "\n";
		cout << "전화번호 : " << phone << "\n";
		cout << "주    소 : " << address << "\n";
		cout << "직    급 : " << job << "\n";

	}
private:
	string name;
	string phone;
	string address;
	string job;
};

int main()
{
	// NameCard(이름, 전화번호, 주소, 직급);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "서울시...", "Freelancer");
	jang.ShowData();
}


/// 실행 결과
//이    름 : Jang Se Yun
//전화번호 : 010 - 1111 - 1111
//주    소 : 서울시...
//직    급 : Freelancer