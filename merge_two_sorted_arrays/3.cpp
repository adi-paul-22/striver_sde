#include<bits/stdc++.h>
using namespace std;

void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2){
    if(arr1[ind1] > arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void merge(long long arr1[], long long arr2[], int n , int m){
    // len of the imaginary single array
    int len = n + m;
    
    // initial gap
    int gap = (len/2) + (len%2);
    
    while(gap > 0){
        //place 2 pointers
        int left = 0;
        int right = left + gap;
        while(right < len){
            // case 1: left in arr1[]
            // right in arr2[]
            if(left<n && right >= n){
                swapIfGreater(arr1,arr2,left,right-n);
                
            }
            // case 2 : both pointers in arr2[] :
            else if(left >=n) {
                swapIfGreater(arr2,arr2,left-n,right -n);
                
            }
            //case 3: both pointers in arr1[]
            else swapIfGreater(arr1,arr1,left,right);
           left++; right++;
        }
        //break if gap =1 completed
        if(gap ==1) break;
        
        //otherwise calculate new gap
        
        gap = (gap/2) + gap%2;
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

// Time Complexity: O((n+m)*log(n+m)), where n and m are the sizes of the given arrays.
// Reason: The gap is ranging from n+m to 1 and every time the gap gets divided by 2. So, the time complexity of the outer loop will be O(log(n+m)). Now, for each value of the gap, the inner loop can at most run for (n+m) times. So, the time complexity of the inner loop will be O(n+m). So, the overall time complexity will be O((n+m)*log(n+m)).

// Space Complexity: O(1) as we are not using any extra space.