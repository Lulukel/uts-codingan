#include <iostream>
using namespace std;

// Definisi struktur Node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Fungsi untuk menambahkan node baru di awal list
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->prev = NULL;
    newNode->next = (*head_ref);

    if ((*head_ref) != NULL)
        (*head_ref)->prev = newNode;

    (*head_ref) = newNode;
}

// Fungsi untuk menampilkan list
void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// Fungsi untuk menghapus node
void deleteNode(Node** head_ref, int key) {
    if (*head_ref == NULL)
        return;

    Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = prev;

    delete temp;
}

// Fungsi main
int main() {
    Node* head = NULL;

    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 8);

    cout << "Doubly Linked List: ";
    display(head);

    return 0;
}
