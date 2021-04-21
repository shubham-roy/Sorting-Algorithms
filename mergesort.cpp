#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& v) {
    cout << endl;
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

void mergeSort(vector<int>& v, int lo, int hi) {
    if (lo >= hi)   return;
    
    int mid = (lo + hi) / 2;
    mergeSort(v,lo,mid);
    mergeSort(v,mid+1,hi);

    vector<int> temp;
    int i = lo, j = mid + 1;

    while (i <= mid && j <= hi){
        if (v[i] < v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= mid){
        temp.push_back(v[i]);
        i++;
    }
    while (j <= hi){
        temp.push_back(v[j]);
        j++;
    }

    i = 0;
    for (int k = lo; k <= hi; k++){
        v[k] = temp[i++]; 
    }

    return; 
}

int main() {
    vector<int> v{
        1, 3, 8, 2, 9, 2, 5, 6
    };
    cout << "Given array:"; print(v);
    
    // Merge Sort
    int n = v.size();
    mergeSort(v,0,n-1);

    cout << "Sorted array:"; print(v);
    return 0;
}