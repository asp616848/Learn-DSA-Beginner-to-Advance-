/*One of the most optimum approach i came up with was to turn the first row into column
 and store the two elements of the 2nd row's and 3rd row's last column in some variable
 after that i turn the 2nd row into 2nd coln using one of the stored variables and store
 the 2nd coln of 3rd row's value so i can use it later while turing last row. this is
 uselessly complex yet implements the algo in O(N^2) time complexity and non-constant space*/
#include <iostream>
#include <algorithm>
using namespace std;

 void rotateArrayBy90(int arr[][4], const int row, const int coln){

    for (int i = 0; i < row; i++){
        for(int j = i+1; j < coln; j++){
            if(i != j) swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "after transverse\n";
    for (int i = 0; i < row; i++){
        for(int j = 0; j < coln; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < row; i++){
        for(int j = 0; j < coln/2; j++){
            (j != coln - j-1) ? swap(arr[i][j], arr[i][coln - j-1]) : void();
        }
    }
    cout << "reverse done\n";
    cout << "After rotating by 90 degrees: \n";
    for (int i = 0; i < row; i++){
        for(int j = 0; j < coln; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}