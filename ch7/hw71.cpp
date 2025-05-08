#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;

int main() {
const int SIZE=5;
string salsatypes[SIZE] = {"Mild","Medium","Sweet","Hot","Zesty"};
int salsasales[SIZE];
int totalesales=0, highest=0, lowest=0;

for (int count=0; count < SIZE; count++){
    do {
        cout << "Enter the number of jars sold for " << salsatypes[count] << endl;
        cin >> salsasales[count];
        if (salsasales[count]<0){
            cout << "We do not take negative sales please enter a number bigger then 0."<<endl;
        }

        }while (salsasales[count]<0);

    }
//calculation
    totalesales=salsasales[0];
    for(int count=1;count<SIZE;count++){
        totalesales+=salsasales[count];
        if (salsasales[count]>salsasales[highest]){
            highest=count;

        }
        if (salsasales[count]<salsasales[lowest]){
            lowest=count;
        }
    }
        for (int count=0; count<SIZE; count++){
            cout << salsatypes[count] << ":" << salsasales[count] << " Jars" << endl;
        }
        cout << "Total sales are " << totalesales << " jars" << endl;
        cout << "The highest seller was " << salsatypes[highest] << " with " << salsasales[highest] << " jars" << endl;
        cout << "The lowest seller was " << salsatypes[lowest] << " with " << salsasales[lowest] << " jars" << endl;
        return 0;
} 