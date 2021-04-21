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
    
    // Bubble sort
    int n =  v.size();
    for (int i = 0; i < n; i++){
        bool isSwapped = false;
        cout << "Pass " << (i + 1) << ":";
        for (int j = 0; j < n-1; j++){
            if (v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                isSwapped = true;
            }
        }
        print(v);
        if (!isSwapped) break;
    }
    
    return 0;
}