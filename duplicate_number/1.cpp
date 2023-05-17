#include<bits/stdc++.h>
using namespace std;

int Duplicate(vector<int>& arr){
    int n = arr.size();
    
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]) return arr[i];
    }
    return 0;
}

int main(){
    vector<int> arr{1,3,2,3,4};
    cout<<"The duplicate element is "<<Duplicate(arr);
}

// Time Complexity:O(Nlogn + N)

// Reason: NlogN for sorting the array and O(N) for traversing through the array and checking if adjacent elements are equal or not. But this will distort the array.

// Space Complexity:O(1)