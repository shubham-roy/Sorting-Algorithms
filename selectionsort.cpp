#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& v) {
    cout << endl;
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v{
        1, 3, 8, 2, 9, 2, 5, 6
    };
    cout << "Given array:"; print(v);
    
    // Selection Sort
    int n = v.size();
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (v[i] > v[j]){
                swap(v[i],v[j]);
            }
        }
        cout << (i+1) << "th smallest number: " << v[i] << endl;
    }
    
    return 0;
}