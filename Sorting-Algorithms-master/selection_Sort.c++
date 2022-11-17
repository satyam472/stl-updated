
#include <bits/stdc++.h>
using namespace std;

// In slection sort we select a smallest number then place it into starting idx.

void selectionSort(vector<int> &v ,int n){
    for(int i=0;i<n-1;i++){
        int Min=INT_MAX,pos;
        for(int j=i;j<n;j++){
           if(v[j]<Min){
               pos=j;
               Min=v[j];
           }
        }
        swap(v[i],v[pos]);
    }
}

int main()
{
    vector<int> v={4,5,100,1,8,6};
    int n=v.size();
    selectionSort(v,n);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}


// time complexity : O(n^2)
