#include<bits/stdc++.h>
using namespace std;

int Duplicate(vector<int>& arr){
    int n = arr.size();
    int freq[n+1] = {0};
    
    
    for(int i=0;i<n;i++){
        if( freq[arr[i]] == 0) freq[arr[i]] ++;
        else return arr[i];
    }
    return 0;
}

int main(){
    vector<int> arr{1,3,2,3,4};
    cout<<"The duplicate element is "<<Duplicate(arr);
}

// Time Complexity: O(N), as we are traversing through the array only once.

// Space Complexity: O(N), as we are using extra space for frequency array.