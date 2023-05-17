// Program to generate Pascal’s Triangle
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.


//variation 1 

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

int pascalTriangle(int r, int c){
    int element = nCr(r -1,c-1);
    return element;
}

int main(){
    int r = 5;
    int c = 3;
    int element = pascalTriangle(r,c);
    cout<<"The element at position (r,c) is : "<<element<<endl;
    return 0;
}

// Time Complexity: O(c), where c = given column number.
// Reason: We are running a loop for r times, where r is c-1.

// Space Complexity: O(1) as we are not using any extra space.