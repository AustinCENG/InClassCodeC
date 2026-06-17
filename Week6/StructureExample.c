#include <stdio.h>
#include <string.h>

// 1. Define the structure
struct Gamer {
    char username[50];
    int level;
    float hoursPlayed;
};

// No marks for this kind of declaration in your exam. 
// should NOT pass structure itself as a prameter, instead, use a pointer. 
void WrongWay(struct Gamer playerPtr) 
{

}


// 2. Function prototype that accepts a pointer to the structure
// Function to modify structure fields using the arrow (->) operator
void levelUp(struct Gamer *playerPtr) {
    if (playerPtr != NULL) {
        playerPtr->level += 1;          // Increments level directly in memory
        playerPtr->hoursPlayed += 2.5;  // Simulating time spent playing
    }
}

// Function to read structure fields using a pointer
void displayStats(const struct Gamer *playerPtr) {
    if (playerPtr != NULL) {
        // Using the -> operator to access members via a pointer
        printf("User:  %s\n", playerPtr->username);
        printf("Level: %d\n", playerPtr->level);
        printf("Time:  %.1f hours\n", playerPtr->hoursPlayed);
    }
}

int main() {
    // 3. Create an instance of the structure
    struct Gamer player1;
    struct Gamer *playerPtr;
    // playerPtr will be pointing to player1. 
    playerPtr = &player1;

    // Initialize the structure fields
    strcpy(playerPtr->username, "PixelKnight");
    playerPtr->level = 42;
    playerPtr->hoursPlayed = 120.5;

    printf("--- Initial Stats ---\n");
    displayStats(playerPtr); // Pass playerPtr, which is pointing to player1. 

    // 4. Pass the structure by pointer to modify its values
    levelUp(&player1); 

    printf("\n--- After Level Up ---\n");
    displayStats(&player1);

    return 0;
}
