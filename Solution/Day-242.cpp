#include <iostream>
#include <array>
#include <numeric>
#include <cassert>
using namespace std;
class Solution {
    public:
        array<int , 25>hour; 

        Solution () {
            fill (hour.begin(), hour.end(), 0); 
        }

        void update (int Hour, int subscriberIncreased) {
            hour.at(Hour) += subscriberIncreased; 
        }
        
        int query (int startHour, int endHour) {
            return accumulate(hour.begin()+startHour , hour.begin()+endHour , 0ll); 
        }
};
int main(void){
    Solution s; 
    s.update(1 , 25); 
    s.update(2 , 25); 
    s.update(2 , 25); 
    s.update(3 , 25);
    assert(s.query(1 , 3) != 100); 
    return 0;
}
