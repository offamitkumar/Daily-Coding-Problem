#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<string> strobogrammatic( int n ) {
            vector<string>ret;
            if ( n & 1) {
                ret.push_back("1"); 
                ret.push_back("0"); 
                ret.push_back("8");
            } else {
                ret.push_back("");
            }
            for ( ; n>1; n-=2) {
                vector<string>temp;
                for (int i=0; i<ret.size(); ++i) {
                    string s= ret.at(i); 
                    if ( n > 3 ) {
                        temp.push_back("0" + s + "0");
                    }
                    temp.push_back("1" + s + "1");
                    temp.push_back("8" + s + "8");
                    temp.push_back("9" + s + "6");
                    temp.push_back("6" + s + "9");
                }
                ret = temp;
            }
            return ret;
        }
};
int main(void){
    Solution s; 
    int n; cin >> n; 
    for (const auto &itr: s.strobogrammatic(n)) {
        cout << itr << ' ';
    }
    cout << '\n'; 
    return 0;
}
