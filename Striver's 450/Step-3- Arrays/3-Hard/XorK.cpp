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
        if(mp.find(XorSum^k) != mp.end()){
            count += mp[XorSum ^ k];
        }
        mp[arr[i]]++;
    }
    return count;  
}