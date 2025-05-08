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

class Die{
    public:

    int roll(){
        return rand()%6+1;

    }
};

int main(){
    srand(time(0));

    Die dice;
    char choix;
    int total=0;
    cout << "Here is the fishing gam!"<<endl;
    
    do{
        cout<< "Would you like to cast your lin y/n?"<<endl;
        cin>>choix;

        if(choix=='y'||choix=='Y'){
            int final=dice.roll();
            string fish;
            int points=0;

            switch(final){
                case 1:
                fish="The biggest fish in the ponde!";
                points=30;
                break;
                case 2:
                fish="Old boat anker";
                points=5;
                break;
                case 3:
                fish="Your warm was stolen :(";
                points=0;
                break;
                case 4:
                fish="Priates treasure chest!";
                points=50;
                break;
                case 5: 
                fish="A puffer fish";
                points=15;
                break;
                case 6:
                fish="Little baby fish";
                points=10;
                break;

            }
            cout<<"You got "<<fish<<"and "<< points << "points"<<endl;
            total+=points;

        }
    }
    while(choix=='y' || choix=='Y');
    cout<<"Game over!"<<endl;
    cout<<"You made "<<total<<" points."<<endl;

    if(total>=35){
        cout<<"Wow you caught so many fish must of had the right bate!";
    }
    else if(total>=20){
        cout<<"That was some solide fishing.";
    }
    else if(total>0){
        cout << "At least you werent skunked";
    }
    else{
        cout<<"Wow you really suck at fishing.";
    }





}