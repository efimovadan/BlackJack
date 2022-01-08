#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int handValue = 0;

void printArray(int a[], int size);
int aceCheck(int aces);

int main(void) {
srand(time(NULL));


int deck[52];
int i;
for (i = 0; i < 52; i++) {
    deck[i] = i;
}

printArray(deck, 52);
int shufDeck[52] = {0};
int rnd, j = 0;

while (j < 52) {
    rnd = rand() % 52;
    if (shufDeck[rnd] == 0) {
        shufDeck[rnd] = deck[j];
        j++;
    }
}
    printArray(shufDeck, 52);
    return 0;
}
