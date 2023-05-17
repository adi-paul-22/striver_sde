// sorting 0s,1s and 2s
// three approaches

//1. sort -> nlogn
//2. count 0 , 1 and 2s -> solves using log 2n
//3. pointer approach -> solves using log n

#include<bits/stdc++.h>
using namespace std;

void sortedArray(vector<int> &arr, int n){
    int low =0, mid= 0, high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) mid++;
        else { swap(arr[mid],arr[high]);
        high--;}
    }
}

int main(){
    vector<int> a {1,0,2,1,0,1,1,2,2,0,0,2,1};
    int n = a.size();
    sortedArray(a,n);
    cout<<"Sorted array is : \n";
    for(auto it: a) cout<<it<<" ";
}
