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
using namespace std;

int find(int* arr, int size){
    int max=0;
    int mode=-1;

    for (int i=0; i<size; ++i){
        int count=0;
        for(int w=0; w<size; ++w){
            if(*(arr+w)==*(arr+i)){

            }
        }
        if(count>max){
            max=count;
            mode=*(arr+i);
        }
    }
    if (max==1){
        return -1;
    }
    return mode;
}
int main(){
    int info[]={1,3,3,2,5,3,2};
    int size=sizeof(info)/sizeof(info[0]);
    int mode=find(info,size);

    if(mode==-1){
        cout<<"No mode, all values are different"<<endl;
    }
    else{
        cout << "Mode: " << mode << endl;
    }
    return 0;
}