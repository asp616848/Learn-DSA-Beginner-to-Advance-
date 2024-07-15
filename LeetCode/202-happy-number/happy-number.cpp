class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> map;
        while(n!= 1 || n!=7){
            double sum = 0;
            while(n !=0){
                sum += (n%10)*(n%10);
                n /= 10;
            }
            if (sum==1) return true;
            if(map.find(sum) != map.end()){
                return false;
            }else{
                map[sum] = true;
            }
            n = sum;
        }
        return true;
    }
};