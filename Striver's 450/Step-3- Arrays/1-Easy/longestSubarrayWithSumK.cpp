#include <map> //NOTE - THIS APPROACH IS OPTIMAL WHEN WE GOT NEGATIVE AND POSITIVE NUMBERS AS WELL
#include <vector>
#include <algorithm>


int returnLen(std::vector<int>& arr, int k){
    int n = arr.size();
    std::map<int, int> sums;
    int sum= 0;
    int maxlen = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == k){
            maxlen = std::max(i+1, maxlen);
        }
        else if (sums.find(sum - k) != sums.end()){
            maxlen = std::max(maxlen, i - sums[sum - k]);
        }

        if(find(arr.begin(), arr.end(), sum) == arr.end()){ // add only when sum doesn't exists
            sums[sum] = i;
        }
    }
    return maxlen;
}

int posReturnLen(std::vector<int> arr, int k){ //this is most optimal when all are >=0.
    int n = arr.size();
    int sum= 0;
    int maxlen = 0;

    int i= 0;
    int j = 0;

    while( j< n){
        if(j <n) sum += arr[j];
        j++;

        while(sum > k && i <= j){
            sum = sum - arr[i];
            i++;
        }

        if(sum == k){
            maxlen = std::max((j-i), maxlen);
        }

        
    }
    
    return maxlen;
}