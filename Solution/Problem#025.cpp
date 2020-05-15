/*
 *  Implement regular expression matching with the following special characters:

     . (period) which matches any single character
     * (asterisk) which matches zero or more of the preceding element
    That is, implement a function that takes in a string and a valid regular expression and 
    returns whether or not the string matches the regular expression.

    For example, given the regular expression "ra." and the string "ray", your function should return true.
    The same regular expression on the string "raymond" should return false.

    Given the regular expression ".*at" and the string "chat", your function should return true. 
    The same regular expression on the string "chats" should return false.
*/

/*
 *  We will use Dynamic Programming to solve this question. 
 *
 *  DP[i][j] = true if till index i(in string) and j(int pattern ) , it is possible to form a regular expression 
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main(int argc , char *argv[]){
    // write you code here
    
    string text , pattern; 
    cin >> text >> pattern; 
    int txt_len{(int)text.size()} , pattern_len{(int)pattern.size()};
    bool DP[txt_len+1][pattern_len+1];
    memset(DP , false , sizeof(DP));
    DP[0][0] = true; // text and pattern are considered index 1 based 
    for(int i=1;i<(int)pattern_len+1;++i){ 
        // for pattern like .* 
        if(i==1 and pattern[i-1]=='.'){ 
            DP[0][i] = true;
        }
        // for pattern like a* , a*b*
        if(pattern[i-1]=='*'){
            DP[0][i] = DP[0][i-2];
        }
    }
    for(int j=1;j<(int)txt_len+1;++j){
        //cerr<<text[j-1]<<"    :   ";
        for(int i=1;i<(int)pattern_len+1;++i){
        //    cerr<<pattern[i-1]<<" ";
            if(text[j-1]==pattern[i-1] || pattern[i-1]=='.'){
                DP[j][i] = DP[j-1][i-1]; // if current c 
                // whether before this character if there was a match or not. 
            }else{
                if(pattern[i-1]=='*'){
                    DP[j][i] = DP[j-1][i]; // we can consider 0 occurring and just take answer from pattern [j-2]
                    if(pattern[i-2]=='.'||pattern[i-2]==text[j-1]){ // in this condition there is a match 
                        DP[j][i] |= DP[j][i-1]; // we can take answer from above because if we remove this character still there 
                        // there should be a match consider text as "aaa" and pattern as "a*" then if "aa" is a match then "aaa" will also be 
                        // a match so we assume that we have removed the 3rd 'a' and check whether "aa" was a match or not 
                    }
                }
            }
        }
        //cerr<<endl;
    }
    cout << boolalpha << DP[txt_len][pattern_len] << endl;
    return 0;
}
