class Solution {
public:
    int fun2(int x){
        if(x==0)
        return 0;
        return x%10+fun2(x/10);
}
int addDigits(int n) {
      while(n>9){
      n=fun2(n);
   }
   return n;
}

};
