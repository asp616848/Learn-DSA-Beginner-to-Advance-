#include <iostream>
using namespace std;

int findElement(int arr[], int size, int a){
    int s = 0;
    int e = size-1;
    while(s!=e){
        if(arr[(s+e)/2] == a){
            cout<< "found in mid\n";
            return (s+e)/2+1;
        }
        else if( arr[(s+e)/2] > a ){
            e = (s+e)/2 -1;
        }
        else if( arr[(s+e)/2] < a ){
            s = (s+e)/2 + 1;
        }
    }
    if(arr[s] == a){
        return s+1;
    }
    else{
        cout << arr[s]<< endl;
        cout<< "Not found \n";
        return -11111;
    }
}

// for finding lower bound i modified the upper one 

#include <iostream>
using namespace std;

int findLowerBound(int arr[], int size, int a){
    int s = 0;
    int e = size-1;
    while(s!=e){
        if( arr[(s+e)/2] >= a ){
            e = (s+e)/2;
        }
        else if( arr[(s+e)/2] < a ){
            s = (s+e)/2 + 1;
        }
    }
    if(arr[s] >= a){
        return s+1;
    }
    else{
        cout << arr[s]<< endl;
        cout<< "all numbers are less \n";
        return -11111;
    }
}