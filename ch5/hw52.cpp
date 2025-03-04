#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    std::srand(std::time(0));
    int guess, random = std::rand() % 100 + 1, count=0;
    while (guess != random){
        cout << "Please guess the number." << endl;
        cin >> guess;
        count++;

        if (guess>random){
            cout << "To high try again." << endl;
        }
        else if (guess<random){
            cout << "To low try again."<< endl;
        }
    }
    cout << "Congradulatoins you got the right number!" << endl;
    cout << "It took you " << count << " tries" << endl;
    return 0;
}