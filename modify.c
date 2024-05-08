#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void addStudent();
void updateStudent();
void deleteStudent();
void displayStudents();
void addCourse();
void updateCourse();
void deleteCourse();
void displayCourse();
void enrollStudent();
void withdrawStudent();
void displayEnrollments();
void addTransaction();
void displayTransactions();
void exit_program();
typedef struct
{
    char student_id[50];
    char name[50];
    char address[100];
    char phone[15];
    char email[50];
    char dob[11]; // Assuming date of birth format: YYYY-MM-DD
} Student;

typedef struct
{
    char course_id[50];
    char name[50];
    char instructor[50];
    char schedule[50];
    int credits;
} Course;

typedef struct
{
    char enrollment_id[50];
    char student_id[50];
    char course_id[50];
    char enrollment_date[20]; // Assuming date format: YYYY-MM-DD
} Enrollment;

typedef struct
{
    char transaction_id[50];
    char student_id[50];
    char type[20];
    float amount;
    char transaction_date[11];
} Transaction;
int student_count = 0;
int course_count = 0;
int enrollment_count = 0;
int transaction_count = 0;
Student students[100];
Course courses[50];
Enrollment enrollments[100];
Transaction transactions[100];
int main()
{
    int choice, key;
    printf("       *** STUDENT RECORDS ***\n");
    printf("1.Student details\n2.Course details\n3.Enrollment details\n4.Transaction details\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("1.Add a student\n2.Update a student details\n3.Delete student details\n4.Display student details\n5.exit\n");
        printf("enter choice:");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            addStudent();
            exit_program();

            break;
        case 2:
            updateStudent();
            exit_program();
            break;
        case 3:
            deleteStudent();
            exit_program();
            break;
        case 4:
            displayStudents();
            exit_program();
            break;
        case 5:
            exit_program();
            exit_program();
            break;
        }
        break;

    case 2:
        printf("1.Add a course\n2.Update a course\n3.Delete a course details\n4.Display course details\n5.exit\n");
        {
            int b;
            printf("Enter choice:");
            scanf("%d", &b);
            switch (b)
            {
            case 1:
                addCourse();
                exit_program();
                break;
            case 2:
                updateCourse();
                exit_program();
                break;
            case 3:
                deleteCourse();
                exit_program();
                break;
            case 4:
                displayCourse();
                exit_program();
                break;
            case 5:
                exit_program();
                break;
            }
        }
        break;
    case 3:
        printf("1.Enroll a student\n2.Withdraw a student\n3.Display the enrollments\n4.exit\n");
        printf("Enter choice:");
        int e;
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            enrollStudent();
            exit_program();
            break;
        case 2:
            withdrawStudent();
            exit_program();
            break;
        case 3:
            displayEnrollments();
            exit_program();
            break;
        case 4:
            exit_program();

            break;
        }
        break;
    case 4:
        printf("1.Add transaction\n2.Display transactions\n3.exit\n");
        printf("Enter choice:");
        int f;
        scanf("%d", &f);
        switch (f)
        {
        case 1:
            addTransaction();
            exit_program();
            break;
        case 2:
            displayTransactions();
            exit_program();
            break;
        case 3:
            exit_program();

            break;
        }
        break;

    default:
        printf("Enter valid number\n");
        exit_program();
        break;
    }

    return 0;
}

void addStudent()
{
    Student new_student;
    printf("Enter Student ID: ");
    scanf("%[^\n]s", new_student.student_id);
    printf("Enter Name: ");
    scanf("%[^\n]s", new_student.name);
    printf("Enter Address: ");
    scanf("%[^\n]s", new_student.address);
    printf("Enter Phone number: ");
    scanf("%[^\n]s", new_student.phone);
    printf("Enter Email ID: ");
    scanf("%[^\n]s", new_student.email);
    printf("Enter Date of Birth: ");
    scanf("%[^\n]s", new_student.dob);
    students[student_count++] = new_student;
    printf("Student details added successfully\n");
}

void updateStudent()
{

    char student[100];

    printf("Enter Student ID: ");

    scanf("%s", student);
    {
        for (int i = 0; i < student_count; i++)
        {
            if (strcmp(students[i].student_id, student) == 0)
            {
                printf("update Name: ");
                scanf(" %s", students[i].name);
                printf("update Address: ");
                scanf(" %s", students[i].address);
                printf("update Phone number: ");
                scanf(" %s", students[i].phone);
                printf("update Email ID: ");
                scanf(" %s", students[i].email);
                printf("update Date of Birth: ");
                scanf(" %s", students[i].dob);
                printf("Student details updated successfully\n");
                break;
            }
        }
        printf("student not found\n");
    }
}

void deleteStudent()
{
    char stu[100];
    int i;
    _Bool found = false;
    int delete;

    printf("Enter student id: ");
    scanf("%s", stu);

    for (i = 0; i < student_count; i++)
    {
        if (strcmp(students[i].student_id, stu) == 0)
        {
            found = true;
            delete = i;
            break;
        }
    }

    if (found)
    {
        for (i = delete; i < student_count - 1; i++)
        {
            students[i] = students[i + 1];
        }

        student_count--;

        printf("Student deleted successfully.\n");
    }
    else
    {
        printf("Student ID not found.\n");
    }
}
void displayStudents()
{

    if (student_count == 0)
    {
        printf("No students found.\n");
    }
    else
    {
        printf("____student id______name_______address_______phone number______email_id_____date of birth_____\n");
        for (int i = 0; i < student_count; i++)
        {

            printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", students[i].student_id, students[i].name, students[i].address, students[i].phone, students[i].email, students[i].dob);
        }
    }
}

void addCourse()
{
    Course new_course;
    printf("Enter course ID: ");
    scanf("%s", new_course.course_id);
    printf("Enter Name: ");
    scanf(" %s", new_course.name);
    printf("Enter instructor: ");
    scanf(" %s", new_course.instructor);
    printf("Enter schedule: ");
    scanf(" %s", new_course.schedule);
    printf("Enter credits: ");
    scanf(" %d", new_course.credits);
    courses[course_count++] = new_course;
    printf("Course details added successfully\n");
}

void updateCourse()
{

    char cou[100];

    printf("Enter course ID: ");

    scanf("%s", cou);
    {
        for (int i = 0; i < course_count; i++)
        {
            if (strcmp(courses[i].course_id, cou) == 0)
            {
                printf("update Name: ");
                scanf(" %s", courses[i].name);
                printf("update instructor: ");
                scanf(" %s", courses[i].instructor);
                printf("update schedule: ");
                scanf(" %s", courses[i].schedule);
                printf("update credits: ");
                scanf(" %d", courses[i].credits);

                printf("course details updated successfully\n");
                break;
            }
        }
        printf("course not found\n");
    }
}
void deleteCourse()
{
    char cour[100];
    int i;
    _Bool found = false;
    int delete;

    printf("Enter course id: ");
    scanf("%s", cour);

    for (i = 0; i < course_count; i++)
    {
        if (strcmp(courses[i].course_id, cour) == 0)
        {
            found = true;
            delete = i;
            break;
        }
    }

    if (found)
    {
        for (i = delete; i < course_count - 1; i++)
        {
            courses[i] = courses[i + 1];
        }

        course_count--;

        printf("course deleted successfully.\n");
    }
    else
    {
        printf("course ID not found.\n");
    }
}
void displayCourse()
{

    if (course_count == 0)
    {
        printf("courses not found.\n");
    }
    else
    {
        printf("____course id______name_______instructor_______schedule______credits_____\n");
        for (int i = 0; i < student_count; i++)
        {

            printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\n", courses[i].course_id, courses[i].name, courses[i].instructor, courses[i].schedule, courses[i].credits);
        }
    }
}
void enrollStudent()
{
    Enrollment new_enroll;
    printf("Enter enrollment ID: ");
    scanf("%s", new_enroll.enrollment_id);
    printf("Enter student id: ");
    scanf(" %s", new_enroll.student_id);
    printf("Enter course id: ");
    scanf(" %s", new_enroll.course_id);
    printf("Enter enrollment date: ");
    scanf(" %s", new_enroll.enrollment_date);
    enrollments[enrollment_count++] = new_enroll;
    printf("enrollment details added successfully\n");
}
void withdrawStudent()
{
    char with[100];
    int i;
    _Bool found = false;
    int delete;

    printf("Enter enrollment id: ");
    scanf("%s", with);

    for (i = 0; i < enrollment_count; i++)
    {
        if (strcmp(enrollments[i].enrollment_id, with) == 0)
        {
            found = true;
            delete = i;
            break;
        }
    }

    if (found)
    {
        for (i = delete; i < enrollment_count - 1; i++)
        {
            enrollments[i] = enrollments[i + 1];
        }

        enrollment_count--;

        printf("Student enrollment details withdrawn successfully.\n");
    }
    else
    {
        printf("Student ID not found.\n");
    }
}
void displayEnrollments()
{

    if (enrollment_count == 0)
    {
        printf("No enrollments found.\n");
    }
    else
    {
        printf("____enrollment id______student id_______course id_______enrollment date______\n");
        for (int i = 0; i < enrollment_count; i++)
        {

            printf("%s\t\t%s\t\t%s\t\t%s\n", enrollments[i].enrollment_id, enrollments[i].student_id, enrollments[i].course_id, enrollments[i].enrollment_date);
        }
    }
}
void addTransaction()
{
    Transaction new_transaction;
    printf("Enter Student ID: ");
    scanf("%s", new_transaction.transaction_id);
    printf("Enter Name: ");
    scanf(" %s", new_transaction.student_id);
    printf("Enter Address: ");
    scanf(" %s", new_transaction.type);
    printf("Enter Phone number: ");
    scanf(" %.2f", new_transaction.amount);
    printf("Enter Email ID: ");
    scanf(" %s", new_transaction.transaction_date);
    transactions[transaction_count++] = new_transaction;
    printf("transaction details added successfully\n");
}
void displayTransactions()
{

    if (transaction_count == 0)
    {
        printf("No transactions found.\n");
    }
    else
    {
        printf("____transaction id______student id_______transaction type_______transaction amount______transaction date\n");
        for (int i = 0; i < transaction_count; i++)
        {

            printf("%s\t\t%s\t\t%s\t\t%.2f\t\t%s\n", transactions[i].transaction_id, transactions[i].student_id, transactions[i].type, transactions[i].amount, transactions[i].transaction_date);
        }
    }
}
void exit_program()
{
    main();
}