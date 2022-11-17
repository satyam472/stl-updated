#include <bits/stdc++.h>
using namespace std;

// In Insertion Sort it pick the element and put it into sorted part of array.

void insertionSort(vector<int> &v ,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
            }
            else{
                break;
            }

        }
    }
}

int main()
{
    vector<int> v={4,5,100,1,8,6};
    int n=v.size();
    insertionSort(v,n);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}


// time complexity : O(n^2)