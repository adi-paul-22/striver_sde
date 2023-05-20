#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mp.find(moreNeeded) != mp.end()){
            return "YES";
        }
        mp[num] = i;
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