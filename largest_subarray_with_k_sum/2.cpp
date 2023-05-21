#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a){
    unordered_map<int,int> mp;
    
    int maxi =0;
    int n = a.size();
    int sum = 0;
    for(int i =0;i<n;i++){
        
        sum+=a[i];
        if(sum == 0 ) maxi = i +1;
        
        else {
            if(mp.find(sum) != mp.end()){
                maxi = max(maxi , i - mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }
        
}
return maxi;
}

int main(){
    vector<int> a = {9,3,-3,-1,6,-5};
    
    cout<< solve(a);
}

// Time Complexity: O(N), as we are traversing the array only once

// Space Complexity: O(N), in the worst case we would insert all array elements prefix sum into our hashmap