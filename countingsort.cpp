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
    
    // Counting sort ==> O(n) complexity only when max(V[i]) = O(n), n = v.size()

    vector<int> freqArray(10,0); // size is max(v[i]) + 1
    for (auto val : v){
        freqArray[val]++;
    }
    
    v.clear();
    int x = freqArray.size();

    for (int i = 0; i < x; i++){
        while (freqArray[i]--){
            v.push_back(i);
        }
    }

    cout << "Sorted array:"; print(v);

    return 0;
}