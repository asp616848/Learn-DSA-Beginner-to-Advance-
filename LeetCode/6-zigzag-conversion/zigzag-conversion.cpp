class Solution {
public:
    string convert(string s, int numRows) {
    // 1,2,3....n,n-1...1 ~
    if (numRows == 1 || s.length() <= numRows) {
        return s;
    }
    vector<string> a(numRows);
    bool down = true;
    int row = 0;
    for( int i = 0; i< s.length(); i++){
        a[row] += s[i];
        if(down){
            row ++;
            if(row == numRows){
                row -=2;
                down = false;
            }
        }else{
            row --;
            if(row == -1){
                row = 1;
                down = true;
            }
        }
    }
    string out = "";
    for (string str: a){
        out += str;
    }
    return out;
    }
};