//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int i,count_max=0;
      unordered_set<int> mp;
      for(i=0;i<N;i++){
          mp.insert(arr[i]);
      }
      for(i=0;i<N;i++){
          if(mp.find(arr[i]-1)==mp.end()){
              int cnt=1,temp=arr[i]+1;
              while(mp.find(temp)!=mp.end()){
                  temp+=1;
                  cnt+=1;
              }
              if(cnt>count_max){
                  count_max=cnt;
              }
          }
      }
      return count_max;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends