class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int count=0;
        while(n>0)
        {
        // This operation reduces length
        // of every sequence of 1s by one.
            n=n&(n<<1);
            count++;
        }
        return count;
            
    }
