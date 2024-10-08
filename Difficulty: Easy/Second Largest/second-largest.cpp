//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int size = arr.size();

    if (size < 2) {
        return -1;  
    }

    int max = INT_MIN;  
    int sm = INT_MIN;   

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            sm = max;    
            max = arr[i];  
        } else if (arr[i] > sm && arr[i] != max) {
            sm = arr[i];  
        }
    }

    return (sm == INT_MIN) ? -1 : sm;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends