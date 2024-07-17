class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_map<string, bool> mp;
        string curr = "";

        for (char i : word) {

            if (isdigit(i)) {
                curr += i;
            } else {
                if(!curr.empty()){
                    curr.erase(0, curr.find_first_not_of('0'));
                    if(curr.empty()){
                        curr = "0";
                    }
                    mp[curr] = true;
                }
                curr = "";
            }
        }
        if(!curr.empty()){
            curr.erase(0, curr.find_first_not_of('0'));
            if(curr.empty()){
                curr = "0";
            }
            mp[curr] = true;
        }

        return mp.size();
    }
};