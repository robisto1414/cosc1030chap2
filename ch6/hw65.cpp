#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;

double outpatientcharges(double meds2, double service2){
    if (service2 < 0 || meds2 < 0){
        cout << "Negative values can not be used"<< endl;
        return -1;
    }
    else{
        double totale=service2+meds2;
        return totale;
    }
}

double inpatient(double meds, double service, double days, double rate){
    if (meds < 0 || rate < 0 || service <0 || days < 0){
        cout << "Negative values can not be used." << endl;
        return -1;
    }
    else{
        double totale=(rate*days)+meds+service;
        return totale;
    }
}
int main(){
    char patienttype;
    double totale;
    cout << "Is the patient an Inpatient or out? (i/o)" << endl;
    cin >> patienttype;
    while (patienttype != 'i' && patienttype != 'o'){
        cout << "Invalide entry please enter i for inpatient and o for out" << endl;
        cin >> patienttype;
    }
    if (patienttype=='i'){
        double days,rate,meds,service;
        cout << "Enter days spent in hospital" << endl;
        cin >> days;
        cout << "Enter daily rate"<< endl;
        cin >> rate;
        cout << "Enter medication charges" << endl;
        cin >> meds;
        cout << "Enter the hospitals service charges" << endl;
        cin >> service;
        totale=inpatient(meds,service,rate,days);
        cout << "Your totale charges are " << totale << " $" << endl;


    }
    else if (patienttype=='o'){
        double service2, meds2;
        cout << "Enter the hospitals service charges"<<endl;
        cin >> service2;
        cout << "Enter medication charges" << endl;
        cin >> meds2;
        totale=outpatientcharges(meds2,service2);
        cout << "Your totale charges are " << totale << " $" << endl;
    }
}