#include <iostream>

const int MAX_SIZE = 100; 

class Stack {
public:
  Stack() { top = -1; }

  bool isEmpty() const { return top == -1; } 
  bool isFull() const { return top == MAX_SIZE - 1; } 

  void push(int data) {
    if (isFull()) {
      std::cout << "Stack Penuh\n";
      return;
    }
    stack[++top] = data; 
  }

  int pop() {
    if (isEmpty()) {
      std::cout << "Stack Kosong\n";
      return -1; 
    }
    return stack[top--]; 
  }

private:
  int stack[MAX_SIZE]; 
  int top;             
};

int main() {
  Stack myStack;

  myStack.push(10);
  myStack.push(20);

  std::cout << myStack.pop() << std::endl;

  return 0;
}
