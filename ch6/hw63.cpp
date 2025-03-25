#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;

void cointoss(){
    int result=rand() % 2 + 1;
    if (result==1){
        cout << "Heads."<<endl;
    }
    else {
        cout << "Tails." <<endl;
    }
}

int main(){
    srand(time(0));
    int count, counter=0;
    cout << "How many times would you like to toss the coin?"<<endl;
    cin >> count;
    for (counter=0; counter<count; counter++){
        cointoss();
    }
    return 0;
}