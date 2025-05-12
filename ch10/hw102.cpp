#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <limits>
#include <set>
#include <algorithm>
using namespace std;

class car{
    private:
    int yearmodel,speed;
    string make;

    public:
    car(int y, string m){
        yearmodel=y;
        make=m;
        speed=0;
    }

    int getyear() const{
        return yearmodel;
    }
    string getmake() const{
        return make;
    }
    int getspeed() const{
        return speed;
    }

    void acceleration(){
        speed+=5;
    }
    void brake(){
        if(speed>=5){
            speed-=5;
        }
        else{
            speed=0;
        }
    }
};

int main(){
    car cars(2022,"Dodge");

    cout<< "Acceleration: "<<endl;
    for(int i=0; i<5;++i){
        cars.acceleration();
        cout<< "Speed following acceleration is "<<(i+1)<<  " " << cars.getspeed()<<"mph"<<endl; // APL confusing printout, need a space!

    }
    cout<<"Breaking: "<<endl;
    for(int i=0;i<5;++i){
        cars.brake();
        cout<<"Speed following braking is "<<(i+1)<< " " << cars.getspeed()<<"mph"<<endl; // APL confusing printout, need a space!

    }
    return 0;
}