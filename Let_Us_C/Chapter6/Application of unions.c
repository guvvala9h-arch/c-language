#include <stdio.h>
#include <string.h>

// Union definition
union Identity {
    int roll_no;
    int emp_id;
    int visitor_id;
};

// Structure using union
struct Person {
    char name[50];
    int type; // 1 = Student, 2 = Employee, 3 = Guest
    union Identity id;
};

int main() {
    struct Person p;

    // Input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select type (1-Student, 2-Employee, 3-Guest): ");
    scanf("%d", &p.type);

    if (p.type == 1) {
        printf("Enter Roll Number: ");
        scanf("%d", &p.id.roll_no);
    } else if (p.type == 2) {
        printf("Enter Employee ID: ");
        scanf("%d", &p.id.emp_id);
    } else if (p.type == 3) {
        printf("Enter Visitor ID: ");
        scanf("%d", &p.id.visitor_id);
    } else {
        printf("Invalid type!");
        return 0;
    }

    // Output
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);

    if (p.type == 1) {
        printf("Type: Student\n");
        printf("Roll No: %d\n", p.id.roll_no);
    } else if (p.type == 2) {
        printf("Type: Employee\n");
        printf("Employee ID: %d\n", p.id.emp_id);
    } else {
        printf("Type: Guest\n");
        printf("Visitor ID: %d\n", p.id.visitor_id);
    }

    return 0;
}
