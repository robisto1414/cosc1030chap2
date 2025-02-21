#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    
    string working,broken,fixed,fixed2,fixed3,fixed4;
    working="yes";
    broken="no";


    cout << "Reboot computer and try to connect." << "\n"
         << "Did this fix your problem?" << endl;
         cin >> fixed;
        
         if (fixed==working){
            cout << "Good job it's fixed" << endl;
         }
         else if (fixed==broken){
            cout << "Reboot router and try to connect." << "\n"
                 << "Did this fix the problem?"<< endl;
                 cin >> fixed2;
                 if (fixed2==working){
                    cout << "Good job it's fixed." << endl;
                 }
                 else if (fixed2==broken){
                    cout << "Make sure your cables are plugged in firmly." << "\n"
                         << "Did this fixe your problem?" << endl;
                         cin >> fixed3;
                         if (fixed3==working){
                            cout << "Good job it's fixed" << endl;
                         }
                         else if (fixed3==broken){
                            cout << "Move the router to a new location and try connecting." << "\n"
                                 << "Did this fixe the problem?" << endl;
                                 cin >> fixed4;
                                 if (fixed4==working){
                                    cout << "Good job it's fixed." << endl;
                                 }
                                 else if (fixed4==broken){
                                    cout << "Get a new Router" << endl;
                                 }
                         }
                 }
         }
    

        }