#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  int col0=1;
  // step 1: traverse the matrix
  // mark 1st row and col accordingly 
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(matrix[i][j] == 0){
              //mark i-th row
              matrix[i][0] = 0;
              
              // mark j-th column
              if(j!=0)
              matrix[0][j] = 0;
              else col0=0;
          }
      }
  }
  
  //step2: mark with 0,00 from 1,1 to n-1,m-1
  for(int i = 1;i<n;i++){
      for(int j=1;j<m;j++){
          if(matrix[i][j] != 0){
              // check for row and col:
              if(matrix[i][0] == 0 || matrix[0][j] ==0){
                  matrix[i][j] = 0;
              }
          }
      }
  }
  
  //step 3: finally mark the 1st column and 1st row
  
  if(matrix[0][0] == 0){
      for(int j=0;j<m;j++){
          matrix[0][j] = 0;
  }
  }
  if(col0 == 0){
      for(int i=0;i<n;i++){
      matrix[i][0] =0;
  }
  }
    
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for(auto it: ans){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
        
        }
        return 0;
    }
// Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
// Reason: In this approach, we are also traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

// Space Complexity: O(1) as we are not using any extra space.