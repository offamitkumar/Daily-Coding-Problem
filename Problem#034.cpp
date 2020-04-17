/*
   This problem was asked by Quora.

   Given a string, find the palindrome that can be made by inserting the fewest 
   number of characters as possible anywhere in the word.

   If there is more than one palindrome of minimum length that can be made,
   return the lexicographically earliest one (the first one alphabetically).

   For example, given the string "race", you should return "ecarace", 
   since we can add three letters to it (which is the smallest amount to make a palindrome).

   There are seven other palindromes that can be made from "race" by adding three letters, but "ecarace" comes first alphabetically.

   As another example, given the string "google", you should return "elgoogle".
  
 */

/*
 * we will run the kmp pattern process on the string and just remove the suffix which matches with the 
 * prefix in the original string 
 *
 */
#include <bits/stdc++.h>
using namespace std;
vector< int > reset_table;
int kmp_processing(const string &s){
    int j=-1 , i = 0;
    while(i <(int) s.size()){
        while(j>=0 && s[i] != s[j]){
            j = reset_table.at(j);
        }
        j++;
        i++;
        reset_table[i] = j;
    }
    return reset_table[i];
}

int main(void){
    string s , rev; 
    cin >> s;
    rev = s; 
    reverse(rev.begin() , rev.end());
    s = s + "#" +  rev;
    reset_table.assign(s.size() , -1);
    int del = kmp_processing(s);
    cout << s.substr(rev.size()+1 , rev.size()-del) + s.substr(0 , rev.size()) << '\n';
    return 0;
}
