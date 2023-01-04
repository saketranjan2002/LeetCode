class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        else{
            map<char,char> mp;
            vector<char> vt;
            mp[s[0]]=t[0];
            vt.push_back(t[0]);
            for(int i=1;i<s.length();i++){
                auto it=mp.find(s[i]);
                if(it==mp.end()){
                    if(find(vt.begin(),vt.end(),t[i])==vt.end()){
                        mp[s[i]]=t[i];
                        vt.push_back(t[i]);
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(mp[s[i]]!=t[i]){
                        return false;
                    }
                }
            }
            return true;
        }
    }
};