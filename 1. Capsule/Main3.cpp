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
		cout << "��    �� : " << name << "\n";
		cout << "��ȭ��ȣ : " << phone << "\n";
		cout << "��    �� : " << address << "\n";
		cout << "��    �� : " << job << "\n";

	}
private:
	string name;
	string phone;
	string address;
	string job;
};

int main()
{
	// NameCard(�̸�, ��ȭ��ȣ, �ּ�, ����);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "�����...", "Freelancer");
	jang.ShowData();
}


/// ���� ���
//��    �� : Jang Se Yun
//��ȭ��ȣ : 010 - 1111 - 1111
//��    �� : �����...
//��    �� : Freelancer