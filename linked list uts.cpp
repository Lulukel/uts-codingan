#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head = NULL; 

void insertAtBeginning(int data) {
  Node* newNode = new Node; 
  newNode->data = data; 
  newNode->next = head; 
  head = newNode; 
}

void printList() {
  Node* temp = head; 
  while (temp != NULL) { 
    cout << temp->data << " ";
    temp = temp->next; 
  }
  cout << endl;
}

int main() {
  insertAtBeginning(40);
  insertAtBeginning(50);
  insertAtBeginning(60);

  printList();

  return 0;
}
