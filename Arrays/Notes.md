### Uninitialized arrays:
    Default (null) for non-primitive data
    0 for primitive
    garbage value in Cpp
### Accesing an is O(1)
    Address of ith Index = Base address + offset = Address of 0th Index + i × (size of one element's data type in bits)
#### Sparse arrays: refer- [Click for sparse array diagram](https://media.geeksforgeeks.org/wp-content/uploads/20220604165958/arsa.png) (It stores row and col of each non-zero)

#### in Java length is an instance variable for arrays so .length is used instead of .length() method call like other objects like string..

## BRANCH PREDICTION - Makes sorted objects easy to process

## -Anonymous Array in Java
 
    // anonymous int array 
    new int[] { 1, 2, 3, 4};  

    // anonymous char array 
    new char[] {'x', 'y', 'z'}; 

    // anonymous String array
    new String[] {"Geeks", "for", "Geeks"}; 

 <mark>can be used to pass a array of specific size to a function while creating it at same time and in the function it can be given a parameter name for use</mark>
#### Default values in java are 0/false/null for arrays of respective data types
#### The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 

`code` Anonymous array example-

    class Test {
    public static void main(String[] args)
    {
          // anonymous array
          sum(new int[]{ 1, 2, 3 });
    }
   
    public static void sum(int[] a)
    {
        int total = 0;
 
        // using for-each loop
        for (int i : a) 
            total = total + i;
         
        System.out.println("The sum is: " + total);
    }
    }



## Rotate array elements left by d elements
#### time complexity = O(N)
#### auxiliary space = O(1) #below code basically optimizes space
    // C++ program to rotate an array by
            // d elements
            #include <bits/stdc++.h>
            using namespace std;

            /*Function to get gcd of a and b*/
            int gcd(int a, int b)
            {
                if (b == 0)
                    return a;

                else
                    return gcd(b, a % b);
            }

            /*Function to left rotate arr[] of size n by d*/
            void leftRotate(int arr[], int d, int n)
            {
                /* To handle if d >= n */
                d = d % n;
                int g_c_d = gcd(d, n);
                for (int i = 0; i < g_c_d; i++) {
                    /* move i-th values of blocks */
                    int temp = arr[i];
                    int j = i;

                    while (1) {
                        int k = j + d;
                        if (k >= n)
                            k = k - n;

                        if (k == i)
                            break;

                        arr[j] = arr[k];
                        j = k;
                    }
                    arr[j] = temp;
                }
            }
            // Function to print an array
            void printArray(int arr[], int size)
            {
                for (int i = 0; i < size; i++)
                    cout << arr[i] << " ";
            }
            /* Driver program to test above functions */
            int main()
            {
                int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
                int n = sizeof(arr) / sizeof(arr[0]);

                // Function calling
                leftRotate(arr, 2, n);
                printArray(arr, n);

                return 0;
            }
#### recurive approach to rotate one index in one rec-call;; tripple reversal approach ;; print last k then first n-k elements.
---
#### What is stable and in-Place Sorting?

### Reversal Algorithm for array rotation to left by d positions.
    ^left rotation by d == right rotation by n-d
    ^To left shift by d elements do reversal of first d elements and then of next n-d elements    after that reverse the whole array to get the final array which has been left shifted by d.
    ^O(N) and O(1) space
    ^Their is a predefined rotate rotate(arr, arr + (d % n), arr + n); in cpp and similar in java as well. Here it rotates to the left. Here d is the position and n is the size.

____________________________________________________________________________________________________________
## SOLVE LATER- 
        * "N" Stacks in an Array