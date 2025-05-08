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
using namespace std;

int main(){
    string file;
    cout << "Enter the name of the file." ;
    cin >> file;
    ifstream inputFile(file);
    if (!inputFile){
        cerr << "Could not open file.";
        return 1;
    }
    vector<double>numbers;
    double numero;

    while (inputFile >> numero){
        numbers.push_back(numero);
        }
    inputFile.close();

    if (numbers.empty()) {
        cout << "Your file is empty or the numbers present are not valid";
        return 1;
    }

    double lowest = numbers [0];
    double highest = numbers [0];
    double total = 0.0;

    for (double n:numbers){
        if (n<lowest) 
        lowest=n;
        if (n>highest) 
        highest=n;
        total+=n;

    }

    double average=total/numbers.size();

    cout << "Lowest: " << lowest << endl;
    cout << "Highest: " << highest << endl;
    cout << "total: " << total << endl;
    cout << "Average: " << average << endl;
    return 0;
}