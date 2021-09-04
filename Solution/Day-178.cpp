/*

   Let's just  say we got first throw result as 5 then : 
    1. If we consider next number will be same as required , i.e. for the first game we 
        will get 6 and for second game we will get 5 then probabilities are similar, 
        1/6 for winning the first game and 1/6 for winning the second game. 
   
    2. Now comes the interesting part , let's just say you did not get the required number this time , i.e. you will not
        get 6 for first game and you are not going to get 5 for second game , in this move.

        Then for the first game you might receive {1,2,3,4,5}  then probability of starting the game 
        from very beginning is 4/6 -> because if you receive 5 as your number in next move you just need a 6. 

        But for the Second game, you might receive {1,2,3,4,6} then probability of starting the game from very
        beginning is 5/6, as whatever the number you receive you have to start the game from beginning and now you need
        atleast one more move then previous game.

        Thus mathematically it's very likely that you will have to pay less cost if you play the first game!!



        IF YOU FOUND SOMETHING WRONG HERE , PLEASE MAIL ME: offamitkumar@gmail.com 
        SUGGESTION & DOUBTS ARE WELCOMED ;)

*/
#include <bits/stdc++.h>
using namespace std;
int total_play = 10000;
int play(int a , int b) {
    random_device rand_dev; 
    mt19937 generator(rand_dev()); 
    uniform_int_distribution<int> uni_int(1,6);
    int current = uni_int(generator); 
    int thrown {1}; 
    while (true) {
        int next = uni_int(generator); 
        thrown++; 
        if (current == a && next == b) {
            return thrown;
        }
        current = next; 
    }
}
signed main(void){
    double score_one{} , score_two{}; 
    for (int i=0; i<total_play; ++i) {
        score_one+=play(5,6);
    }
    for (int i=0; i<total_play; ++i) {
        score_two+=play(5,5);
    }
    /* for game one expected value will be close to 36
       for game two expected value will be close to 42*/
    cout <<"game one expected value : "<< fixed << setprecision(4) << score_one / double(total_play) << '\n'; 
    cout <<"game two expected value : "<< fixed << setprecision(4) << score_two / double(total_play) << '\n'; 
    return 0;
}
