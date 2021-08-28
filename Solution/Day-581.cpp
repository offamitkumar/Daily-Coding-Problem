#include <bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        pair<int,int>top_left; 
        int length, height;
        Rectangle(int a, int b, int c ,int d) : top_left(a,b) , length(c) , height(d){}
};
class Solution{
    private:
    public:
        int overlappingArea(Rectangle&r1 , Rectangle&r2) {
            pair<int,int>br1 , br2; // bottom right corner for r1 and r2 rectangle 
            br1.first = r1.top_left.first + r1.length; 
            br1.second = r1.top_left.second - r1.height; 
            br2.first = r2.top_left.first + r2.length; 
            br2.second = r2.top_left.second - r2.height; 
            return max(min(br1.first , br2.first) - max(r1.top_left.first , r2.top_left.first),0) * max(min(r1.top_left.second , r2.top_left.second) - max(br1.second , br2.second),0); 
        }
};
int main(void){
    Rectangle r1(1,4,3,3) , r2(0,5,4,3); 
    Solution s; 
    cout  << s.overlappingArea(r1 , r2) << '\n'; 
    return 0;
}
