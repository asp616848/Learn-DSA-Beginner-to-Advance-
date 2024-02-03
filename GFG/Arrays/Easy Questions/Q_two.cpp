//QUESTION - Move all zeros to end of array
#include <iostream>
#include <climits>
using namespace std;

void moveZeros(int arr[], int n)
{
    int start =0;
    int end = n-1;
    while(start<end)
    {
        if(arr[start]==0 && arr[end]!=0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]!=0 && arr[end]!=0)
        {
            start++;
        }
        else if(arr[start]==0 && arr[end]==0)
        {
            end--;
        }
        else
        {
            start++;
            end--;
        }
    }
    return;
}

int main(){
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
        

    }
    cout << "]" << endl;
    return 0;
}