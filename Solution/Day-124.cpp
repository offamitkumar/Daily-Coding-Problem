/*
   for a 'n' fair coins , n/2 will be having head up, 
   in next move remaining n/4 will be having head up , 
   , then n/8 ..... this way the series goes up to 1. 

   */
#include <bits/stdc++.h>
using namespace std;
class Soltuion {
    public:
        int getExpValue( int n) {
            return ceil(double(log2(n))); 
        }
};
signed main(void){
    int n; cin >> n; 
    Soltuion s; 
    cout << s.getExpValue(n) << '\n'; 
    return 0;
}
