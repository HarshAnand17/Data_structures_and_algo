#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 2
#define MAX_STATES 128

typedef struct {
    int next[ALPHABET_SIZE];
    int is_final;
} State;

State *dfa;
int num_states;
int get_representative(int state) {
    if (dfa[state].next[0] == dfa[state].next[1]) {
        return get_representative(dfa[state].next[0]);
    }
    return state;
}
int minimize_dfa() {
    int new_states = 0;
    State *new_dfa = calloc(num_states, sizeof(State));
    for (int i = 0; i < num_states; i++) {
        int rep = get_representative(i);
        if (new_states == rep) {
            continue;
        }
        new_states++;
        new_dfa[rep] = dfa[i];
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            int next = dfa[i].next[j];
            int new_next = get_representative(next);
            new_dfa[rep].next[j] = new_next;
        }
    }
    free(dfa);
    dfa = new_dfa;
    num_states = new_states;
    return num_states;
}
int read_dfa(FILE *input) {
    int i, j;
    char line[100];
    num_states = 0;
    fgets(line, sizeof(line), input);
    while (fgets(line, sizeof(line), input)) {
        int final = 0;
        if (line[strlen(line) - 1] == '\n') {
            line[strlen(line) - 1] = '\0';
        }
        if (strcmp(line, "*") == 0) {
            final = 1;
        }
        dfa = realloc(dfa, (num_states + 1) * sizeof(State));
        dfa[num_states].is_final = final;
        for (i = 0; i < ALPHABET_SIZE; i++) {
            fgets(line, sizeof(line), input);
            if (line[0] == '*') {
                dfa[num_states].next[i] = num_states;
            } else {
                sscanf(line, "%d", &j);
                dfa[num_states].next[i] = j;
            }
        }
        num_states++;
    }
    return num_states;
}

void write_dfa(FILE *output) {
    for (int i = 0; i < num_states; i++) {
        fprintf(output, "%d", dfa[i].is_final);
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            fprintf(output, " %d", dfa[i].next[j]);
        }
        fprintf(output, "\n");
    }
}
int main() {
    FILE *input = fopen("dfa.in", "r");
    FILE *output = fopen("dfa.out", "w");
    read_dfa(input);
    minimize_dfa();
    write_dfa(output);
    fclose(input);
    fclose(output);
    return 0;
}