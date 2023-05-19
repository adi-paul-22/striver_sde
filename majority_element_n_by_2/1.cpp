#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    // size of the given array 
    
    int n = v.size();
    
    for(int i=0;i<n;i++){
        // selected elememt is v[i]
        int cnt = 0;
        for(int j=0;j<n;j++){
            //counting the frequency of v[i]
            if(v[i] == v[j]){
                
                cnt++;
            }
        }
        
        //check if frequency is greater than n/2:
        if(cnt > (n/2))
        return v[i];
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

// Time Complexity: O(N2), where N = size of the given array.
// Reason: For every element of the array the inner loop runs for N times. And there are N elements in the array. So, the total time complexity is O(N2).
// Space Complexity: O(1) as we use no extra space.