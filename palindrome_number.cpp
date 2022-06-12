class Solution {
public:
bool isPalindrome(int x) {
    long int s=0,sum=0;
    int temp=x;
    if(x<0 || x>2147483647)
        return false;
    while(x!=0){
        sum=(x%10);
        s=sum+(s*10);
        x=x/10;
    }
    if(s==temp)
        return true;
    else
        return false;
}

};
