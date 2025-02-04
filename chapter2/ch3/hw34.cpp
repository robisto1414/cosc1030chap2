#include <iostream> // compound intrest questionaire
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()

{
   double angle,sinus,cosin,tangent;

   cout << "Please enter an angle in radians: ";
   cin >> angle;

   sinus = sin(angle);
   cosin = cos(angle);
   tangent = tan(angle);

   cout << "Sin= " << setprecision(2) << sinus << endl;
   cout << "Cos= " << setprecision(2) << cosin << endl;
   cout << "Tan= " << setprecision(2) << tangent << endl;
   return 0;
}






