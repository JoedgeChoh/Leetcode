#include<stack>

MinStack::MinStack() {}

void MinStack::push(int x) {
  if(s_min.empty() || s_min.top()>x) {
    s_min.push(x);
  }
  s.push(x);
}

void MinStack::pop() {
  if(s_min.top==s.top()) {
    s_min.pop();
  }
  s.pop();
}

void MinStack::top() {
  s.top();
}

void MinStack::getMin() {
  s_min.top();
}
