#include <bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n , int s , int h , int d) {
    if (n == 1) {
        cout << "move " << s << " to " << d << '\n'; 
        return; 
    }
    tower_of_hanoi(n-1,s,d,h);
    cout << "move " << s << " to " << d << '\n'; 
    tower_of_hanoi(n-1,h,s,d); 
}
void solve( int n) {
    // 1-> source 
    // 2-> helper 
    // 3-> destination 
    tower_of_hanoi(n, 1,2,3); 
}
signed main(void){
    int n = 3; 
    solve(n); 
    return 0;
}
