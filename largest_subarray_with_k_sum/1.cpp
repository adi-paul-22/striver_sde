#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a){
    int maxi = 0 ;
    for(int i = 0;i< a.size();i++){
        int sum = 0;
        for(int j =i;j< a.size() ;j++){
            sum+= a[j];
            if(sum == 0)
               maxi = max(maxi, j - i + 1);
        }
    }
    return maxi;
}

int main(){
    vector<int> a = {9,3,-3,-1,6,-5};
    
    cout<< solve(a);
}

// Time Complexity: O(N^2) as we have two loops for traversal

// Space Complexity: O(1) as we aren’t using any extra space.