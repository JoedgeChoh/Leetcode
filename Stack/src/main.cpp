#include<iostream>
#include<vector>
#include<string>
#include "stack.h"

int main() {
  /*1.设计一个最小栈,除了需要支持常规栈的操作外,还需要支持在 O(1) 时间内查询栈内最小值的功能。*/
  // MinStack minStack;
  // minStack.push(-2);
  // minStack.push(0);
  // minStack.push(-3);
  // minStack.getMin();
  // std::cout<<"the minimum is: "<<minStack.getMin()<<std::endl; // Returns -3.
  // minStack.pop();
  // minStack.top();// Returns 0.
  // std::cout<<"the minimum is: "<<minStack.getMin()<<std::endl; // Returns -3.

  /*2.给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。 */
  Solution solution; 
  std::vector<std::string> ss = {"()[]{}","(]","([)]","{[]}"};
  for (int i=0;i<ss.size();i++) {
    if(solution.isValid(ss[i])) {std::cout<<ss[i]<<" is valid"<<std::endl;} 
    else {std::cout<<ss[i]<<" is unvalid"<<std::endl;}
  }
  return 0;
}
