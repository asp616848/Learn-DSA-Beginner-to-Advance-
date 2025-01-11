class Solution {
public:
    int num;
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        num = n;
        string a = "";

        recur(result, a, 0, 0);
        return result;
    }

private:
    void recur(vector<string>& res, string seq, int opens, int total) {
        
        cout << opens<< " " << total<< " " << num << endl;
        
        if (seq.length() == num * 2) {
            res.push_back(seq);  // When the sequence reaches length 2n, add it to result
            return;
        }
        if(total < num) {
            recur(res, seq + "(", opens + 1, total+1);
        }
        if(opens > 0) {
            recur(res, seq + ")", opens - 1, total);
        }
    }
};