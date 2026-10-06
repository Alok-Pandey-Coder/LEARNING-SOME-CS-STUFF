//implementation of stack using queue
#include <bits/stdc++.h>
using namespace std;

class QueueStack {
  queue<int> q;
  public: 
  void push(int val) {
    q.push(val);
    int cnt = q.size() - 1;
    while(cnt > 0) {
      int top = q.front();
      q.pop();
      q.push(top);
      cnt--;
    }
  }

  void pop() {
    q.pop();
  };

  bool isEmpty() {
    return q.size() == 0;
  };

  int top() {
    return q.front();
  };

  int size() {
    return q.size();
  };

};

int main() {

  QueueStack st;
  st.push(10);
  cout << st.top() << endl;
  st.push(20);
  st.push(30);
  st.push(40);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  cout << st.size() << endl;
  
  
}