//more fast 

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            if((n&(1<<i))>0) ans=ans | (1<<(31-i));
        }
        
    return ans;
    }
};

// thoda slow h sec wala
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        unsigned int lsb=0;
        for(int i=0;i<32;i++){
            lsb=n&1;
            lsb=lsb<<(31-i);
            ans=ans|lsb;
            n=n>>1;
        }
        
        
    return ans;
    }
};
