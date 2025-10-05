#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("No notes required for amount %d.\n", amount);
        return 0;
    }

    // Array of denominations (ascending order)
    int notes[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};

    // Array to store count of each note (index corresponds to notes array)
    int counts[9] = {0};

    // Greedy algorithm: Start from largest denomination
    int remaining = amount;
    for (int i = 8; i >= 0; i--) {
        counts[i] = remaining / notes[i];
        remaining -= counts[i] * notes[i];
    }

    // Count how many types of notes are used (for proper printing)
    int used_count = 0;
    for (int i = 0; i < 9; i++) {
        if (counts[i] > 0) {
            used_count++;
        }
    }

    if (used_count == 0) {
        printf("No notes required.\n");
        return 0;
    }

    // Print the notes in descending order of denomination
    int current_pos = 0;
    for (int i = 8; i >= 0; i--) {
        if (counts[i] > 0) {
            current_pos++;

            // Add prefix if not the first item
            if (current_pos > 1) {
                if (current_pos == used_count) {
                    printf(" and ");
                } else {
                    printf(", ");
                }
            }

            // Print the note description
            if (counts[i] == 1) {
                if (notes[i] == 1) {
                    printf("1 note of 1 Rupee");
                } else {
                    printf("1 note of %d Rs.", notes[i]);
                }
            } else {
                printf("%d notes of %d Rs.", counts[i], notes[i]);
            }
        }
    }

    printf(".\n");

    return 0;
}
