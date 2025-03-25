#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;

double getsales(string division){
    double sale;
    do {
    cout << "Enter quarterly sales for " << division << ":$";
    cin >> sale;
    
    if (sale<0){
        cout << "Error sales can't be negative please restart."<< endl;
        
    }
 } while(sale<0);
        return sale;
    }

void findhighest(double ne, double se, double nw, double sw, string &highestdivision, double &highestsale){
     highestsale=ne;
     highestdivision="Northeast";

    if (nw>highestsale) {
        highestsale=nw;
        highestdivision="Northwest";
    }
    if (se>highestsale){
        highestsale=se;
        highestdivision="Southeast";
    }
    if(sw>highestsale){
        highestsale=sw;
        highestdivision="Southwest";
    }
    

    


}
int main(){
double northeast, southeast, northwest, southwest, highestsale=0;
string highestdivision;
 northeast = getsales("Northeast");
 southeast = getsales("Southeast");
 northwest = getsales("Northwest");
 southwest = getsales("Southwest");
findhighest(northeast,southeast,northwest,southwest,highestdivision,highestsale);

cout << "The highest division is " << highestdivision << " with a totale of " << highestsale << "$" <<endl;
return 0;
}
