#include "Firefighter.h"
#include "FireChief.h"
#include "TraineeFirefighter.h"
#include "FireStation.h"
#include "Administrator.h"

int main()
{
    FireStation* fireStation = new FireStation();

    Administrator* taejun = new Administrator("관리자", "태준", "장");

    
    // 소방차 생성.
    Firetruck* truckOne = new Firetruck();
    Firefighter* ronnie = new Firefighter("로니");
    Firefighter* james = new Firefighter("제임스");

    Firefighter* bill = new TraineeFirefighter("빌");
    bill->ExtinguishFire();

    FireChief* harry = new FireChief("해리",ronnie);
    truckOne->SetDriver(harry);
    harry->Drive(truckOne, Point(200, 300));


    fireStation->ClockIn(ronnie);
    fireStation->ClockIn(james);
    fireStation->ClockIn(bill);
    fireStation->ClockIn(harry);
    fireStation->ClockIn(taejun);


    fireStation->RollCall();
    /*harry->TellFirefiterToExtinguishFire(ronnie);*/
    harry->ExtinguishFire();

    //다형성
    FirefighterBase* stillHarry = harry; //복사생성자 호출
    stillHarry->ExtinguishFire();  

    // 운전자 설정.
    truckOne->SetDriver(ronnie);

    // 소방차 이동.
    ronnie->Drive(truckOne, Point(10, 5));

    // 운전자 설정.
    truckOne->SetDriver(james);

    // 소방차 이동.
    james->Drive(truckOne, Point(20, -3));

    delete truckOne;
    delete ronnie;
    delete james;
    delete bill;
    delete harry;
    delete fireStation;
    delete taejun;


    std::cin.get();
}