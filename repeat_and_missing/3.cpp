#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a){
    long long n = a.size(); // size of the array
    
    
    //fiond Sn and S2n:
    long long SN = (n * (n+1))/2;
    long long S2N = (n * (n +1) * (2*n + 1)) / 6;
    
    // calculate S and S2 
    long long S = 0, S2 = 0;
    for(int i =0;i<n;i++){
        S+=a[i];
        S2 += (long long )a[i]* (long long)a[i];
    }
    // s- sn = x-y
    long long val1 = S - SN;
    
    // S2 - S2N = X^2 - Y^2
    long long val2 = S2 - S2N;
    
    // find X+Y 
    val2 /= val1;
    
    long long x = (val1 + val2)/2;
    long long y = x - val1;
    
    return {(int)x , (int)y};
}

int main(){
    vector<int> a = { 3,1,2,4,5,6,7,5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}
// Time Complexity: O(N), where N = the size of the given array.
// Reason: We are using only one loop running for N times. So, the time complexity will be O(N).

// Space Complexity: O(1) as we are not using any extra space to solve this problem.