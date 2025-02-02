class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        cout<<s;
        string r = "";
        int n = s.length();
        for(int i =0; i < n; i++){
            r+= s[n-i-1];
        }
        cout<<r;
        int out ;
        try
        {
            if(r.back() == '-')
            {
                out = -stoi(r);
            }
            else{ 
                out = stoi(r);
            }
        }
        catch (const std::out_of_range& e) {
            return 0;
        } catch (const std::invalid_argument& e) {
            return 0;
        }
        return out;
    }
};