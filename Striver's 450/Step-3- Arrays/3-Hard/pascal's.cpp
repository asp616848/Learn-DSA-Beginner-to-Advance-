#include <iostream>
#include <vector>
using namespace std;

void printnRowPascalTri(int n, int i){ 
    int theElement = 1;
    if(i != -1){
        for(int j = 1 ; j <= i; j++){
            theElement = theElement * (n-j+1)/j;
        }
        cout << theElement << " ";
        return;
    }
    // when i is -1 then whole pascal triangle is to be printed till n rows

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j <= i; j++){
            printnRowPascalTri(i,j);
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        theElement = 1;
        cout << "1 ";
        for(int j = 1 ; j < i; j++){
            
            theElement = theElement * (i-j)/j;
            cout << theElement << " ";
        }
        cout << endl;
    }
    vector<vector<int>> answer;
    

    //calculate the rest of the elements:
    for (int row = 1; row <= n; row++) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1); //inserting the 1st element
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        answer.push_back(ansRow);
    }
    for (int i = 0; i < answer.size(); i++) {

        for (int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}