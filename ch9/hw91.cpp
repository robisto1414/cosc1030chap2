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

struct movie {
    string title,director;
    int yearreleased, runningtime;
    double cost,revenue;
    };

    void display(const movie& m){
       double money=m.revenue-m.cost;
        cout <<"\n----Movie Info----\n";
        cout<<"Title:          "<<m.title<<endl;
        cout<<"Director:       "<<m.director<<endl;
        cout<<"Year released:  "<<m.yearreleased<<endl;
        cout<<"Running time:   "<<m.runningtime<<endl;
        cout<<"Profit or Loss: "<<m.revenue<<endl;

    }

    int main(){
        movie firstmovie={"Harry Potter and the philoser stone", "Chris Columbus",2001,152,10000000,1000000};
        movie secondmovie={"Harry Potter and the chamber of secrets","Chris Columbus",2002,158,20000000,2000000};

        display(firstmovie);
        display(secondmovie);
        return 0;
    }