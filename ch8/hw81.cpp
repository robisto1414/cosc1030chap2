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

void doubleval(int* a, int*b){
    *a *=2;
    *b *=2;
}

int main(){
    int x=5;
    int y=10;
    cout << "Before you double x: " << x << ", y: " << y << endl;
    doubleval(&x,&y);
    cout << "Once doubled x:" << x << " y: " << y << endl; // APL missing y, added printout for y.
    return 0;
}