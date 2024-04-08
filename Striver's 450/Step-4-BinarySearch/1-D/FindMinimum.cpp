int findMinimum(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<= e){
        mid = s + (e-s)/2;
        while(arr[s] == arr[e] && s!=e){
            s++;
        }
        if(arr[mid] <= arr[e]){ // right part is sorted
            if(arr[mid] <= arr[mid-1]){
                return mid+1;
            }
            else{
                e = mid-1;
            }
        }
        else{ // left part is sorted
            if(arr[mid] >= arr[mid+1]){
                return mid+1 +1;
            }
            else{
                s = mid+1;
            }
        }
    }
    return s +1;
}