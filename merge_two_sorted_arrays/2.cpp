#include<bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n , int m){
    //declare 2 pointers
    int left = n-1;
    int right = 0;
    
    //swap the elements until arr1[left] is 
    // smaller than arr2[right]
    while(left >=0 && right < m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
            left--; right++;
        }
        else break;
    }
    
    //sort arr1 and arr2 individually
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
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

// Time Complexity: O(min(n, m)) + O(n*logn) + O(m*logm), where n and m are the sizes of the given arrays.
// Reason: O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

// Space Complexity: O(1) as we are not using any extra space.