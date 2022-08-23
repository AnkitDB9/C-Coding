class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {                                                       //using bits
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
