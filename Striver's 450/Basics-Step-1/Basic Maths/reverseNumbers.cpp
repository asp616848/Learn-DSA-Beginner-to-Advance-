#include<iostream>
using namespace std;

int reverseNumber(int n){
    int reverse = 0; //NOTE - Can't name a variable new since its a type in cpp
    while(n!=0){

        reverse = reverse*10 + n%10; //adding the digit

        n = n/ 10;
    }
    return reverse;
}
int main()
{
    cout<< reverseNumber(10203040);
}