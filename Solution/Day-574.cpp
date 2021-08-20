#include <iostream>
#include <vector>
using namespace std;
class bitArray{
    private:
        vector<bool>baseArray; 
    public:
        void init(const int &x) {
            baseArray.resize(x); 
        }
        bool get(const int &i) const {
            return baseArray.at(i);
        }
        void set(const int &index , const int &value) { 
            baseArray[index] = value;
        }
        friend ostream& operator<< (ostream&out ,const bitArray&a) { 
            for(auto itr:a.baseArray) {
                out << itr; 
            }
            return out;
        }
};

int main(void){
    bitArray b; 
    b.init(100); 
    b.set(10 , 1); 
    cout << b << '\n'; 
    return 0;
}
