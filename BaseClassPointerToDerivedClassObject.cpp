#include<iostream>
#include<cstring>

using namespace std;

class BasicCar
{
   public:
    int noOfTyre;
    int noOfSeats;
    int speed;

    BasicCar()
    {
        noOfTyre = 4;
        noOfSeats = 5;
        speed = 60;
    }

    BasicCar(int n, int s, int spd)
    {
        noOfTyre = n;
        noOfSeats = s;
        speed = spd;
    }
    

};

class SelfDrivingCar : public BasicCar
{
    public:
        int noOfCameras;
        bool hasSportsMode;

    SelfDrivingCar(int camera, bool sportsMode)
    {
        noOfCameras = camera;
        hasSportsMode = sportsMode;
    }

};

int main()
{
    BasicCar *pointer = new SelfDrivingCar(4, true);

    cout<<"No of Seats"<<pointer->noOfSeats<<endl;
    return 0;
}