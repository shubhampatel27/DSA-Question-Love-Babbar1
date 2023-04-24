class Solution {
public:
    bool isPalindrome(int y) {
        if(y<0)return false;
       long long int ans=0;
       int x = y;
       while(x != 0){
          int digit = x%10;
          ans = (10*ans)+digit;
          x= x/10;
       }

       if(y==ans) return true;
       else return false;
    }
};
