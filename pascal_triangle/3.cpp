// Program to generate Pascal’s Triangle
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.


//variation 3



#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    
    //store the entire pascal's triangle
    for(int row =1 ;row<=n;row++){
        vector<int> tempLst; //temporary list 
        for(int col=1;col<=row;col++){
            tempLst.push_back(nCr(row-1,col-1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}

int main(){
    int r = 5;
    
    vector<vector<int>> ans = pascalTriangle(r);
    for(auto it : ans){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

// Time Complexity: O(n*n*r) ~ O(n3), where n = number of rows, and r = column index.
// Reason: The row loop will run for approximately n times. And generating a row using the naive approach of variation 2 takes O(n*r) time complexity.

// Space Complexity: In this case, we are only using space to store the answer. That is why space complexity can be still considered as O(1).