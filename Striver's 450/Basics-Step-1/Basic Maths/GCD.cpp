#include<iostream>
using namespace std;

int findGCD(int a, int b){
    if(b == 0){
        return a;
    }
    return findGCD(b,a%b);
}

int main(){
    cout<< findGCD(10,100) << endl;
}