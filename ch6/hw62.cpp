#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;
double keneticenergy(double mass, double velocity){
    double ke;
    ke=0.5*mass*(velocity*velocity);
    cout << "The objects kinetic energy is " << ke << "Joules."<<endl;
    return ke;
}
int main(){
    double mass, velocity;
    cout << "Please enter the mass of the object in kilograms."<< endl;
    cin>>mass;
    cout << "Please enter the velocity of the object in m/s."<<endl;
    cin>>velocity;
    if(velocity<0 || mass<0){
        cout << "Values must be positive please restart."<<endl;
        exit(0);
    }
    else{
    keneticenergy(mass,velocity);
    return 0;
    }
}
