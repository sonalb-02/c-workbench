#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];   // date of joining
    float salary;
};

// a) Total number of employees
int totalEmployees(int n) {
    return n;
}

// b) Count male and female employees
void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0 || strcmp(emp[i].gender, "male") == 0)
            male++;
        else if(strcmp(emp[i].gender, "Female") == 0 || strcmp(emp[i].gender, "female") == 0)
            female++;
    }

    printf("Male Employees: %d\n", male);
    printf("Female Employees: %d\n", female);
}

// c) Employees with salary > 10000
void salaryAbove10k(struct Employee emp[], int n) {
    printf("\nEmployees with salary > 10000:\n");
    for(int i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s - %.2f\n", emp[i].name, emp[i].salary);
        }
    }
}

// d) Employees with designation "asst manager"
void asstManager(struct Employee emp[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");
    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "Asst Manager") == 0 || 
           strcmp(emp[i].designation, "asst manager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender: ");
        scanf("%s", emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nTotal Employees: %d\n", totalEmployees(n));

    countGender(emp, n);
    salaryAbove10k(emp, n);
    asstManager(emp, n);

    return 0;
}