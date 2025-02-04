#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()

{
    double V, R, E, S;

    cout << "What is the lenght of the row in feet?";
    cin >> R;
    cout << "What is the amount of space in feet used by an end-post in feet?";
    cin >> E;
    cout << "What iss the space between vines in feet?";
    cin >> S;
    V = (R-(2*E))/S;
    cout << "You will be able to fit " << V << " in your yard" << endl;
    return 0;
}