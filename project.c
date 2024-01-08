#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define FILENAME "students.txt"

struct Student {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    float marks;
};

void inputStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);

    if (strlen(student->name) > 0 && student->name[strlen(student->name) - 1] == '\n') {
        student->name[strlen(student->name) - 1] = '\0';
    }

    printf("Enter student roll number: ");
    if (scanf("%d", &student->rollNumber) != 1) {
        fprintf(stderr, "Invalid input for roll number. Exiting.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter student marks: ");
    if (scanf("%f", &student->marks) != 1) {
        fprintf(stderr, "Invalid input for marks. Exiting.\n");
        exit(EXIT_FAILURE);
    }

    getchar(); // Consume the newline character in the input buffer
}

void saveStudentDetails(const struct Student *students, int count) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; ++i) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file);
}

void displayAllStudents(const struct Student *students, int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; ++i) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        printf("\nStudent Information System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Save to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid input for menu choice. Exiting.\n");
            exit(EXIT_FAILURE);
        }
        getchar(); // Consume the newline character in the input buffer

        switch (choice) {
            case 1:
                if (studentCount < MAX_STUDENTS) {
                    inputStudentDetails(&students[studentCount]);
                    studentCount++;
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                displayAllStudents(students, studentCount);
                break;
            case 3:
                saveStudentDetails(students, studentCount);
                printf("Student details saved to file.\n");
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
