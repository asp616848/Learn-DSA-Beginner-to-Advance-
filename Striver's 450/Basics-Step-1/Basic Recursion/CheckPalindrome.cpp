#include<iostream>
using namespace std;

void checkPalind(string &str, int start, int last){
    if(!(start<last)){
        return;
    }
    swap(str[start], str[last]);
    return checkPalind(str, start+1, last-1);
}

int main(){
    string str = ("gacag");
    string str1 = str;
    checkPalind(str1, 0, str1.length()-1);
    if(str1 == str){
        cout << "YES ITS A PALINDROME" << endl;
    }
    else{
        cout << "NO ITS Not A PALINDROME" << endl;
    }
    return 0;
}