// Program to generate Pascal’s Triangle
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.


//variation 2 



#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    
    //calculating nCr
    
    for(int i=0 ;i<r;i++){
        res = res * (n-i);
        res  = res / (i+1);
    }
    return res;
}

void pascalTriangle(int n){
    //printing the enitre row n :
    for(int c=0;c<n;c++){
        cout<<nCr(n-1,c)<<" ";
    }
    cout<<endl;
}

int main(){
    int r = 5;
    
    pascalTriangle(r);
    
    return 0;
}

// Time Complexity: O(n*r), where n is the given row number, and r is the column index which can vary from 0 to n-1.
// Reason: We are calculating the element for each column. Now, there are total n columns, and for each column, the calculation of the element takes O(r) time where r is the column index.

// Space Complexity: O(1) as we are not using any extra space.