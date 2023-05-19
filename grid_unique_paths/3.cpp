#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int uniquePaths(int m , int n){
        int N = n+m-2;
        int r = m-1;
        double res = 1;
        
        for(int i=1;i<=r;i++){
            res = res* (N-r+i)/i;
            
        }
        return (int)res;
    }
};
int main(){
    Solution obj;
    int totalCount= obj.uniquePaths(3,7);
    cout<<"The total number of Unique Paths are "<<totalCount<<endl;
}

// Time Complexity: The time complexity of this solution will be O(n-1) or  O(m-1) depending on the formula we are using.

// Space Complexity: As we are not using any extra space the space complexity of the solution will be  O(1).