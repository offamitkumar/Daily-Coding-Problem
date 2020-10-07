// i can't represent last terminal_character on my terminal
#include <iostream>
#include <functional>
#include <set>
using namespace std;
set<char> terminal {'.', '?', '!'}; 
set<char> seperator {',', ';', ':'};
bool valid(string &s, int index = 0) {// checking until first terminal character appears 
    // (This is a Valid string. Here, it is again!)
    // first word needs to be a title 
    if(index == s.size()) {
        return true;
    }
    if(!isupper(s[index])) {
        return false;
    }
    ++index;
    while (index < (int)s.size() && s[index]!=' ') {
        if (isupper(s[index])) {
            return false;
        }
        if(terminal.find(s[index]) != terminal.end()) {
            if (index-1<0 || (!isalpha(s[index-1]))){
                return false; 
            }
            if(index+1 < s.size()) {
                if (s[index+1] != ' ') {
                    return false;
                }
            } else {
                return true;
            }
            return valid(s , index+2);
        }
        if(seperator.find(s[index]) != seperator.end()) {
            if (index-1<0 || (!isalpha(s[index-1]))){
                return false; 
            }
            if (index+1 < s.size() && s[index+1]!=' ') {
                return false;
            }else if (index +1 == s.size()) {
                return false;
            }
        }
        ++index;
    }
    ++index; 
    while (index < (int)s.size()) {
        if (terminal.find(s[index]) != terminal.end()) {
            if (index-1<0 || (!isalpha(s[index-1]))){
                return false; 
            }
            if(index+1 < s.size()) {
                if (s[index+1] != ' ') {
                    return false;
                }
            } else {
                return true;
            }
            return valid(s , index+2);
        }
        if(seperator.find(s[index]) != seperator.end()) {
            if (index-1<0 || (!isalpha(s[index-1]))){
                return false; 
            }
            if (index+1 < s.size() && s[index+1]!=' ') {
                return false;
            }else if (index +1 == s.size()) {
                return false;
            }
        }
        int counter{}; 
        while (index<s.size() && s[index]==' ') {
            ++counter; 
            ++index;
        }
        if(counter >=2 ) {
            return false;
        }
        if (isupper(s[index])){
            return false;
        }
        index++;
    }
    return true;
}

int main(void){
    string s; 
    getline(cin,s);
    if (valid(s)) {
        cout << "Valid" << '\n'; 
    } else {
        cout << "Invalid" << '\n'; 
    }
    return 0;
}
