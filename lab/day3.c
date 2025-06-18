#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

// Function to simulate NFA for the given input string
int NFA(struct node *input, int currState, int *finStates) {
    if (input == NULL) {
        // Check if the current state is one of the final states
        for (int i = 0; finStates[i] != -1; i++) {
            if (currState == finStates[i]) {
                return 1; // Input accepted
            }
        }
        return 0; // Input rejected
    }

    // Transitions for (0+1)*
    if (currState == 0) {
        if (input->data == '0') {
            return NFA(input->next, 1, finStates);
        } else if (input->data == '1') {
            return NFA(input->next, 2, finStates);
        }
    } else if (currState == 1 || currState == 2) {
        if (input->data == '0' || input->data == '1') {
            return NFA(input->next, 2, finStates);
        }
    }

    // Transitions for 0*
    if (currState == 2) {
        if (input->data == '0') {
            return NFA(input->next, 2, finStates);
        }
    }

    // Transitions for 1*
    if (currState == 2) {
        if (input->data == '1') {
            return NFA(input->next, 3, finStates);
        }
    }

    // Invalid transition, reject input
    return 0;
}

int main() {
    struct node *head = NULL;
    struct node *tail = NULL;
    char input[100];
    int finStates[] = {2, 3, -1}; // Define final states

    printf("Enter the input string: ");
    scanf("%s", input);

    // Create linked list from input string
    for (int i = 0; input[i] != '\0'; i++) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = input[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Start simulation from the initial state 0
    if (NFA(head, 0, finStates)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}