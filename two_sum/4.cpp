#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mp.find(moreNeeded) != mp.end()){
            return {mp[moreNeeded],i};
        }
        mp[num] = i;
    }
    
    return {-1,-1};
}

int main(){
    int n = 5;
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}

// Time Complexity: O(N), where N = size of the array.
// Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).

// Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

// Space Complexity: O(N) as we use the map data structure.

// Note: We have optimized this problem enough. But if in the interview, we are not allowed to use the map data structure, then we should move on to the following approach i.e. two pointer approach. This approach will have the same time complexity as the better approach.