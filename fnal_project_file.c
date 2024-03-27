#include <stdio.h>
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
char student_id[100], name[100], address[100], phone_number[100], email_id[100], dob[50];
char course_id[100], course_name[100], instructor[100], schedule[100];
char creadits[10];
char enroll_id[100], student_id[100], course_id[100], enrollment_date[100];
char transaction_id[100], student_id[100], transaction_type[100], transaction_date[100], amount[100];
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

    printf("Enter Student ID: ");
    scanf("%s", student_id);
    printf("Enter Name: ");
    scanf(" %s", name);
    printf("Enter Address: ");
    scanf(" %s", address);
    printf("Enter Phone number: ");
    scanf(" %s", phone_number);
    printf("Enter Email ID: ");
    scanf(" %s", email_id);
    printf("Enter Date of Birth: ");
    scanf(" %s", dob);
    printf("Student details added successfully\n");
}
void updateStudent()
{

    char student[100];
    int i;

    printf("Enter Student ID: ");

    scanf("%s", student);
    {
        for (i = 0; i < 100; i++)
        {
            if (student[i] == student_id[i])
            {
                printf("update Name: ");
                scanf(" %s", name);
                printf("update Address: ");
                scanf(" %s", address);
                printf("update Phone number: ");
                scanf(" %s", phone_number);
                printf("update Email ID: ");
                scanf(" %s", email_id);
                printf("update Date of Birth: ");
                scanf(" %s", dob);
                printf("Student details updated successfully\n");
                break;
            }
            else
            {
                printf("Student not found\n");
                break;
            }
            break;
        }
    }
}
void deleteStudent()
{

    char stu[100];
    int i;

    printf("enter student id:\n");
    scanf("%s", stu);
    {
        for (i = 0; i < 100; i++)
        {
            if (stu[i] == student_id[i])
            {
                student_id[i] = '\0';
                name[i] = '\0';
                address[i] = '\0';
                phone_number[i] = '\0';
                email_id[i] = '\0';
                dob[i] = '\0';
                printf("Student details deleted successfully\n");
                break;
            }
            else
            {
                printf("Student not found\n");
                break;
            }
            break;
        }
    }

    printf("%s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\n", student_id, name, address, phone_number, email_id, dob);
}
void displayStudents()
{
    char display[100];
    int i;
    printf("enter student id:");
    scanf("%s", display);
    {
        for (i = 0; i < 100; i++)
        {
            if (display[i] == student_id[i])
            {

                printf("____student id______name_______address_______phone number______email_id_____date of birth_____\n");
                printf("%s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\n", student_id, name, address, phone_number, email_id, dob);
                break;
            }
            else
            {
                printf("no student found\n");
                break;
            }
            break;
        }
    }
}
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
void exit_program()
{
    main();
}