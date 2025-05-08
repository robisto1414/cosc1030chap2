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
using namespace std;

bool checkmagicsquare(int square[3][3]){
    set<int>numbersseen;
    int squaresum=15;

    for (int i=0; i<3; ++i){
        for (int w=0; w<3; ++w){
            int val=square[i][w];
            if (val<1 || val>9 || numbersseen.count(val)) {
                return false;
            }
            numbersseen.insert(val);
        }
    }

    for (int i=0; i<3; ++i){
        int rowsum=0;
        for (int w=0; w<3; ++w){
            rowsum+=square[i][w];
        }
        if (rowsum != squaresum) return false;
    }
    int diag1=square[0][0]+square[1][1]+square[2][2];
    int diag2=square[0][2]+square[1][1]+square[2][0];
    if (diag1 != squaresum || diag2 !=squaresum) return false;
    return true;
}
int main(){
    int testsquare[3][3]= {
        {4,9,2},
        {3,5,7},
        {8,1,6}
    };

    if(checkmagicsquare(testsquare)){
        cout << "This is the magic square" << endl;
    }
    else{
        cout << "This is not Magic square" << endl;
    }
    return 0;
}

