#include<iostream>
#include<cstring>

using namespace std;

class BasicCar
{
   public:
   virtual void StartCar()
    {
       cout<<"Basic Car Started...  Broom Broom"<<endl;
    }

};

class SelfDrivingCar : public BasicCar
{
    public:
    void StartCar()
    {
        cout<<"Advance Car Started...  Zoom Zoom"<<endl;
    }

};

int main()
{
    //it will start the Basic Car 
    BasicCar car;
    car.StartCar();

    //it will start the Self Driving Car 
    SelfDrivingCar selfDrivingCar;
    selfDrivingCar.StartCar();

    //Now Tell me which car will start
    BasicCar *ptr = new SelfDrivingCar();
    ptr->StartCar();
    //It will start the Basic car, if you don't include the "virtual"

    return 0;
}