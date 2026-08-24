class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total=0;
        for(int i:nums){
            total^=i;
        }
        int diff=total^k;
        int c=0;
        while(diff){
            diff=diff & (diff-1);
            c++;
        }
        return c;
    }
};