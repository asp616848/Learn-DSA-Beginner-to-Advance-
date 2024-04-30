// 7. Stock Span problem The stock span problem is a financial problem where we have a series
// of n daily price quotes for a stock and we need to calculate the span of stocks price for all n
// days.
// The span Si of the stocks price on a given day i is defined as the maximum number of
// consecutive days just before the given day, for which the price of the stock on the given day is
// less than or equal to its price on the current day.
// For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span
// values for corresponding 7 days are {1, 1, 1, 2, 2, 4, 6}.
// Example 1:
// Input: N = 7, price[] = [100 80 60 70 60 75 85]
// Output: 1 1 1 2 2 4 6
// Explanation:
// Traversing the given input span
// 100 is greater than equal to 100 and there are no more elements behind it so the span is 1,
// 80 is greater than equal to 80 and smaller than 100 so the span is 1,
// 60 is greater than equal to 60 and smaller than 80 so the span is 1,
// 70 is greater than equal to 60,70 and smaller than 80 so the span is 2,
// 60 is greater than equal to 60 and smaller than 70 so the span is 1,
// 75 is greater than equal to 60,70,60,75 and smaller than 100 so the span is 4,
// 85 is greater than equal to 80,60,70,60,75,85 and smaller than 100 so the span is 6.
// Hence the output will be 1 1 1 2 1 4 6.
#include <bits/stdc++.h>
using namespace std;

vector<int> calculateSpan(int price[], int n){
    vector<int> ans(n,1);
    for(int i=0; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(price[j] >= price[i]){
                ans[i]++;
            }
        }
    }
    return ans;
}
// vector<int> calculateSpan(int price[], int n){
//     vector<int> ans(n,1);
//     for(int i=0; i<n; i++){
//         int j = i - 1;
//         while (j >= 0 && price[j] <= price[i]) {
//             ans[i] += ans[j];
//             j -= ans[j];
//         }
//     }
//     return ans;
// }

int main(){
    int n = 7;
    int price[n] = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = calculateSpan(price,n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}