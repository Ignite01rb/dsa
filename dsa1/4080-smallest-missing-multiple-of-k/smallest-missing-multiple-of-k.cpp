class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        int val=k;
        while(st.contains(val)){
            val+=k;
        }
        return val;

    }
};