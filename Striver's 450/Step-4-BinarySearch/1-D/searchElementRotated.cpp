
int searchInRotated(int arr[], int n, int x){
    int s = 0;
    int e = n-1;

    while(s<= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == x){
            return mid;
        }// try writing below, if u can't then answer below
        
    }
}


















        // if (arr[s] <= arr[mid]) {
        //     if (x >= arr[s] && x < arr[mid]) {
        //         e = mid - 1;
        //     } else {
        //         s = mid + 1;
        //     }
        // } else {
        //     if (x > arr[mid] && x <= arr[e]) {
        //         s = mid + 1;
        //     } else {
        //         e = mid - 1;
        //     }
        // }