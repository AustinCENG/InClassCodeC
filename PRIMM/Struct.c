#include <stdio.h> 
#include <string.h> 

struct Student { 
    char name[50];  // members. 
    int id; 
    double gpa; 
    int credits_earned; 
    char major[30]; 
}; 
struct Book{
    char title[100];
    char author[50];
    int year;
    double price; 
};
 

// Function to update student record via pointer 
void updateStudentRecord(struct Student *s, double newGpa, int newCredits) { 
    s->gpa = newGpa; // not s.gpa. 
    s->credits_earned += newCredits; 
} 

void updatePrice(struct Book *bookptr, float discount){
// do some caclulation and deference the struct pointer
}
 
int main() { 
    struct Student s1 = {"Alice Smith", 101, 3.5, 60, "Electrical Engineering"}; 
    struct Student s2[10]; // s2 is an array with 10 elements. each element is a struct Student 
    
    struct Book bookexample = {"C programming", "King", 1998, 34.9};

    printf("Original GPA: %.2f, Credits: %d\n", s1.gpa, s1.credits_earned); 
 
    // Passing the address of the struct 
    updateStudentRecord(&s1, 3.8, 15); // s1 is a regular variable, it is not an array. 
                                       // so you need to use &s1 to find the address to pass. 
 
    printf("Updated GPA: %.2f, Credits: %d\n", s1.gpa, s1.credits_earned); 
 
    return 0; 
} 