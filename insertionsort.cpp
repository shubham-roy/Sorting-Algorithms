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
    
    //Insertion sort
    cout << "Insertion Step " << 1 << ": ";
    print(v);

    int n = v.size();
    for (int i = 1; i < n; i++){
        for (int j = i-1; j >= 0; j--){
            if (v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
            else{
                break;
            }
        }
        cout << "Insertion Step " << i+1 << ": ";
        print(v);
    }
    
    return 0;
}