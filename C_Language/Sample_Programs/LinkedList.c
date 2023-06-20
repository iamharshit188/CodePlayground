#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct node {
    int data;
    struct node *next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct node **head, int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct node **head, int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    struct node *temp = *head;

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to delete a node from the linked list
void deleteNode(struct node **head, int key) {
    struct node *temp = *head, *prev;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to print the linked list
void printList(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}

// Main function to test the linked list implementation
int main() {
    struct node *head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    printf("Linked list after inserting nodes at the beginning: ");
    printList(head);

    // Insert nodes at the end
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 6);
    printf("Linked list after inserting nodes at the end: ");
    printList(head);

    // Delete a node
    deleteNode(&head, 3);
    printf("Linked list after deleting node with value 3: ");
    printList(head);

    return 0;
}
