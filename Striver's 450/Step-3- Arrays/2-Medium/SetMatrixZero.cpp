//SET MATRIX ZERO
#include <iostream>
#include <vector>
using namespace std;

void SetMatrixZeroAndPrint(vector <vector<int>> a){
    int col0 = 1;
    for( int i = 0; i < a.size(); i++){
        for (int j = 0; j < a[0].size(); j++){  //M*N TIME, 0 space
            if(i == 0 && a[i][j] == 0){
                a[0][0] = 0;
            }
            else if(j == 0 && a[i][j] == 0){
                col0 = 0;
            }
            else if( i == j == 0 && a[i][j] == 0 ){
                a[0][0] = 0;
                col0 = 0;
            }
            else if(a[i][j] == 0){
                a[0][j] = 0;
                a[i][0] = 0;
            }
        }
    }
    for( int i = 1; i < a.size(); i++){
        for (int j = 1; j < a[0].size(); j++){  
            if(a[0][j] == 0 || a[i][0] == 0  ){
                a[i][j] = 0;
            }
        }
    }
    if(a[0][0] == 0){
        for (int j = 0 ;j < a[0].size(); j++){  
            a[0][j] = 0;
        }
    }
    if(col0 == 0){
        for (int i = 0; i < a.size(); i++){  
            a[i][0] = 0;
        }
    }
    cout << "After setting zeros: \n";
    for( int i = 0; i < a.size(); i++){
        for (int j = 0; j < a[0].size(); j++){  
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}