#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double carbon, air, helium, hydrogen,selection,time, distance;

    cout << "Please enter the number linked to your needed gas" << "\n"
         << "Carbon dioxide: 1" << "\n"
         << "Air: 2" << "\n"
         << "Helium: 3" << "\n"
         << "Hydrogen: 4" << endl;
    cin >> selection;
    cout << "Please enter the time it took for the sound to travel: " << endl;
    cin >> time;
    if (time>0 && time<30) {
        if (selection==1){
        distance=258/time;
        cout << "The sound traveled " << distance << "m" << endl;
        }
        else if(selection==2){ 
            distance=331.5/time;
            cout << "The sound traveled " << distance << "m" << endl;
    }
        else if(selection==3){
            distance=972/time;
            cout << "The sound traveled " << distance << "m" << endl;
        }
        else if(selection==4){
            distance=1270/time;
            cout << "The sound traveled " << distance << "m" << endl;
        }
}
    else 
    cout << "Invalid entry" << endl;
    return 0;
}
