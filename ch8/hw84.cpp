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

double averages(const int* arr, int size){
    int sum=0;
    for(int i=0; i<size; ++i){
        sum+= *(arr + 1);
    }
    return static_cast<double>(sum)/size;
}

double medians(int* arr, int size){
    sort(arr,arr + size);
    if(size % 2==0){
        return (*(arr + size / 2 - 1) + *(arr + size / 2)) / 2.0;
    } 
    else {
        return *(arr + size/2);
    }
}

int modes(int* arr,  int size){
    int max=0;
    int mode=-1;

    for(int i=0; i<size; ++i){
        int count=0;
        for(int w=0; w<size; ++w){
            if(*(arr + i) == *(arr + w)) {
        }
    }
    if(count>max){
        max=count;
        mode=*(arr + i);
     }
    }
    if(max==1){
        return -1;
    }
    return mode;
}

int main(){
    int students;
    cout<<"Please enter the number of student that were surveyed.";
    cin>>students;

    while(students <=0){
        cout<<"Must be positive";
        cin>>students;
    }
        int* movies=new int[students];
        for(int i=0; i<students; ++i){
            cout << "Number of moveis watched " << (i+1)<<": ";
            cin >> *(movies + i);

            while(*(movies+i)<0){
                cout<<"Must be a postive number. ";
                cin>>*(movies+i);

            }
        }
        double average=averages(movies,students);
        double median=medians(movies,students);
        int mode=modes(movies,students);
        cout<< "Stats:"<<endl;
        cout<< "Average: " << average <<endl;
        cout<<"Median: " << median <<endl;

        if(mode==-1){
            cout << "No mode.";
        }
        else{
            cout<<"Mode: " << mode <<endl;
        }
    delete[]movies;
    return 0;

            
}
