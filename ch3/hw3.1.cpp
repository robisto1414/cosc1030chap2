// Grade 3/4

#include <iostream>
#include <string>
using namespace std;
int main()

{
    string movie;
    double adulttickets, childtickets, gross, net, amountpaid;

    cout << "What movie was played today?";
   // cin.ignore(); // APL - you don't need this here actually, because getline works fine. 
   // APL - the cin.ignore() causes this program to miss the first letter of your movie name input (ignores the first character)
   getline(cin,movie);
    cout << "How many children attended?";
    cin >> childtickets;
    cout << "How mant aults attended?";
    cin >> adulttickets;
    cout << "Movie name: " << movie << "\n";
    cout << "Adult tickets sold: " << adulttickets << "\n";
    cout << "Child tickets sold: " << childtickets << "\n";
    gross = (adulttickets*10)+(childtickets*6);
    cout << "Gross box office profit: " << gross << "\n";
    net = (gross*10)/100; // APL - This only gives 10% profit, the problem is for 20%
    cout << "Net box office profit: " << net << "\n";
    amountpaid = gross-net;
    cout << "Amount paid to distributor: " << amountpaid << endl;
    return 0;
} 


