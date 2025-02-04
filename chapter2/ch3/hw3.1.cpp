#include <iostream>
#include <string>
using namespace std;
int main()

{
    string movie;
    double adulttickets, childtickets, gross, net, amountpaid;

    cout << "What movie was played today?";
   cin.ignore();
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
    net = (gross*10)/100;
    cout << "Net box office profit: " << net << "\n";
    amountpaid = gross-net;
    cout << "Amount paid to distributor: " << amountpaid << endl;
    return 0;
} 


