int findPeak(int arr[], int size){
    if(size == 1) return 0;
    int s = 0, e = size-1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid+1;
        }
        else if (arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    return s+1;
}