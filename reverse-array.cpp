#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  int array_size;
  cin>>array_size;

  int array[array_size];

  for(int i = 0; i < array_size; i++){
    
    cin>>array[i];
    
  }

  std::stack<int> stack;

  for(int i = 0; i < array_size; i++){

    stack.push(array[i]);
    
  }

  for( int i = 0; i < array_size; i++){

    array[i] = stack.top();

    stack.pop();
    
  }

  // Using inbuilt method in C++
  //std::reverse(array, array+array_size);

  for(int i = 0; i < array_size; i++){
    
    cout<<array[i]<<" ";
    
  }

  return 0;
  
}