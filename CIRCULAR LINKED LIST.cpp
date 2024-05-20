#include <iostream>
using namespace std;

// Definisi struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di awal list, sekarang disebut addNode
void addNode(Node** head_ref, int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;

    // Jika list tidak kosong, update next dari node terakhir
    if (*head_ref != NULL) {
        Node* temp = *head_ref;
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = new_node;
    } else {
        // Jika list kosong, node baru menjadi head
        new_node->next = new_node;
    }

    *head_ref = new_node;
}

// Fungsi untuk mencetak list
void printList(Node* head) {
    Node* temp = head;
    if (head != NULL) {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
    cout << endl;
}

// Driver code
int main() {
    Node* head = NULL;

    addNode(&head, 2);
    addNode(&head, 5);
    addNode(&head, 7);
    addNode(&head, 8);
    addNode(&head, 10);

    cout << "Circular List: ";
    printList(head);

    return 0;
}
