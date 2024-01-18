//QUESTION - Reorder an array according to given indexes
// Cyclic sort method, Extra array method, sorting a vector method[using custom comparator], mathematical approach, cyclic and maths are best

void cyclicMethod(int arr[], int index[], int n){  // O(n) time and O(1) space below adjacent comments are the dry run representation for first iteration
    for(int i = 0; i < n; i++){
        while(index[i] != i){
            int oldIndex = index[index[i]]; //2
            int oldElement = arr[index[i]]; //10

            arr[index[i]] = arr[i]; //arr[4] = 23
            index[index[i]] = index[i]; //index[4] = 4

            arr[i] = oldElement; //arr[0] = 10
            index[i] = oldIndex; //index[0] = 2 

            //NOTE - The beauty of while loop here is in the fact that now index[i] is not equal to i,
            // so we need to check again if the new element at index[i] is at the right place or not
        }
    }
}

void arithemeticMethod(int arr[], int index[], int n){
    
}


int main(){
    int arr[] = {23, 12, 20, 10, 23};
    int index[] = {4, 0, 1, 2, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cyclicMethod(arr, index, n);
}