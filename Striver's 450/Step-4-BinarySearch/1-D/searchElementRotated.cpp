
int searchInRotated(int arr[], int n, int x){
    int s = 0;
    int e = n-1;

    while(s<= e){
        while(arr[s] == arr[e] && s!=e){
            s++;
        }
        int mid = s + (e-s)/2;
        if(arr[mid] == x){
            return mid+1;
        }
        if( arr[s] < arr[mid]){ //left part is sorted
            if(x < arr[mid] && x >=arr[s]){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        else{ // right part is sorted
            if(x > arr[mid] && x <= arr[e]){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
    }
    return s+1;
}