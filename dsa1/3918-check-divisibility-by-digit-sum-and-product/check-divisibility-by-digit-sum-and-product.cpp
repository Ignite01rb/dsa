class Solution {
public:
    bool checkDivisibility(int n) {
        int digit=n;
        int sum=0;
        int prod=1;
        while(digit){
            int d=digit%10;
            sum+=d;
            prod*=d;
            digit=digit/10;
        }
        
        return n % (sum + prod) == 0;
        
    }
};