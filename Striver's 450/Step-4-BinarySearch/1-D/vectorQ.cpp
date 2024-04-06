#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<vector<int>> v2 = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    vector<vector<vector<int>>> v3;
    for(int i = 0; i < 20; i++){
        v3.push_back({{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}});
    }
    cout << "for Vector v1: "<< sizeof(v1) << endl;
    cout << "for Vector v2: "<< sizeof(v2) << endl;
    cout << "for Vector v3: "<< sizeof(v3) << endl;
    cout << "for Vector v1, using size method before erase: "<< v1.size() << endl;
    v1.erase(v1.begin(), v1.end());
    cout << "for Vector v1, using size method after erase:: "<< v1.size() << endl;
    cout << "for Vector v1, using sizeof after ERASE: "<< sizeof(v1) << endl;
    return 0;
}