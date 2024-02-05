#include <bits/stdc++.h>
using namespace std;

//QUESTION -  Count elements in array and as well least and most frequent numbers

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]+=1;
    }
    for(auto x : mp){
        cout << x.first<< "==>" << x.second << endl;
    }
    int max= 0;
    int maxi = -1;
    int min = 100;
    int mini = -1;
    for (auto c: mp ){
        if (c.second > max){
            max = c.second;
            maxi = c.first;
        }
        if(c.second < min){
            min = c.second;
            mini = c.first;
        }
    }
    cout << "the Number " << maxi << " has occured most time  "<< max << "\n and the Number " << mini << " has occured least number of times " << min <<endl;
}