/*
  This problem was asked by Google.

  Given an array of strictly the characters 'R', 'G', and 'B',
    segregate the values of the array so that all the Rs come first, the Gs come second, and the Bs come last. 

  You can only swap elements of the array.

  Do this in linear time and in-place.

  For example, given the array ['G', 'B', 'R', 'R', 'B', 'R', 'G'],
  it should become ['R', 'R', 'R', 'G', 'G', 'B', 'B'].
  
 */
#include <bits/stdc++.h>
using namespace std;
int main(void){
     vector< char > v = { 'R', 'R', 'R', 'G', 'G', 'B', 'B' };
     int red = 0 , green = 0 , blue = v.size() - 1;
     while(green < blue){
         if(v[green] == 'G'){
             green++;
         }else if(v[green] == 'R'){
             swap(v[green] , v[red]);
             red++;
             green++;
         }else if(v[green] == 'B'){
             swap(v[green] , v[blue]);
             blue-- ;
         }
     }
     for(auto &itr: v){
         cout << itr << ' ';
     }
    return 0;
}
