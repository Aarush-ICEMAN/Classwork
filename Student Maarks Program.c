#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects
};

// Function to calculate total marks for a student
float calculateTotalMarks(struct Student student) {
    float totalMarks = 0;
    int i;
    for (i = 0; i < 5; ++i) {
        totalMarks += student.marks[i];
    }
    return totalMarks;
}

int main() {
    // Declare an array of structures to store information for multiple students
    struct Student students[3]; // Assuming 3 students

    // Input information for each student
    int i;
    for ( i = 0; i < 3; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        int j;
        for ( j = 0; j < 5; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        printf("\n");
    }

    // Display total marks for each student
    printf("Total Marks for Each Student:\n");
    for (i = 0; i < 3; ++i) {
        float totalMarks = calculateTotalMarks(students[i]);
        printf("Student %d (%s), Roll Number %d: Total Marks = %.2f\n", i + 1, students[i].name, students[i].rollNumber, totalMarks);
    }

    return 0;
}

