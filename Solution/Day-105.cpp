#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;
using namespace chrono;

function<void()> Debounced(function<void()>&f , int period){
    static auto created = high_resolution_clock::now();
    function<void()> fn = [=,&f](){
        auto now = high_resolution_clock::now();
        if (duration_cast<milliseconds>(now - created).count() > period){
            f();
        }
        // created = now; // mark the last call of the function 

        // For debouncing uncomment the above line, So we will mark the time for last 
        // call made to this function and would call it again only if time difference is greater
        // then the period provided
    };
    return fn;
}

int main(void){
    int x = 0;
    function<void()> f = [&x](){
        x++;
    };

    auto dbf = Debounced(f, 500);
    for (int i = 0; i < 10; ++i) {
      dbf();
    }
    // we can't call this function until 500ms period is over.
    if (x != 0) {
      throw std::runtime_error("Expected x not to change since it's debounced for 500ms");
    }
    std::this_thread::sleep_for(milliseconds(501)); // 500 (inclusive) is threshold so let the 
    // thread sleep for 501ms

    // now we can call this function as many time we want
    for (int i = 0; i < 10; ++i) {
      dbf();
    }
    if (x != 10) {
      throw std::runtime_error("Expected x to be incremented 10 times");
    }
}
