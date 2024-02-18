#include <vector>
using namespace std;

void sort012(vector<int> &arr){
    int low = 0;
    int mid = 0;                                    
    int high = arr.size()-1;
    while(mid <= high){
        cout << "\nDEBUG" << low << "   -    " << mid << "   -    " << high << endl;

        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}