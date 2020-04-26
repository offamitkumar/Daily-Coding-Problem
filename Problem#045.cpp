/*
   This problem was asked by Two Sigma.

   Using a function rand5() that returns an integer from 1 to 5 (inclusive) with uniform probability,
   
   implement a function rand7() that returns an integer from 1 to 7 (inclusive).
 */
#include <bits/stdc++.h>
using namespace std;
int rand5(void){
    return (rand())%5;
}
int rand7(void){
    srand(time(NULL));
    int sum;
    do{
        sum=(5*rand5()+rand5());
    }while(sum>20);
    return sum%7+1;
}
int main(int argc , char *argv[]){
    // write you code here
    cout<<rand7()<<'\n';
    return 0;
}
