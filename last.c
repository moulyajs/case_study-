#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for Student
typedef struct
{
    char studentID[20];
    char name[50];
    char address[100];
    char phoneNumber[15];
    char email[50];
    char dob[15];
} Student;

// Define structure for Course
typedef struct
{
    char courseID[20];
    char name[50];
    char instructor[50];
    char schedule[50];
    int credits;
} Course;

// Define structure for Enrollment
typedef struct
{
    char enrollmentID[20];
    char studentID[20];
    char courseID[20];
    char enrollmentDate[20];
} Enrollment;

// Define structure for Transaction
typedef struct
{
    char transactionID[20];
    char studentID[20];
    char transactionType[20];
    float transactionAmount;
    char transactionDate[20];
} Transaction;

// Function prototypes for Student module
void addStudent(Student students[], int *numStudents);
void updateStudent(Student students[], int numStudents);
void deleteStudent(Student students[], int *numStudents);
void displayStudents(Student students[], int numStudents);

// Function prototypes for Course module
void addCourse(Course courses[], int *numCourses);
void updateCourse(Course courses[], int numCourses);
void deleteCourse(Course courses[], int *numCourses);
void displayCourses(Course courses[], int numCourses);

// Function prototypes for Enrollment module
void enrollStudent(Enrollment enrollments[], int *numEnrollments);
void withdrawStudent(Enrollment enrollments[], int *numEnrollments);
void displayEnrollments(Enrollment enrollments[], int numEnrollments);

// Function prototypes for Transaction module
void addTransaction(Transaction transactions[], int *numTransactions);
void displayTransactions(Transaction transactions[], int numTransactions);

int main()
{
    // Initialize arrays to hold data
    Student students[100];
    Course courses[50];
    Enrollment enrollments[500];
    Transaction transactions[1000];

    int numStudents = 0;
    int numCourses = 0;
    int numEnrollments = 0;
    int numTransactions = 0;
    int choice, key;
    printf("       *** STUDENT RECORDS ***\n");
    printf("1.Student details\n2.Course details\n3.Enrollment details\n4.Transaction details\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("1.Add a student\n2.Update a student details\n3.Delete student details\n4.Display student details\n");
        printf("enter choice:");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            addStudent(students, &numStudents);

            break;
        case 2:
            updateStudent(students, numStudents);
        case 3:
            deleteStudent(students, &numStudents);
        case 4:
            displayStudents(students, numStudents);
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
                addCourse(courses, &numCourses);
                break;
            case 2:
                updateCourse(courses, numCourses);
                break;
            case 3:
                deleteCourse(courses, &numCourses);
                break;
            case 4:
                displayCourses(courses, numCourses);
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
            enrollStudent(enrollments, &numEnrollments);
            break;
        case 2:
            withdrawStudent(enrollments, &numEnrollments);
            break;
        case 3:
            displayEnrollments(enrollments, numEnrollments);
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
            addTransaction(transactions, &numTransactions);
            break;
        case 2:
            displayTransactions(transactions, numTransactions);
            break;
        }
        break;
    default:
        printf("Enter valid number\n");
        break;
    }

    // Your main program loop here, interacting with users to perform various actions

    return 0;
}
void addStudent(Student students[], int *numStudents)
{
    printf("Enter Student ID: ");
    scanf("%s", students[*numStudents].studentID);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[*numStudents].name);
    printf("Enter Address: ");
    scanf(" %[^\n]", students[*numStudents].address);
    printf("Enter Phone Number: ");
    scanf("%s", students[*numStudents].phoneNumber);
    printf("Enter Email: ");
    scanf("%s", students[*numStudents].email);
    printf("Enter Date of Birth: ");
    scanf("%s", students[*numStudents].dob);

    // Increment the number of students
    (*numStudents)++;

    printf("Student added successfully.\n");
}
void updateStudent(Student students[], int numStudents)
{

    char studentIDToUpdate[20];
    int found = 0;

    // Get student ID to update from user
    printf("Enter the Student ID to update: ");
    scanf("%s", studentIDToUpdate);

    // Search for the student by ID
    for (int i = 0; i < numStudents; i++)
    {
        if (strcmp(students[i].studentID, studentIDToUpdate) == 0)
        {
            found = 1;

            // Prompt user to update student details
            printf("Enter new Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter new Address: ");
            scanf(" %[^\n]", students[i].address);
            printf("Enter new Phone Number: ");
            scanf("%s", students[i].phoneNumber);
            printf("Enter new Email: ");
            scanf("%s", students[i].email);
            printf("Enter new Date of Birth: ");
            scanf("%s", students[i].dob);

            printf("Student with ID  updated successfully.\n");
            break;
        }
    }

    if (!found)
    {
        printf("Student with ID  not found.\n");
    }
}

// Main function with function call

// Function to delete a student
void deleteStudent(Student students[], int *numStudents)
{
    if (*numStudents == 0)
    {
        printf("No students to delete.\n");
        return;
    }

    char studentIDToDelete[20];
    int found = 0;

    // Get student ID to delete from user
    printf("Enter the Student ID to delete: ");
    scanf("%s", studentIDToDelete);

    // Search for the student by ID
    for (int i = 0; i < *numStudents; i++)
    {
        if (strcmp(students[i].studentID, studentIDToDelete) == 0)
        {
            // Shift elements to remove the student
            for (int j = i; j < *numStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }
            found = 1;
            (*numStudents)--;
            printf("Student with ID %s deleted successfully.\n", studentIDToDelete);
            break;
        }
    }

    if (!found)
    {
        printf("Student with ID %s not found.\n", studentIDToDelete);
    }
}
void displayStudents(Student students[], int numStudents)
{
    if (numStudents == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("Student ID\tName\t\tAddress\t\tPhone Number\t\tEmail\t\t\tDate of Birth\n");
    printf("--------------------------------------------------------------------------------\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n",
               students[i].studentID, students[i].name, students[i].address,
               students[i].phoneNumber, students[i].email, students[i].dob);
    }
}
void addCourse(Course courses[], int *numCourses)
{
    if (*numCourses >= 50)
    {
        printf("Cannot add more courses. Maximum limit reached.\n");
        return;
    }

    // Get course details from user
    printf("Enter Course ID: ");
    scanf("%s", courses[*numCourses].courseID);
    printf("Enter Course Name: ");
    scanf(" %[^\n]", courses[*numCourses].name);
    printf("Enter Instructor: ");
    scanf(" %[^\n]", courses[*numCourses].instructor);
    printf("Enter Schedule: ");
    scanf(" %[^\n]", courses[*numCourses].schedule);
    printf("Enter Credits: ");
    scanf("%d", &courses[*numCourses].credits);

    // Increment the number of courses
    (*numCourses)++;

    printf("Course added successfully.\n");
}
void updateCourse(Course courses[], int numCourses)
{
    if (numCourses == 0)
    {
        printf("No courses to update.\n");
        return;
    }

    char courseIDToUpdate[20];
    int found = 0;

    // Get course ID to update from user
    printf("Enter the Course ID to update: ");
    scanf("%s", courseIDToUpdate);

    // Search for the course by ID
    for (int i = 0; i < numCourses; i++)
    {
        if (strcmp(courses[i].courseID, courseIDToUpdate) == 0)
        {
            found = 1;

            // Prompt user to update course details
            printf("Enter new Course Name: ");
            scanf(" %[^\n]", courses[i].name);
            printf("Enter new Instructor: ");
            scanf(" %[^\n]", courses[i].instructor);
            printf("Enter new Schedule: ");
            scanf(" %[^\n]", courses[i].schedule);
            printf("Enter new Credits: ");
            scanf("%d", &courses[i].credits);

            printf("Course with ID %s updated successfully.\n", courseIDToUpdate);
            break;
        }
    }

    if (!found)
    {
        printf("Course with ID %s not found.\n", courseIDToUpdate);
    }
}
void deleteCourse(Course courses[], int *numCourses)
{
    if (*numCourses == 0)
    {
        printf("No courses to delete.\n");
        return;
    }
    char courseIDToDelete[20];
    int found = 0;
    printf("Enter the Course ID to delete: ");
    scanf("%s", courseIDToDelete);

    // Search for the course by ID
    for (int i = 0; i < *numCourses; i++)
    {
        if (strcmp(courses[i].courseID, courseIDToDelete) == 0)
        {
            // Shift elements to remove the course
            for (int j = i; j < *numCourses - 1; j++)
            {
                courses[j] = courses[j + 1];
            }
            found = 1;
            (*numCourses)--;
            printf("Course with ID %s deleted successfully.\n", courseIDToDelete);
            break;
        }
    }

    if (!found)
    {
        printf("Course with ID %s not found.\n", courseIDToDelete);
    }
}
void displayCourses(Course courses[], int numCourses)
{
    if (numCourses == 0)
    {
        printf("No courses to display.\n");
        return;
    }

    printf("Course ID\tName\t\tInstructor\tSchedule\tCredits\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < numCourses; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\n",
               courses[i].courseID, courses[i].name, courses[i].instructor,
               courses[i].schedule, courses[i].credits);
    }
}
void enrollStudent(Enrollment enrollments[], int *numEnrollments)
{
    if (*numEnrollments >= 500)
    {
        printf("Cannot enroll more students. Maximum limit reached.\n");
        return;
    }

    // Get enrollment details from user
    printf("Enter Enrollment ID: ");
    scanf("%s", enrollments[*numEnrollments].enrollmentID);
    printf("Enter Student ID: ");
    scanf("%s", enrollments[*numEnrollments].studentID);
    printf("Enter Course ID: ");
    scanf("%s", enrollments[*numEnrollments].courseID);
    printf("Enter Enrollment Date: ");
    scanf("%s", enrollments[*numEnrollments].enrollmentDate);

    // Increment the number of enrollments
    (*numEnrollments)++;

    printf("Student enrolled successfully.\n");
}
void withdrawStudent(Enrollment enrollments[], int *numEnrollments)
{
    if (*numEnrollments == 0)
    {
        printf("No enrollments to withdraw.\n");
        return;
    }

    char enrollmentIDToWithdraw[20];
    int found = 0;

    // Get enrollment ID to withdraw from user
    printf("Enter the Enrollment ID to withdraw: ");
    scanf("%s", enrollmentIDToWithdraw);

    // Search for the enrollment by ID
    for (int i = 0; i < *numEnrollments; i++)
    {
        if (strcmp(enrollments[i].enrollmentID, enrollmentIDToWithdraw) == 0)
        {
            // Shift elements to remove the enrollment
            for (int j = i; j < *numEnrollments - 1; j++)
            {
                enrollments[j] = enrollments[j + 1];
            }
            found = 1;
            (*numEnrollments)--;
            printf("Enrollment with ID %s withdrawn successfully.\n", enrollmentIDToWithdraw);
            break;
        }
    }

    if (!found)
    {
        printf("Enrollment with ID %s not found.\n", enrollmentIDToWithdraw);
    }
}
void displayEnrollments(Enrollment enrollments[], int numEnrollments)
{
    if (numEnrollments == 0)
    {
        printf("No enrollments to display.\n");
        return;
    }

    printf("Enrollment ID\tStudent ID\tCourse ID\tEnrollment Date\n");
    printf("--------------------------------------------------------------------\n");
    for (int i = 0; i < numEnrollments; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%s\n",
               enrollments[i].enrollmentID, enrollments[i].studentID, enrollments[i].courseID,
               enrollments[i].enrollmentDate);
    }
}

void addTransaction(Transaction transactions[], int *numTransactions)
{
    if (*numTransactions >= 1000)
    {
        printf("Cannot add more transactions. Maximum limit reached.\n");
        return;
    }

    // Get transaction details from user
    printf("Enter Transaction ID: ");
    scanf("%s", transactions[*numTransactions].transactionID);
    printf("Enter Student ID: ");
    scanf("%s", transactions[*numTransactions].studentID);
    printf("Enter Transaction Type: ");
    scanf("%s", transactions[*numTransactions].transactionType);
    printf("Enter Transaction Amount: ");
    scanf("%f", &transactions[*numTransactions].transactionAmount);
    printf("Enter Transaction Date: ");
    scanf("%s", transactions[*numTransactions].transactionDate);

    // Increment the number of transactions
    (*numTransactions)++;

    printf("Transaction added successfully.\n");
}
void displayTransactions(Transaction transactions[], int numTransactions)
{
    if (numTransactions == 0)
    {
        printf("No transactions to display.\n");
        return;
    }

    printf("Transaction ID\tStudent ID\tType\tAmount\tDate\n");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < numTransactions; i++)
    {
        printf("%s\t\t%s\t%s\t%.2f\t%s\n",
               transactions[i].transactionID, transactions[i].studentID,
               transactions[i].transactionType, transactions[i].transactionAmount,
               transactions[i].transactionDate);
    }
}