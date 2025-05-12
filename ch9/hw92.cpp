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

struct player{
    string name;
    int number,points;
};

const int numberplayers=12;
void playerdata(player[],int);
void teamstats(const player[],int);

int main(){
    player team[numberplayers];
    playerdata(team,numberplayers);
    teamstats(team,numberplayers); // APL this was missing
    return 0;
}
void playerdata(player team[],int size){
    for (int i=0; i<size; ++i){
        cout<< "Enter data for player number "<< (i +1)<<endl;
        cout<< "Name: ";
        getline(cin>>ws,team[i].name);
        cout<<"Enter his number: ";
        cin>>team[i].number;
        
        while(team[i].number<0){
            cout<<"Please enter positive number.";
            cin>>team[i].number;
        }
        cout<<"Enter points scored: ";
        cin>>team[i].points;
        
        while (team[i].points<0){
            cout<<"Please enter a positive value.";
            cin>>team[i].points;
        }
    }
}

void teamstats(const player team[], int size){
    int total=0, toppoints=0;
    cout<< "Team Stats: "<<endl;
    cout<<"Number    Name    Points"<<endl;
    for(int i=0;i<size;++i){
        cout<< team[i].number<<"    "<<team[i].name<<"    "<<team[i].points<<endl;
        total+=team[i].points;
        if(team[i].points>team[toppoints].points){
            toppoints=i;
        }
    }

    cout<< "Team total: "<<total<<endl;
    cout<<"Team top scorer: "<<team[toppoints].name;
    cout<<"#"<<team[toppoints].number<< " ";
    cout<<"With "<<team[toppoints].points<< "points."<<endl;


    

}