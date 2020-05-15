/*
 * This problem was asked by Uber.
 *
 * Given an array of integers, return a new array such that each element at index i of 
 * the new array is the product of all the numbers in the original array except the one at i.  
 *
 * For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
 * If our input was [3, 2, 1], the expected output would be [2, 3, 6].  
 *
 * Follow-up: what if you can't use division?
 *
 */

/*
 * A simple solution would be just multiply the whole array, let it be MUL and just set answer[i] = MUL/arr[i]; 
 *
 * Now let's see the what if we can't use division , still the answer is simple
 * just create a prefix multiplication array and 
 * a suffix multiplication array which will contain the multiplication till i-th index - exclusive; 
 *
 */

#include <bits/stdc++.h>
using namespace std;
vector<int> get_Product_Array(vector<int>&elements){
    int n = static_cast<int>(elements.size());
    vector<int>suffix(n,1),prefix(n,1),answer(n,1);
    for(int i=0;i<n;++i){
        if(i==0){
            prefix.at(i) = 1;
        }else{
            prefix.at(i) = prefix.at(i-1)*elements.at(i-1);
        }
    }
    for(int i=n-1;i>=0;--i){
        if(i==n-1){
            suffix.at(i) = 1;
        }else{
            suffix.at(i) = suffix.at(i+1)*elements.at(i+1);
        }
    }
    for(int i=0;i<n;++i){
        answer.at(i) = prefix.at(i)*suffix.at(i);
    }
    return answer;
}
vector<int>space_Optimized_Solution(vector<int>&elements){
    int n = static_cast<int>(elements.size());
    vector<int>answer(n,1);
    int temp(1);
    for(int i=1;i<n;++i){
        answer.at(i) = answer.at(i-1)*elements.at(i-1);
    }
    for(int i=n-1;i>=0;--i){
        answer.at(i) = answer.at(i)*temp;
        temp*=elements.at(i);
    }
    return answer;
}
int main(void){
    int number_of_elements;
    cin>>number_of_elements;
    vector<int>elements(number_of_elements);
    for(auto &element: elements){
        cin>>element;
    }
    cout<<"Simple Solution: ";
    vector<int>answer = get_Product_Array(elements);
    for(auto &element: answer){
        cout<<element<<' ';
    }
    cout<<endl;
    cout<<"Space Optimized Solution: ";
    answer = space_Optimized_Solution(elements);
    for(auto &element: answer){
        cout<<element<<' ';
    }
    cout<<endl;
 
    return 0;
}
