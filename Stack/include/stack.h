#include<stack>
#include<string>

#ifndef MINSTACK_H
#define MINSTACK_H
class MinStack {
private:
  std::stack<int> s,s_min;
public:
  MinStack();
  void push(int );
  void pop();
  int top();
  int getMin();
};

class Solution {
  private:
    std::stack<char> Stack;
  public:
    Solution();
    void strtest();
    bool isValid(std::string);
};

#endif
