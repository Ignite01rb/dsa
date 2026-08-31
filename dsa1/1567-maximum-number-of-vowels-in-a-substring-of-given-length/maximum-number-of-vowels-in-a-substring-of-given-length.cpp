class Solution {
public:
    bool isvowel(char c){
        if(c=='a'  || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int c=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                c++;
            }
                
        }
        ans=c;
        for(int j=k;j<s.size();j++){
                if(isvowel(s[j])) c++;
                if(isvowel(s[j-k])) c--;
                ans=max(ans,c);
        }
        return ans;
    
    }
};