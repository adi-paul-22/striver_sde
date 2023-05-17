#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size(); // size of the  array 
    // step 1 : find the break point :
    int ind= -1; // break point
    
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            // index i is the break point
            ind = i;
            break;
        }
    }
    
    //if the break point does not exist
    if(ind == -1){
        // reverse the whole array 
        reverse(A.begin(),A.end());
        return A;
    }
    
    // step 2: find the next greater element and swap it with arr[ind]
    
    for(int i=n-1;i>ind;i--){
        if(A[i] > A[ind]){ swap(A[i],A[ind]);
        break;
        }
    }
    
    // step 3: reverse the right side
    reverse(A.begin() + ind + 1, A.end());
    
    return A;
}

int main(){
    vector<int> A = {2,1,5,4,3,0,0};
    vector<int> ans = nextGreaterPermutation(A);
    
    cout<<"The next permutation is : \n";
    for(auto it : ans) cout<<it<< " ";
    
    return 0;
}

// Output: The next permutation is: [2 3 0 0 1 4 5 ]

// Time Complexity: O(3N), where N = size of the given array
// Finding the break-point, finding the next greater element, and reversal at the end takes O(N) for each, where N is the number of elements in the input array. This sums up to 3*O(N) which is approximately O(3N).

// Space Complexity: Since no extra storage is required. Thus, its space complexity is O(1).