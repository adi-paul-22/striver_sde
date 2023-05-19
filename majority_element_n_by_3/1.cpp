#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v){
    int n = v.size();  // size of the array
    vector<int> ls; //list of answers
    
    for(int i =0;i<n;i++){
        //selected element is v[i]:
        //checking if v[i] is not already 
        //a part of the answer
        if(ls.size() == 0 || ls[0] !=v[i]){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(v[j] == v[i])
                cnt++;
            }
            //check if frequency is greater than n/3
            if(cnt > (n/3))
            ls.push_back(v[i]);
        }
        
        if(ls.size() == 2) break;
    }
    
    return ls;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}

// Time Complexity: O(N2), where N = size of the given array.
// Reason: For every element of the array the inner loop runs for N times. And there are N elements in the array. So, the total time complexity is O(N2).

// Space Complexity: O(1) as we are using a list that stores a maximum of 2 elements. The space used is so small that it can be considered constant.