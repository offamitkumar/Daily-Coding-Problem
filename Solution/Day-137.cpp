#include <bits/stdc++.h>
using namespace std;
class SparseArray{
    map<int,int>arr; 
    public:
        void init(vector<int>&arr , int n) {
            for (int i=0; i<n; ++i) {
                this->arr[i] = arr[i];
            }
            return;
        }
        void set(int index , int value) {
            this->arr[index] = value;
            return;
        }
        int get(int index) {
            return arr[index];
        }
};
signed main(void){
    vector<int>arr = {1,0,0,0,2,0,0,0,3,0,0,0,4}; 
    SparseArray s; 
    s.init(arr, arr.size());
    s.set(1,1000); 
    cout  << s.get(1) << '\n'; 
    return 0;
}
