#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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

// Function to check if a linked list contains a cycle
bool hasCycle(struct Node* head) {
    if (head == NULL) {
        return false;
    }

    struct Node* tortoise = head;
    struct Node* hare = head;

    while (hare != NULL && hare->next != NULL) {
        tortoise = tortoise->next;       // Move the tortoise one step
        hare = hare->next->next;         // Move the hare two steps

        if (tortoise == hare) {
            return true;  // If the two pointers meet, there is a cycle
        }
    }

    return false;  // If the hare reaches the end of the list, there is no cycle
}

int main() {
    // Create a linked list with a cycle
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = head->next; // Create a cycle

    // Check if the linked list contains a cycle
    if (hasCycle(head)) {
        printf("The linked list contains a cycle.\n");
    } else {
        printf("The linked list does not contain a cycle.\n");
    }

    return 0;
}

