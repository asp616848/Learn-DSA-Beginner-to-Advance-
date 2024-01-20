#include<iostream>
using namespace std;

void getPriceArray(int price[], int n){

}

int main(){
    int price[] = {10, 22, 5, 75, 65, 80};
    int n = sizeof(price) / sizeof(price[0]);
    getPriceArray(price, n);
    cout << n << endl;
}