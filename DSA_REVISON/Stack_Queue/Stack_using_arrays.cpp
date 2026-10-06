#include <bits/stdc++.h>
using namespace std;

class ArrayStack {
  int* arr;
  int capacity;
  int currSize;
  int topIdx;

  public: 
  ArrayStack(int size = 1000) {
    arr = new int[size];
    capacity = size;
    this->currSize = 0;
    topIdx = -1;
  }

  void push(int val) {
    if(topIdx >= capacity) {
      cout << "stack overflow!" << endl;
    }
    topIdx++;
    arr[topIdx] = val;
    currSize++;
  };

  void pop() {
    if(topIdx < 0) {
      cout << "stack underFlow" << endl;
    }
    currSize--;
    topIdx--;
  };

  int top() {
    if(topIdx != -1) {
      return arr[topIdx];
    }
    return -1;
  };

  bool isEmpty() {
    if(topIdx == -1) {
      return true;
    }
    return false;
  };

  int size() {
    return currSize;
  }

};

int main () {

  ArrayStack st(30);
  st.push(12);
  st.push(13);
  st.push(15);
  st.push(16);
  cout << st.top() << endl;
  cout << st.isEmpty() << endl;
  cout << st.size() << endl;
  st.pop();
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout  << st.top() << endl;

}