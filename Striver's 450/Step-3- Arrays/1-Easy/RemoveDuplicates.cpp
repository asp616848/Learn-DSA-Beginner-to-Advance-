#include <vector>
using namespace std;
void RemoveDuplicates( vector<int> &a){
    if (a.empty()) // Check if the vector is empty
        return;

    int i = 0;
    int j = 1;
    while(i<a.size() && j < a.size()-i){
        while(a[i] == a[i+j]){
            j++;
        }
        if (j < a.size()-i) {
            a[i+1] =a[i+j];
            i++;
        }

    }
    a.resize(i+1);
}