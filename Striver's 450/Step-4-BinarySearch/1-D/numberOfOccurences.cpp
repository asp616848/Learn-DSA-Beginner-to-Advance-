int findOccurences(int arr[], int size, int a){
    int first=-1;
    int last=-1;
    int e = size-1;
    int s = 0;

    while(s<=e){
        int mid = s+ (e-s)/2;
        if(arr[mid] == a){
            first = mid+1;
            e = mid-1;
        }
        else if ( arr[mid] < a){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    s = 0;
    e = size-1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(arr[mid] == a){
            last = mid+1;
            s = mid+1;
        }
        else if ( arr[mid] < a){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    if (first == -1 || last == -1)
        return 0;
    else
        return (last - first + 1); 
    return last-first;
}