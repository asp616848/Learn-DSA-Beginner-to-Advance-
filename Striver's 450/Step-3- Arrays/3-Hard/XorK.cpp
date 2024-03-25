#include <unordered_map>
int XorK(int (&arr)[], int size, int k){
    if (size == 0) return 0; 
    int count = 0;
    std::unordered_map<int, int> mp;
    int XorSum = 0;
    for(int i=0; i<size; i++){
        XorSum ^= arr[i];
        
        if(XorSum == k){
            count++;
        }
        count += mp[XorSum ^ k]; //here No if statement required since if XorSum ^ k is not present in map then it will return 0
        mp[XorSum]++;
    }
    return count;
}