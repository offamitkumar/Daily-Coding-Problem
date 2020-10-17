#include <iostream>
#include <vector>
using namespace std;
int getFixedPoint(vector<int>&v) {
    for (int i=0; i<(int)v.size(); ++i) {
        if ( i == v.at(i)) { 
            return i;
        }
    }
    throw false;
}
int main(void){
    vector<int>v1{-6,0,2,40}; 
    vector<int>v2{1,5,7,8}; 
    try{
        cout << getFixedPoint(v1) << '\n'; 
        cout << getFixedPoint(v2) << '\n'; 
    } catch (const bool error) {
        cout << boolalpha << error << '\n'; 
    }
    return 0;
}
