class Solution {
public:
    int n;
    vector<vector<int>>res;
    void solve(unordered_map<int,int>&mp,vector<int>&temp){
        if(temp.size() == n) {
            res.push_back(temp);
            return;
        }
        for(auto &i:mp){
            if(i.second==0) continue;
            temp.push_back(i.first);
            i.second--;
            solve(mp,temp);
            temp.pop_back();
            i.second++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        unordered_map<int ,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int>temp;
        solve(mp,temp);
        return res;
    }
};