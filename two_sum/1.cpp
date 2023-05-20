#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target){
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

int main(){
    int n = 5;
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    string ans  = twoSum(n,arr,target);
    cout<<"This is the variant 1: "<<ans<<endl;
    return 0;
}

// Time Complexity: O(N2), where N = size of the array.
// Reason: There are two loops(i.e. nested) each running for approximately N times.

// Space Complexity: O(1) as we are not using any extra space.