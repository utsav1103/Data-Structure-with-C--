#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = nullptr;
    }

    // Method to insert a node at the beginning
    void insertAtBeginning(int val) {
        // Create a new node
        Node* newNode = new Node(val);

        // Link the new node to the current head
        newNode->next = head;

        // Update the head to the new node
        head = newNode;
    }

    // Method to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    // Create a linked list
    LinkedList list;

    // Insert nodes at the beginning
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    // Print the linked list
    list.printList();

    return 0;
}