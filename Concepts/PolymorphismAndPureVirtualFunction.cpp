#include<iostream>
#include<cstring>

using namespace std;

class BasicCar
{
   public:
    virtual void StartCar() = 0;
    virtual void StopCar() = 0;
    
};

class SelfDrivingCar : public BasicCar
{
    public:
    void StartCar()
    {
        cout<<"Advance Car Started...  Zoom Zoom"<<endl;
    }
    void StopCar()
    {
        cout<<"Car Stopped.."<<endl;
    }

};

int main()
{
    SelfDrivingCar c;
    c.StartCar();
    c.StopCar();

    //you can't create the object of BasicCar but you can make the pointer of type BasicCar
    //which will point to SelfDrivingCar
    BasicCar *ptr = &c;
    ptr->StartCar();

    return 0;
}