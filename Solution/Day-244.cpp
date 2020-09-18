#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
unordered_set<int>printed;
void generate_primes(void) {
    for(int i=2; ;++i) {
        if(all_of(printed.begin() , printed.end() , [i](int x){ return (i % x ) !=0; })){
            cout << i << '\n'; 
            printed.insert(i);
            sleep(1);
        }
    }
}
int main(void){
    generate_primes();
    return 0;
}
