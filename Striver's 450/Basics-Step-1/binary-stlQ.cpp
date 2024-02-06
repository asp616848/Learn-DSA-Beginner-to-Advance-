#include<iostream>
using namespace std;

//NOTE - Better alternative __builtin_popcount()

int countOnesInBinary(int a){ // time complexity is O(logn)
    int count = 0;

    while(a > 0){
        count += a & 1;
        a >>= 1;
    }
    return count;
}



int main(){
    cout << "\n This is the number: " << countOnesInBinary(3)<< endl;
} 
// Do the same question later using a-1 approach and a[x] = a[x/2] + x!2 approach~~