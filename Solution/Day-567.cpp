
#include <bits/stdc++.h>
using namespace std;
pair<int,int>cons(int a, int b){
    return make_pair(a,b);
}
int car(pair<int,int>p){
    return p.first;
}
int cdr(pair<int,int>p){
    return p.second;
}
int main(void){
    cout<<car(cons(3,4))<<endl;
    cout<<cdr(cons(3,4))<<endl;
}
