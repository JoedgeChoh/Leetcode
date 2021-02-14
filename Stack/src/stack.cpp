#include<iostream>
#include<stack>
#include "stack.h"

  /*1.设计一个最小栈,除了需要支持常规栈的操作外,还需要支持在 O(1) 时间内查询栈内最小值的功能。*/
MinStack::MinStack() {}

void MinStack::push(int x) {
  if(s_min.empty() || s_min.top()>x) {
    s_min.push(x);
  }
  s.push(x);
}

void MinStack::pop() {
  if(!s_min.empty() && s_min.top()==s.top()) {
    s_min.pop();
  }
  s.pop();
}

int MinStack::top() {
  return s.top();
}
int MinStack::getMin() {
  return s_min.top();
}



  /*2.给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。 */
Solution::Solution() {}

bool Solution::isValid(std::string s) {
  std::stack<char> stack;
  for(int i=0;i<s.length();i++) {
    if(s[i]=='{' || s[i]=='(' || s[i]=='[') {
      stack.push(s[i]);
    }
    else {
      if (stack.empty()) return false;
      if (s[i]=='}' && stack.top()=='{' ||\
          s[i]==')' && stack.top()=='(' ||\
          s[i]==']' && stack.top()=='['
          ) {
        stack.pop();
        continue;
      }

    }
  }
  return stack.empty();
  
}

void Solution::strtest() {
  std::string s="hello";
  std::cout<<s.length()<<std::endl;
  std::cout<<s.size()<<std::endl;
}
