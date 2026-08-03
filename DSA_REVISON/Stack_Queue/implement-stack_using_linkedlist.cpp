#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int data = 0) {
    this->data = data;
    this->next = nullptr;
  }

  ~Node() {
    next = nullptr;
  }
};

class StackUsingLL {
  Node* head;
  public:
  int size;
  StackUsingLL() {
    head = nullptr;
    size = 0;
  }

  void push(int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    size++;
  }

  int top() {
    return head->data;
  }

  void pop() {
    if(head == nullptr) {
      cout << "no elements in stack" << endl;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
  }

  int s_ize() {
    return size;
  };

  bool isEmpty() {
    return size == 0;
  }


};

int main() {
  StackUsingLL st;
  st.push(10);
  st.push(20);
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout << st.s_ize() << endl;
  cout << st.isEmpty() << endl;


}