#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& v) {
    cout << endl;
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int _partition(vector<int> &v, int p, int r) {
    // **** randomization *****
    int k = rand(); // random number in [0, rand_max)
    k = k % (r - p + 1); // k in [0,r-p]
    k += p; // k in [p,r]
    swap(v[k],v[r]); // instead of always choosing the last element as pivot, we are randomizing the choice of pivot
    // ************************
    int x = v[r];
    int i = p - 1;
    for (int j = p; j < r; j++){
        if (v[j] <= x){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[++i], v[r]);
    return i;
}

void quicksort(vector<int> &v, int p, int r) {
    if (p < r){
        int q = _partition(v, p, r);
        quicksort(v, p, q - 1);
        quicksort(v, q + 1, r);
        return;
    }
    return;
}

int main() {
    vector<int> v{
        1, 3, 8, 2, 9, 2, 5, 6
    };
    cout << "Given array:"; print(v);
    
    // Quick Sort
    int n = v.size();
    srand(time(0)); // for randomization
    quicksort(v, 0, n-1);
    cout << "Sorted array:"; print(v);
    
    return 0;
}