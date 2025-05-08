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

class Iventory{
    private:
    int itemnumber,amount;
    double cost,total;

    public:
Iventory(){
    itemnumber=0;
    amount=0;
    cost=0.0;
    total=0.0;
}

Iventory(int num,int am, double coux){
    setnumber(num);
}

}