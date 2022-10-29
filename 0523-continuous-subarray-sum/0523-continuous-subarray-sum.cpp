class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        int i,j;
        vector<int> arr;
        for(i=0;i<nums.size();i++){
            arr.push_back(nums[i]%k);
        }
        arr[0]=nums[0]%k;
        for(i=1;i<nums.size();i++){
            arr[i]=(arr[i-1]+nums[i])%k;
            if(arr[i]==0 || arr[i]%k==0){
                return true;
            }
        }
        map<int,int>mp;
        mp[arr[0]]=0;
        for(i=1;i<arr.size();i++){
            
//             for(auto it:mp){
//                 if(it.first==(arr[i]%k) && (i-it.second)>=2 ){
//                     return true;
//                 }
                
//             }
            auto it=mp.find(arr[i]%k);
            if(it!=mp.end() && (i-it->second)>=2){
                return true;
            }
            else{
                if(mp.find(arr[i])==mp.end()){
                    mp[arr[i]]=i;
                }
            }
        }
        return false;
    }
};