#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the beginning of the list
void addToBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to reverse the linked list in-place
void reverseLinkedList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;  // Store the next node

        // Reverse the current node's pointer
        current->next = prev;

        // Move to the next node
        prev = current;
        current = nextNode;
    }

    *head = prev; // Update the head to point to the new first node (the old last node)
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty list

    // Add nodes to the beginning
    addToBeginning(&head, 15);
    addToBeginning(&head, 10);
    addToBeginning(&head, 5);

    printf("Original linked list: ");
    printList(head);

    // Reverse the linked list in-place
    reverseLinkedList(&head);
    printf("Reversed linked list: ");
    printList(head);

    return 0;
}

