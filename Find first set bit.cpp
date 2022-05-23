class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int rsb=(n& ~(n-1));
        int i=0;
        while(rsb>0){
            if((rsb&(1<<i))!=0){
                return i+1;
                
            }
            else{
                i++;
            }
        }
    }
};
