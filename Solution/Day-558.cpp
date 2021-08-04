#include <bits/stdc++.h>
using namespace std;

int main(void){
    srand(time(NULL)); 
    long double pi , circle_point{} , square_point{}; 
    for  (int i=1; i<200'000; ++i) {
        double x = double(rand() % (i+1))/(double)i; 
        double y = double(rand() % (i+1))/(double)i; 
        double dist = x*x + y*y; 
        if (dist <= 1) {
            ++circle_point;
        }
        ++square_point;
        cout << double (4) * circle_point / square_point << '\n'; 
    }
    return 0;
}
