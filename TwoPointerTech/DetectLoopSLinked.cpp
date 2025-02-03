#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int findLoop(struct Node* head) {
  
    // Fast and slow pointers initially points to the head
    struct Node *slow = head, *fast = head;

    // Loop that runs while fast and slow pointer are not
    // nullptr and not equal
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        // If fast and slow pointer points to the same node,
        // then the cycle is detected
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

struct Node* newNode(int data) {
    struct Node* node
        = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {

    // linked list:
    // 1 -> 2-> 3
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
  
    // new a loop
    head->next->next->next = head->next;

    if (findLoop(head))
        printf("true");
    else
        printf("false");

    return 0;
}