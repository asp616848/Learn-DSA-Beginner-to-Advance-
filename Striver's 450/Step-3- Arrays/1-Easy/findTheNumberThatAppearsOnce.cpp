int nonRepeatetiveNumber(int &arr[], int n){
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = 0;
    for(int i = 0 ; i < n-1; i++){
        a ^= arr[i];
    }
    return a;
}