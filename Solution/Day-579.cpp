class Solution {
public:
    int reachNumber(int target) {
        // either by adding the values we are going to get the sum 
        // or we need to make the (target-currentPos) even number , because 
        // with even number we can make the displacement 0, let's say your difference 
        // is 10 then you can move 5 step back and 5 step ahead and distance covered by you will be 10 
        // but will it make any impact on your journey, NO; as you are at the same position where you started. 
        // but in our case you overcome the extra 10 unit distance which is exceeding the target value; 
        // you can't break a odd number in two equal weights , just try a few testcase you will get it. 

        int current = 0 , moves = 0 , inc = 1;
        target = abs(target);
        while (true) {
            if(target == current) {
                break;
            }
            if (target < current && (target-current)%2==0) {
                break;
            }
            current+=inc++; 
            ++moves;
        }

        return moves;
    }
};
