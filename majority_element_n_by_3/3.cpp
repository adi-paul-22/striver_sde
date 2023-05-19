#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v){
   
   int n = v.size(); //size of the array 
   int cnt1=0,cnt2=0;
   int el1 = INT_MIN;
   int el2 = INT_MIN; 
   // applying the Extended Boyer Moore's Voting Algorithm
   for(int i=0;i<n;i++){
       if(cnt1 ==0 && el2 !=v[i]){
           cnt1 =1;
           el1 = v[i];
       }
       else if(cnt2==0 && el1 != v[i]){
           cnt2 =1;
           el2 = v[i];
       }
       else if (v[i] == el1) cnt1++;
       else if (v[i] == el2) cnt2++;
       else{
           cnt1--;
           cnt2--;
       }
   }
   
   vector<int> ls; // list of answers
   
   //manually check if the stored elements in 
   // el1 and el2 are the majority elements:
   cnt1 =0; cnt2=0;
   for(int i=0;i<n;i++){
       if(v[i] == el1) cnt1++;
       if(v[i] == el2) cnt2++;
   }
   int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);
    
    // Uncomment the following line
    // if it is told to sort the answer array:
    // sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);
    
    return ls;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}a

// Time Complexity: O(N) + O(N), where N = size of the given array.
// Reason: The first O(N) is to calculate the counts and find the expected majority elements. The second one is to check if the calculated elements are the majority ones or not.

// Space Complexity: O(1) as we are only using a list that stores a maximum of 2 elements. The space used is so small that it can be considered constant.