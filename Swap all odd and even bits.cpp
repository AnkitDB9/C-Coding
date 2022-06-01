class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
   int x=0;
   while((1<<x)<=n){
      x++;
   }
   x=x-1;
   
   int ans=0;
   for(int i=0;i<=x;i=i+2){
      if((n&(1<<i))>0){
         ans=ans+(1<<i+1);
      }
       if((n&(1<<i+1))>0){
         ans=ans+(1<<i);
      }
      
   }
   return ans;
    }
};
