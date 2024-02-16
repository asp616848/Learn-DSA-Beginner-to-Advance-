#include <vector>
using namespace std;

void move0toend(vector<int> &arr){
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        while (arr[i]!=0){
            i++;
        }
        while(arr[j] == 0){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    return;
}