/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int studentID;
    char name[50];
    char address[100];
    char phoneNumber[15];
    char email[50];
    char dob[15];
} Student;

typedef struct
{
    int courseID;
    char name[50];
    char instructor[50];
    char schedule[50];
    int credits;
} Course;

typedef struct
{
    int enrollmentID;
    int studentID;
    int courseID;
    char enrollmentDate[20];
} Enrollment;

typedef struct
{
    int transactionID;
    int studentID;
    char transactionType[20];
    float transactionAmount;
    char transactionDate[20];
} Transaction;

void add_student(Student students[], int *numStudents);
void update_student(Student students[], int numStudents);
void delete_student(Student students[], int *numStudents);
void display_student(Student students[], int numStudents);
void add_course(Course courses[], int *numCourses);
void update_course(Course courses[], int numCourses);
void delete_course(Course courses[], int *numCourses);
void display_course(Course courses[], int numCourses);
void enroll_student(Enrollment enrollments[], int *numEnrollments);
void withdraw_student(Enrollment enrollments[], int *numEnrollments);
void display_enrollments(Enrollment enrollments[], int numEnrollments);
void add_transaction(Transaction transactions[], int *numTransactions);
void display_transaction(Transaction transactions[], int numTransactions);
// MAIN FUNCTION
int main()
{
    int choice, key;
    printf("       *** STUDENT RECORDS ***\n");
    printf("1.Student details\n2.Course details\n3.Enrollment details\n4.Transaction details\n");

    printf("Enter choice: ");
    scanf("%d", &choice);
    Student students[100];          // Assuming maximum 100 students
    Course courses[50];             // Assuming maximum 50 courses
    Enrollment enrollments[500];    // Assuming maximum 500 enrollments
    Transaction transactions[1000]; // Assuming maximum 1000 transactions

    int numStudents = 0;
    int numCourses = 0;
    int numEnrollments = 0;
    int numTransactions = 0;

    switch (choice)
    {
    case 1:
        printf("1.Add a student\n2.Update a student details\n3.Delete student details\n4.Display student details\n");
        printf("enter choice:");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            add_student(students, &numStudents);

            break;
        case 2:
            update_student(students, numStudents);
        case 3:
            delete_student(students, &numStudents);
        case 4:
            display_student(students, numStudents);
        }
        break;
    case 2:
        printf("a.Add a course\nb.Update a course\nc.Delete a course details\nd.Display course details\n");
        {
            int b;
            printf("Enter choice:");
            scanf("%d", &b);
            switch (b)
            {
            case 1:
                add_course(courses, &numCourses);
                break;
            case 2:
                update_course(courses, numCourses);
                break;
            case 3:
                delete_course(courses, &numCourses);
                break;
            case 4:
                display_course(courses, numCourses);
            }
        }
        break;
    case 3:
        printf("1.Enroll a student\n2.Withdraw a student\n3.Display the enrollments\n");
        printf("Enter choice:");
        int e;
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            enroll_student(enrollments, &numEnrollments);
            break;
        case 2:
            withdraw_student(enrollments, &numEnrollments);
            break;
        case 3:
            display_enrollments(enrollments, numEnrollments);
        }
        break;
    case 4:
        printf("1.Add transaction\n2.Display transactions\n");
        printf("Enter choice:");
        int f;
        scanf("%d", &f);
        switch (f)
        {
        case 1:
            add_transaction(transactions, &numTransactions);
            break;
        case 2:
            display_transaction(transactions, numTransactions);
            break;
        }
        break;
    default:
        printf("Enter valid number\n");
        break;
    }
}

void add_student(Student students[], int *numStudents)
{

    Student newStudent;
    printf("Enter your student id:");
    scanf("%s", newStudent.studentID);
    printf("Enter your name:");
    scanf("%s", newStudent.name);
    printf("Enter your address:");
    scanf("%s", newStudent.address);
    printf("Enter your phone number:");
    scanf("%s", newStudent.phoneNumber);
    printf("Enter your email:");
    scanf("%s", newStudent.email);
    printf("Enter your date of birth:");
    scanf("%s", newStudent.dob);
    students[*numStudents] = newStudent;

    (*numStudents)++;

    printf("Student details added successfully");
}

void update_student(Student students[], int numStudents)
{
    int studentIDToUpdate;
    int found = 0;

    printf("Enter the Student ID to update: ");
    scanf("%d", &studentIDToUpdate);
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].studentID == studentIDToUpdate)
        {
            found = 1;

            printf("update your name:");
            scanf("%s", students[i].name);
            printf("update your address:");
            scanf("%s", students[i].address);
            printf("update your phone number:");
            scanf("%s", students[i].phoneNumber);
            printf("update your email:");
            scanf("%s", students[i].email);
            printf("update your date of birth:");
            scanf("%s", students[i].dob);
            break;
        }
    }
    if (!found)
    {
        printf("Student not found\n");
    }
}
void delete_student(Student students[], int *numStudents)

{
    int studentIDToDelete;
    int found = 0;

    printf("Enter the Student ID to delete: ");
    scanf("%d", &studentIDToDelete);

    // Search for the student by ID
    for (int i = 0; i < *numStudents; i++)
    {
        if (students[i].studentID == studentIDToDelete)
        {
            // Shift elements to remove the student
            for (int j = i; j < *numStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }
            found = 1;
            (*numStudents)--;
            printf("Student with ID %d deleted successfully.\n", studentIDToDelete);
            break;
        }
    }

    if (!found)
    {
        printf("Student with ID %d not found.\n", studentIDToDelete);
    }
}
void display_student(Student students[], int numStudents)
{
    if (numStudents == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("Student ID\tName\t\tAddress\t\t\tPhone Number\t\tEmail\t\t\tDate of Birth\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n",
               students[i].studentID, students[i].name, students[i].address,
               students[i].phoneNumber, students[i].email, students[i].dob);
    }
}

void add_course(Course courses[], int *numCourses)
{
    Course newCourse;
    printf("Enter your course id:");
    scanf("%s", newCourse.courseID);
    printf("Enter course name:");
    scanf("%s", newCourse.name);
    printf("Enter instructor:");
    scanf("%s", newCourse.instructor);
    printf("Enter schedule:");
    scanf("%s", newCourse.schedule);
    printf("Enter credits:");
    scanf("%s", newCourse.credits);
    courses[*numCourses] = newCourse;

    (*numCourses)++;

    printf("Course added successfully.\n");
}
void update_course(Course courses[], int numCourses)
{
    int courseIDToUpdate;
    int found = 0;

    printf("Enter the Course ID to update: ");
    scanf("%d", &courseIDToUpdate);

    // Search for the course by ID
    for (int i = 0; i < numCourses; i++)
    {
        if (courses[i].courseID == courseIDToUpdate)
        {
            found = 1;

            printf("update course name:");
            scanf("%s", courses[i].name);
            printf("update instructor:");
            scanf("%s", courses[i].instructor);
            printf("update schedule:");
            scanf("%s", courses[i].schedule);
            printf("update credits:");
            scanf("%s", courses[i].credits);
            printf("Course with ID %d updated successfully.\n", courseIDToUpdate);
            break;
        }
    }

    if (!found)
    {
        printf("Course with ID %d not found.\n", courseIDToUpdate);
    }
}
void delete_course(Course courses[], int *numCourses)
{
    int courseIDToDelete;
    int found = 0;

    printf("Enter the Course ID to delete: ");
    scanf("%d", &courseIDToDelete);

    // Search for the course by ID
    for (int i = 0; i < *numCourses; i++)
    {
        if (courses[i].courseID == courseIDToDelete)
        {
            // Shift elements to remove the course
            for (int j = i; j < *numCourses - 1; j++)
            {
                courses[j] = courses[j + 1];
            }
            found = 1;
            (*numCourses)--;
            printf("Course with ID %d deleted successfully.\n", courseIDToDelete);
            break;
        }
    }

    if (!found)
    {
        printf("Course with ID %d not found.\n", courseIDToDelete);
    }
}
void display_course(Course courses[], int numCourses)
{
    if (numCourses == 0)
    {
        printf("No courses to display.\n");
        return;
    }

    printf("Course ID\tCourse Name\t\tInstructor\t\tSchedule\t\tCredits\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < numCourses; i++)
    {
        printf("%d\t\t%s\t\t\t%s\t\t%s\t\t%d\n",
               courses[i].courseID, courses[i].name, courses[i].instructor,
               courses[i].schedule, courses[i].credits);
    }
}
void enroll_student(Enrollment enrollments[], int *numEnrollments)
{
    Enrollment newEnrollment;
    printf("Enter student id:");
    scanf("%s", newEnrollment.studentID);
    printf("Enter course id:");
    scanf("%s", newEnrollment.courseID);
    printf("Enter enrollment id:");
    scanf("%s", newEnrollment.enrollmentID);
    printf("Enter enrollment date:");
    scanf("%s", newEnrollment.enrollmentDate);
    enrollments[*numEnrollments] = newEnrollment;

    (*numEnrollments)++;

    printf("Student enrolled successfully.\n");
}
void withdraw_student(Enrollment enrollments[], int *numEnrollments)
{
    if (*numEnrollments == 0)
    {
        printf("No enrollments to withdraw.\n");
        return;
    }

    int studentIDToWithdraw;
    int courseIDToWithdraw;
    int found = 0;

    printf("Enter the Student ID to withdraw: ");
    scanf("%d", &studentIDToWithdraw);
    printf("Enter the Course ID to withdraw: ");
    scanf("%d", &courseIDToWithdraw);

    // Search for the enrollment to withdraw
    for (int i = 0; i < *numEnrollments; i++)
    {
        if (enrollments[i].studentID == studentIDToWithdraw && enrollments[i].courseID == courseIDToWithdraw)
        {
            // Shift elements to remove the enrollment
            for (int j = i; j < *numEnrollments - 1; j++)
            {
                enrollments[j] = enrollments[j + 1];
            }
            found = 1;
            (*numEnrollments)--;
            printf("Student with ID %d withdrawn from Course ID %d successfully.\n", studentIDToWithdraw, courseIDToWithdraw);
            break;
        }
    }

    if (!found)
    {
        printf("Enrollment not found for Student ID %d and Course ID %d.\n", studentIDToWithdraw, courseIDToWithdraw);
    }
}
void display_enrollments(Enrollment enrollments[], int numEnrollments)
{
    if (numEnrollments == 0)
    {
        printf("No enrollments to display.\n");
        return;
    }

    printf("Enrollment ID\tStudent ID\tCourse ID\tEnrollment Date\n");
    printf("----------------------------------------------------------------\n");
    for (int i = 0; i < numEnrollments; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%s\n",
               enrollments[i].enrollmentID, enrollments[i].studentID, enrollments[i].courseID,
               enrollments[i].enrollmentDate);
    }
}
void add_transaction(Transaction transactions[], int *numTransactions)
{
    Transaction newTransaction;
    printf("Enter transaction id:");
    scanf("%s", newTransaction.transactionID);
    printf("Enter student id:");
    scanf("%s", newTransaction.studentID);
    printf("Enter transaction type:");
    scanf("%s", newTransaction.transactionType);
    printf("Enter transaction date:");
    scanf("%s", newTransaction.transactionDate);
    printf("Enter transaction amount:");
    scanf("%s", newTransaction.transactionAmount);
    transactions[*numTransactions] = newTransaction;

    (*numTransactions)++;

    printf("Transaction added successfully.\n");
}
void display_transaction(Transaction transactions[], int numTransactions)

{
    if (numTransactions == 0)
    {
        printf("No transactions to display.\n");
        return;
    }

    printf("Transaction ID\tStudent ID\tTransaction Type\tTransaction Amount\tTransaction Date\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < numTransactions; i++)
    {
        printf("%d\t\t%d\t\t%s\t\t%.2f\t\t\t%s\n",
               transactions[i].transactionID, transactions[i].studentID, transactions[i].transactionType,
               transactions[i].transactionAmount, transactions[i].transactionDate);
    }
}
*/