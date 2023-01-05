//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	   // vector<int> ans;
        vector<int> P_arr;
        vector<int> N_arr;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                P_arr.push_back(arr[i]);
            }
            else{
                N_arr.push_back(arr[i]);
            }
        }
        
        
        int mincount=min(P_arr.size(),N_arr.size());
        int maxcount=max(P_arr.size(),N_arr.size());
        
        int index=0;
        for(int i=0;i<maxcount;i++){
            if(i<mincount){
                arr[index]=P_arr[i];
                arr[index+1]=N_arr[i];
                index+=2;
            }
            else{
                if(P_arr.size()>N_arr.size()){
                    arr[index]=P_arr[i];
                }
                else{
                    arr[index]=N_arr[i];
                }
                index+=1;
            }
        }
        
        
        
        
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends