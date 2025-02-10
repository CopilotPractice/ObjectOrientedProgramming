#include "Firefighter.h"
#include "FireChief.h"

int main()
{
    // �ҹ��� ����.
    Firetruck* truckOne = new Firetruck();
    Firefighter* ronnie = new Firefighter("�δ�");
    Firefighter* james = new Firefighter("���ӽ�");

    FireChief* harry = new FireChief("�ظ�",ronnie);
    truckOne->SetDriver(harry);
    harry->Drive(truckOne, Point(200, 300));

    /*harry->TellFirefiterToExtinguishFire(ronnie);*/
    harry->ExtinguishFire();

    //������
    Firefighter* stillHarry = harry; //��������� ȣ��
    stillHarry->ExtinguishFire();  

    // ������ ����.
    truckOne->SetDriver(ronnie);

    // �ҹ��� �̵�.
    ronnie->Drive(truckOne, Point(10, 5));

    // ������ ����.
    truckOne->SetDriver(james);

    // �ҹ��� �̵�.
    james->Drive(truckOne, Point(20, -3));

    std::cin.get();
}