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

// Function to add a node at the end of the list
void addToEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to insert a node after a specific value
void insertAfterValue(struct Node* head, int value, int data) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            struct Node* newNode = createNode(data);
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
}

// Function to insert a node at a given position
void insertAtPosition(struct Node** head, int position, int data) {
    if (position < 0) {
        printf("Invalid position\n");
        return;
    }
    if (position == 0) {
        addToBeginning(head, data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* current = *head;
    int currentPosition = 0;
    while (current != NULL && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }
    if (current == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete nodes with a given value
void deleteNodesWithValue(struct Node** head, int value) {
    struct Node* current = *head;
    struct Node* prev = NULL;
    while (current != NULL) {
        if (current->data == value) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            current = prev == NULL ? *head : prev->next;
        } else {
            prev = current;
            current = current->next;
        }
    }
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
    addToBeginning(&head, 3);
    addToBeginning(&head, 2);
    addToBeginning(&head, 1);

    printf("Linked list after adding nodes to the beginning: ");
    printList(head);

    // Add nodes to the end
    addToEnd(&head, 4);
    addToEnd(&head, 5);

    printf("Linked list after adding nodes to the end: ");
    printList(head);

    // Insert a node after a specific value
    insertAfterValue(head, 2, 6);
    printf("Linked list after inserting a node after value 2: ");
    printList(head);

    // Insert a node at a given position
    insertAtPosition(&head, 2, 7);
    printf("Linked list after inserting a node at position 2: ");
    printList(head);

    // Delete nodes with a given value
    deleteNodesWithValue(&head, 2);
    //printing the linked list
    printf("Linked list after deleting nodes with value 2: ");
    printList(head);

    return 0;
}

