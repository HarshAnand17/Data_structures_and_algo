#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a structure for representing states
struct State {
    int stateID;                // Unique identifier for each state
    struct Transition* transitions;  // Pointer to linked list of transitions
    bool isAccepting;           // Flag to indicate if it's an accepting state
};

// Define a structure for representing transitions
struct Transition {
    char input;                 // Input symbol triggering the transition
    struct State* nextState;    // Pointer to the next state
    struct Transition* next;    // Pointer to the next transition in the list
};

// Function to create a new state
struct State* createState(int id, bool isAccepting) {
    struct State* newState = (struct State*)malloc(sizeof(struct State));
    newState->stateID = id;
    newState->transitions = NULL;
    newState->isAccepting = isAccepting;
    return newState;
}

// Function to create a new transition
struct Transition* createTransition(char input, struct State* nextState) {
    struct Transition* newTransition = (struct Transition*)malloc(sizeof(struct Transition));
    newTransition->input = input;
    newTransition->nextState = nextState;
    newTransition->next = NULL;
    return newTransition;
}

// Function to add a transition to a state
void addTransition(struct State* currentState, char input, struct State* nextState) {
    struct Transition* newTransition = createTransition(input, nextState);
    if (currentState->transitions == NULL) {    // Adding the first transition of a state
        currentState->transitions = newTransition;
    } else {
        struct Transition* temp = currentState->transitions;    // linked list of transitions
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTransition; // Adding subsequent transition to a state
    }
}

// Function to simulate NFA for a given input string
bool simulateNFA(struct State* startState, char input[]) {
    struct State* currentStates[10]; // Array to hold possible current states
    int currentCount = 1; // Number of current states
    currentStates[0] = startState;

    for (int i = 0; input[i] != '\0'; i++) {    // for all characters of the string
        int nextCount = 0;
        struct State* nextStates[50]; // Array to hold possible next states

        // For each current state, check possible transitions
        for (int j = 0; j < currentCount; j++) {
            struct Transition* temp = currentStates[j]->transitions;
            while (temp != NULL) {
                if (temp->input == input[i]) {  // If transition matches input
                    nextStates[nextCount++] = temp->nextState; // Add next state
                }
                temp = temp->next;
            }
        }

        // Update current states with next states
        currentCount = nextCount;
        for (int j = 0; j < currentCount; j++) {
            currentStates[j] = nextStates[j];
        }
    }

    // Check if any of the current states are accepting
    for (int i = 0; i < currentCount; i++) {
        if (currentStates[i]->isAccepting) {
            return true; // String accepted
        }
    }

    return false; // String not accepted
}

int main() {
    struct State* q0 = createState(0, true);
    struct State* q1 = createState(1, true);
    struct State* q2 = createState(2, false);

    // Add transitions based on the regular expression (0+1)0*1
    addTransition(q0, '0', q0);
    addTransition(q0, '1', q0);
    addTransition(q0, '0', q1);
    addTransition(q1, '1', q1);
    addTransition(q1, '0', q2);

    char input[50];
    printf("Enter string:");
    scanf("%s", input);
    if (simulateNFA(q0, input)) {
        printf("String accepted!\n");
    } else {
        printf("String not accepted!!!\n");
    }
    return 0;
}