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
    char student_id;
    int course_id;
    char enrollment_date[11]; // Assuming date format: YYYY-MM-DD
} Enrollment;

typedef struct
{
    char id[50];
    char student_id[50];
    char type[20]; // Payment or Fee
    float amount;
    char transaction_date[11]; // Assuming date format: YYYY-MM-DD
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
    /*
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
        */
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
    scanf("%s", new_student.student_id);
    printf("Enter Name: ");
    scanf(" %s", new_student.name);
    printf("Enter Address: ");
    scanf(" %s", new_student.address);
    printf("Enter Phone number: ");
    scanf(" %s", new_student.phone);
    printf("Enter Email ID: ");
    scanf(" %s", new_student.email);
    printf("Enter Date of Birth: ");
    scanf(" %s", new_student.dob);
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
/*
void addCourse()
{

    printf("Enter Course ID: ");
    scanf("%s", course_id);
    printf("Enter Course Name: ");
    scanf("%s", course_name);
    printf("Enter Instructor: ");
    scanf("%s", instructor);
    printf("Enter Schedule: ");
    scanf("%s", schedule);
    printf("Enter Creadits: ");
    scanf("%s", creadits);
    printf("Course details added successfully\n");
}
void updateCourse()
{

    char course[100];
    int i;
    printf("Enter Course ID: ");
    scanf("%s", course);
    for (i = 0; i < 100; i++)
    {

        if (course[i] == course_id[i])
        {
            printf("update Course Name: ");
            scanf(" %s", course_name);
            printf("update Instructor: ");
            scanf(" %s", instructor);
            printf("update Schedule: ");
            scanf(" %s", schedule);
            printf("update Creadits: ");
            scanf(" %s", creadits);
            printf("Course details updated successfully\n");
            break;
        }
        else
        {
            printf("Course not found\n");
            break;
        }
        break;
    }
}
void deleteCourse()
{

    char id[100];
    int i;
    printf("enter course id:");
    scanf("%s", id);
    {
        for (i = 0; i < 100; i++)
        {
            if (id[i] == course_id[i])
            {
                course_id[i] = '\0';
                course_name[i] = '\0';
                instructor[i] = '\0';
                schedule[i] = '\0';
                creadits[i] = '\0';
                printf("Course details deleted successfully\n");
                break;
            }
            else
            {
                printf("course not found\n");
                break;
            }
            break;
        }
    }
}
void displayCourse()
{

    char cour[100];
    int i;
    printf("enter course id:");
    scanf("%s", cour);
    for (i = 0; i < 100; i++)
    {
        if (cour[i] == course_id[i])
        {
            printf("____course id_____course name_____instructor_____schedule_____credits____\n");
            printf("%s\t        %s\t       %s\t      %s\t      %s\n", course_id, course_name, instructor, schedule, creadits);
            break;
        }
        else
        {
            printf("course not found\n");
            break;
        }
        break;
    }
}
void enrollStudent()
{

    printf("Enter Enrollment ID: ");
    scanf("%s", enroll_id);
    printf("Enter Student ID: ");
    scanf("%s", student_id);
    printf("Enter Course ID: ");
    scanf("%s", course_id);
    printf("Enter Enrollment Date: ");
    scanf("%s", enrollment_date);
    printf("Enrollment details added successfully\n");
}
void withdrawStudent()
{

    printf("enter enrollment id:");
    char enroll[100];
    int i;
    scanf("%s", enroll);
    for (i = 0; i < 100; i++)
    {
        if (enroll[i] == enroll_id[i])

        {
            enroll_id[i] = '\0';
            student_id[i] = '\0';
            course_id[i] = '\0';
            enrollment_date[i] = '\0';
            printf("Enrollment details deleted successfully\n");
            break;
        }
        else
        {
            printf("Enrollment id not found\n");
            break;
        }
        break;
    }
}
void displayEnrollments()
{
    char enroll_disp[100];
    int i;
    printf("enter enrollment id:");
    scanf("%s", enroll_disp);
    for (i = 0; i < 100; i++)
    {
        if (enroll_disp[i] == enroll_id[i])
        {

            printf("____enrollment id____student id_____course id_____enrollment date_____\n");
            printf("%s\t\t%s\t\t%s\t\t%s\t\t    %s\n", enroll_id, student_id, course_id, enrollment_date);
            break;
        }
        else
        {
            printf("enrollment id not found\n");
            break;
        }
        break;
    }
}
void addTransaction()
{

    printf("Enter Transaction ID: ");
    scanf("%s", transaction_id);
    printf("Enter Student ID: ");
    scanf("%s", student_id);
    printf("Enter Transaction Type: ");
    scanf("%s", transaction_type);
    printf("Enter Transaction Amount: ");
    scanf("%s", amount);
    printf("Enter Transaction Date: ");
    scanf("%s", transaction_date);
    printf("Transaction details added successfully\n");
}
void displayTransactions()
{
    char tree[100];
    int i;
    printf("enter transaction id\n");
    scanf("%s", tree);
    for (i = 0; i < 100; i++)
    {
        if (tree[i] == transaction_id[i])

        {
            printf("____transaction id_____student id_____transaction type_____transaction date_____amount____\n");
            printf("%s\t\t  %s\t\t  %s\t\t  %s\t\t  %s\n", transaction_id, student_id, transaction_type, transaction_date, amount);
            break;
        }
        else
        {
            printf("transaction id not found\n");
            break;
        }
        break;
    }
}
*/
void exit_program()
{
    main();
}
