// Program to generate Pascal’s Triangle
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.


//variation 2 optimised



#include<bits/stdc++.h>
using namespace std;


void pascalTriangle(int n){
    //printing the enitre row n :
    long long ans =1;
    cout<<ans<<" "; //printing 1st element
    
    //printing the rest of the part:
    for(int i=1;i<n;i++){
        ans = ans * (n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main(){
    int r = 5;
    
    pascalTriangle(r);
    
    return 0;
}

// Time Complexity: O(N) where N = given row number. Here we are using only a single loop.

// Space Complexity: O(1) as we not using any extra space.