int nonRepeatetiveNumber(int arr[], int n){
    int a = 0;
    for(int i = 0 ; i < n; i++){
        a ^= arr[i];
    }
    return a;
}