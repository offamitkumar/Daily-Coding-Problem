//
// Created by Amit Kumar on 19/03/23.
//
#include "stack"
#include "queue"
#include "vector"
#include "iostream"

using namespace std;

bool isAlpha(const char &ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string reverseString(const string &str) {
  stack<string> words; // alphabetic words
  queue<string> delimiters; // continuous string of delimiters
  int start{}, end{};
  bool beginningByDelimiter{false};
  while (end < (int) str.size()) {
    if (isAlpha(str[start])) {
      while (end < (int) str.size() && isAlpha(str[end])) {
        end++;
      }
      words.push(str.substr(start, end - start));
    } else {
      if (start == 0) {
        beginningByDelimiter = true;
      }
      while (end < (int) str.size() && !isAlpha(str[end])) {
        end++;
      }
      delimiters.push(str.substr(start, end - start));
    }
    start = end;
  }

  // We have separated the word & delimiters from the string.
  // only confusion is where to start build our result string.
  // i.e. what should appended first a word or a delimiter ?
  // for this we'll use beginningByDelimiter variable :-)
  string result{};
  while (!words.empty() || !delimiters.empty()) {
    if (beginningByDelimiter) {
      result += delimiters.front();
      delimiters.pop();
      beginningByDelimiter = false;
    } else {
      if (!words.empty()) {
        result += words.top();
        words.pop();
      }
      if (!delimiters.empty()) {
        result += delimiters.front();
        delimiters.pop();
      }
    }
  }
  return result;
}

int main() {
  vector<string> testStrings = {"hello/world:here", "hello/world:here/", "hello//world:here",
                                "//hello//", "//hello//world//here//"};
  // Let's test
  for (auto &str: testStrings) {
    cout << "Input: " << str << " Output: " << reverseString(str) << endl;
  }
  return 0;
}