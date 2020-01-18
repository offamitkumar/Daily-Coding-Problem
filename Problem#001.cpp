/*
 * This problem was recently asked by Google.
 *  Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
 *  For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
 *  Bonus: Can you do this in one pass?
 */

// we can solve this in time by just sorting and finding the pair by using Two Pointer Method
//
// Let's focus on Bonus :)
// Idea is to create a set and check whether the required number(given_Sum - Arr[i]) is present in set or not
// in log(n) time.
//

#include <bits/stdc++.h>
using namespace std;
bool is_Pair_Present(const vector<int>&elements,const int &SUM){
    unordered_set<int>s;
    for(auto &itr:elements){
        if(s.find(SUM-itr)!=s.end()){
            s.insert(itr);
        }else{
            return true;
        }
    }
    return false;
}
int main(void){
    int arr_Size{},SUM{};
    cin>>arr_Size>>SUM;
    vector<int>elements(arr_Size);
    for(auto &itr:elements){
        cin>>itr;
    }
    cout<<boolalpha<<is_Pair_Present(elements,SUM)<<endl;
}
