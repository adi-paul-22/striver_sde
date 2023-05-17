#include<bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n , int m){
    // declare a 3rd array with 2 pointers
    long long arr3[n+m];
    
    int left = 0;
    int right = 0;
    int index=0;
     
     // insert the elemenets from the 2 arrays
     // into the third array using left and right
     // pointers
     
     while(left <n && right <m){
         if(arr1[left]<=arr2[right]){
             arr3[index] = arr1[left];
             left++;
             index++;
         }
         else {
             arr3[index] = arr2[right];
             right++;
             index++;
         }
     }
     // if the right pointer reached the end 
     while(left < n){
         arr3[index++] = arr1[left++];
     }
     //if the left pointer reaches the end
     while(right < m){
         arr3[index++] = arr2[right++];
     }
    // fill back the elements from arr3[]
    // to arr1[] and arr2[]
    for(int i=0;i<n+m;i++){
        if(i<n) arr1[i] = arr3[i];
        else arr2[i-n] = arr3[i];
    }
    
}

int main(){
    long long arr1[] = {1,4,8,10};
    long long arr2[] = {2,3,9};
    int n=4, m=3;
    merge(arr1,arr2,n,m);
    cout<<"The merged array are : \n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n+m) + O(n+m), where n and m are the sizes of the given arrays.
// Reason: O(n+m) is for copying the elements from arr1[] and arr2[] to arr3[]. And another O(n+m) is for filling back the two given arrays from arr3[].

// Space Complexity: O(n+m) as we use an extra array of size n+m.