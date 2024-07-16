
class Solution {
public:
    bool wordPattern(string pattern, string s) {

        stringstream ss(s);
        string word;
        unordered_map<string,char>mpp1;
        unordered_map<char,char>mpp2;
        
        string s1,s2;

        char i = 'a';

        while(ss >> word)
        {
            if(mpp1.find(word) == mpp1.end()) mpp1[word] = i++;
            
            s1.push_back(mpp1[word]);     
        }

        i = 'a';

        for(auto &it : pattern)
        {
            if(mpp2.find(it) == mpp2.end()) mpp2[it] = i++;
        
            s2.push_back(mpp2[it]);
        }

        if(s1!=s2) return false;


        return true;
    }
};
