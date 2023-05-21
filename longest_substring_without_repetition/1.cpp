#include<bits/stdc++.h>
using namespace std;

int solve(string str){
    
    if(str.size() == 0 ) return 0;
    
    int ans = INT_MIN;
    
    for(int i = 0; i<str.length();i++){ // outer loop for traversing the string
        unordered_set <int> set;
        for(int j = i; j<str.length();j++){ //inner loop for getting different string tsrating with str[i]
        if(set.find(str[j]) != set.end()) // if the element found mark it as ans and break form the loop
           { ans = max(ans,j-i);
            break;
        }
        set.insert(str[j]);
    }
    }
    return ans;
}

int main() {
  string str = "takeUforward";
  cout << "The length of the longest substring without repeating characters is " << 
  solve(str);
  return 0;
}

// Time Complexity: O( N2 )

// Space Complexity: O(N) where N is the size of HashSet taken for storing the elements