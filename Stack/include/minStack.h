#include<stack>

#ifndef MINSTACK_H
#define MINSTACK_H
class MinStack {
privete:
  stack<int> s,s_min;
public:
  MinStack();
  void push(int );
  void pop();
  int top();
  int getMin();
}
#endif
