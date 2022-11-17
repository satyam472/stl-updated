
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &v,int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=v[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            v[k]=a[i];
            k++;
            i++;
        }
        else{
            v[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        v[k]=a[i];
        i++;
    }
    while(j<n2){
        v[k]=b[j];
        j++;
    }
    
}

void MergeSort(vector<int> &v ,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        MergeSort(v,l,mid);
        MergeSort(v,mid+1,r);
        
        Merge(v,l,mid,r);
    }
}

int main()
{
    vector<int> v={4,5,100,1,8,6};
    int n=v.size();
    MergeSort(v,0,n-1);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}


// time complexity : O(NLOG(N))


// Proof of Binary Search Time Complexity

for array of size n

n               0 operation          (Size after 0 operation)

n/2             1 operation          (Size after 1 operation)

n/4             2 operation          (Size after 2 operation)
.
.
.

n/2^k           K operation           (Size after k operation)    // we know that after k operation 
                                                                  // size will be 1 


therefore

n/2^k=1
n=2^k
take log(base 2) on both side

log(n)=log(2^k)

log(n) = k

    ---------------It means log(n) operation will perform in binary search--------------------
