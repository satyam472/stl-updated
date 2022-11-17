
#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &v,int l,int r){
    int pivot=v[l];
    int i=l;
    int j=r;
    while(i<j){
        while(v[i]<=pivot) i++;
        while(v[j]>pivot) j--;
        if(i<j){
            swap(v[i],v[j]);
        }
    }
    swap(v[j],v[l]);
    
    return j;
    
}

void quickSort(vector<int> &v ,int l,int r){
    if(l<r){
        int pivot=Partition(v,l,r);   // positioning one element in its right position
        quickSort(v,l,pivot-1);
        quickSort(v,pivot+1,r);
    }
}


int main()
{
    vector<int> v={4,5,100,1,8,6};
    int n=v.size();
    quickSort(v,0,n-1);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}


// time complexity : O(N^2)

