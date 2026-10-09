class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false ;
        }
        int ld ;
        int y = x;
        long long z = 0;
        while(x!=0){
            ld = x%10;
            z = z*10 + ld;
            x = x/10;
        }
        if(y==z){
            
            return true;
        }
        else{
            
            return false;
        }
    }
};
