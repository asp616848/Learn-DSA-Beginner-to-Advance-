#include "pascal's.cpp"
#include <iostream>
#include "4sum.cpp"
using namespace std;

int main(){
    int n;

    n = 9;
    printnRowPascalTri(6,-1);
    cout << endl;

    vector<int> a = {1, 0, -1, 0, -2, 2};
    int sum = 0;
    
    vector<vector<int>> res = fourSum(a, sum);
    cout << res.size() << endl;
    
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}