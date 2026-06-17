#include <stdio.h> 
#include <string.h> 
 
struct Student { 
    char name[50]; 
    int id; 
    double gpa; 
    int credits_earned; 
    char major[30]; 
}; 
 
// Function to update student record via pointer 
void updateStudentRecord(struct Student *s, double newGpa, int newCredits) { 
    s->gpa = newGpa; 
    s->credits_earned += newCredits; 
} 
 
int main() { 
    struct Student s1 = {"Alice Smith", 101, 3.5, 60, "Electrical Engineering"}; 
 
    printf("Original GPA: %.2f, Credits: %d\n", s1.gpa, s1.credits_earned); 
 
    // Passing the address of the struct 
    updateStudentRecord(&s1, 3.8, 15); 
 
    printf("Updated GPA: %.2f, Credits: %d\n", s1.gpa, s1.credits_earned); 
 
    return 0; 
} 