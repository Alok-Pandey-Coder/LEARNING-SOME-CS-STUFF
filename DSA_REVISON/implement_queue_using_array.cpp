#include <bits/stdc++.h>
using namespace std;

class StackQueue {
  stack<int> st1, st2;//initialised two stack

  public:

  void push(int val) { // take O(N) for insertion
    
    while(!st1.empty()) {
      int top = st1.top();
      st1.pop();
      st2.push(top);
    }

    st1.push(val);
    while(!st2.empty()) {
      int top = st2.top();
      st2.pop();
      st1.push(top);
    }
  }

  int front() { // O(1);
    return st1.top();
  }

  void pop() { // O(1);
    st1.pop();
  }

  int size() { // O(1)
    return st1.size();
  }

  bool isEmpty() {//O(1)
    return st1.size() == 0;
  };


};


int main() {

  StackQueue q;
  q.push(3);
  q.push(4);
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  cout << q.size() << endl;



}