#include<unordered_set> // two other approaches involve sorting the array and the bruteforce method where we just check for each element if the next element is present in the array or not
using namespace std;
int LongestCOnsecutiveSequence(int arr[], int n){
    unordered_set<int> us;
    for (int i = 0; i < n; i++){
        us.insert(arr[i]);
    }
    int longest  = -1;
    for  (auto it:us){ //runs over all elements O(1)*N = O(N)
        int x = it;
        if(us.find(x-1) == us.end() ){
            int len = 1;
            while(us.find(x+1) != us.end()){  //this loop runs once for the smallest element in the sequence
                x = x+1;
                len++;
            }
            if(len > longest){
                longest = len;
            }
        }
    }
    return longest;
}