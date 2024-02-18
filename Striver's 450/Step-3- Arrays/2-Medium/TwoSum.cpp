#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int> &arr, int sum){
    int i = 0;
    int j = 1;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    while(j<n){
        while((arr[i]+arr[j])< sum){
            j++;
        }
        if((arr[i]+arr[j]) == sum && arr[i]!=arr[j]){
            cout << "\nvalue of i is :" << i<<" and i in arr is :"<< arr[i]  << "& j is :" << j <<" and j in arr is :"<< arr[j]<< endl;
            return true;
        }
        else if((arr[i]+arr[j]) == sum && arr[i]==arr[j]){
            j++;
        }
        while((arr[i]+arr[j])> sum){
            i++;
            j = i;
        }
        
    }
    
    return false;
}
/*more optimal two pointer 
#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}*/