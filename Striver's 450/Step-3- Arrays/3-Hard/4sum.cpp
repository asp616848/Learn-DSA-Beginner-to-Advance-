#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<vector<int>> fourSum(vector<int> a, int sum){
    vector<vector<int>> res;
    sort(a.begin(), a.end());

    cout << "Sorted array: ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;



    for(int i = 0; i <=a.size()-5 ;i++){
        for(int j = i+1; j <= a.size()-4; j++){

            while(i > 0 && a[i] != a[i-1] && i < a.size()-5)
                i++;
            while(j > 1 && a[j] != a[j-1] && j < a.size()-4)
                j++;

            int k = j+1;
            int l = a.size()-1;
            vector<int> temp;
            while(k<l && k < a.size() && l >= 0){
                cout << a[i] << " " << a[j] << " " << a[k] << " " << a[l]<< " " << sum << " " << a[i]+a[j]+a[k]+a[l] << " " <<endl;
                if(a[i]+a[j]+a[k]+a[l] == sum){

                    
                    if(a[i] != a[j] || a[j] != a[k] || a[k] != a[l] || a[l] != a[i] || a[i] != a[k] || a[j] != a[l]){
                        temp.push_back(a[i]);
                        temp.push_back(a[j]);
                        temp.push_back(a[k]);
                        temp.push_back(a[l]);
                        if(find(res.begin(), res.end(), temp) == res.end()){
                            res.push_back(temp);
                            }
                        temp.clear();
                        k++;
                        while (a[k] != a[k-1] && k < l)
                            k++;
                        

                        l--;
                        while (a[l] != a[l+1] && k < l)
                            l--;
                    }
                }
                else if(a[i]+a[j]+a[k]+a[l] < sum){
                    k++;
                    while(a[k] != a[k-1] && k < l)
                        k++;
                }
                else{
                    l--;
                    while(a[l] != a[l+1] && k < l)
                        l--;
                }
            }
        }
    }
    return res;
}

