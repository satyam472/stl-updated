#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v ,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> v={4,5,2,1,8,6};
    int n=v.size();
    bubbleSort(v,n);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}


// time complexity : O(n^2)


