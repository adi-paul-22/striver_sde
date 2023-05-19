#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v){
    int n = v.size();  // size of the array
    vector<int> ls; //list of answers
    
    //declaring a  map 
    map<int,int> mpp;
    
    //least occurences of teh majority element 
    int mini = int(n/3) +1;
    
    //storing the elements with this occurences
    for(int i=0;i <n;i++){
        mpp[v[i]]++;
        
        if(mpp[v[i]] == mini){
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

// Time Complexity: O(N*logN), where N = size of the given array.
// Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN).
// If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

// Space Complexity: O(N) as we are using a map data structure. We are also using a list that stores a maximum of 2 elements. That space used is so small that it can be considered constant.