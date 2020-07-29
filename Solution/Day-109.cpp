class Solution{
    public: 
        int swapBits(unsigned int a){
            // 0xAAAAAA will extract the odd bits which will be shifted to right 
            // 0x555555 will extract the even bits which will be shifted to left
            return ((a&(0xAAAAAAAAAAA))>>1)|((a&(0x5555555555))<<1);
        }
};
