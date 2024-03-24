#include <stdio.h>
void add_student();
void update_student();
void delete_student();
void add_course();
void update_course();
void delete_course();
void display_course();
void enroll_student();
void withdraw_student();
void display_enrollments();
void add_transaction();
void display_transaction();
// MAIN FUNCTION
int main()
{
    int choice, key;
    printf("       *** STUDENT RECORDS ***\n");
    printf("1.Student details\n2.Course details\n3.Enrollment details\n4.Transaction details\n");

    printf("Enter choice: ");
    scanf("%d", &choice);
    char student_id[100], name[100], address[100], phone_number[100], email[100], date_of_birth[100];

    switch (choice)
    {
    case 1:
        printf("1.Add a student\n2.Update a student details\n3.Delete student details\n4.Display student details\n");
        printf("enter choice:");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            // add_student();
            // char student_id[100], name[100], address[100], phone_number[100], email[100], date_of_birth[100];
            printf("Enter your student id:");
            scanf("%s", student_id);
            printf("Enter your name:");
            scanf("%s", name);
            printf("Enter your address:");
            scanf("%s", address);
            printf("Enter your phone number:");
            scanf("%s", phone_number);
            printf("Enter your email:");
            scanf("%s", email);
            printf("Enter your date of birth:");
            scanf("%s", date_of_birth);
            printf("Student details added successfully");

            break;
        case 2:
            update_student();
        // case 3:
        //     delete_student();
        case 4:
            printf("__student_id__|__name__|__address__|__phone_number__|__email__|__date_of_birth__\n");
            printf("%s|%s|%s|%s|%s|%s\n", student_id, name, address, phone_number, email, date_of_birth);
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
                add_course();
                break;
            case 2:
                update_course();
                break;
            case 3:
                delete_course();
                break;
            case 4:
                display_course();
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
            enroll_student();
            break;
        case 2:
            withdraw_student();
            break;
        case 3:
            display_enrollments();
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
            add_transaction();
            break;
        case 2:
            display_transaction();
            break;
        }
        break;
    default:
        printf("Enter valid number\n");
        break;
    }
}
/*
void add_student()
{

    char student_id[100], name[100], address[100], phone_number[100], email[100], date_of_birth[100];
    printf("Enter your student id:");
    scanf("%s", student_id);
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your address:");
    scanf("%s", address);
    printf("Enter your phone number:");
    scanf("%s", phone_number);
    printf("Enter your email:");
    scanf("%s", email);
    printf("Enter your date of birth:");
    scanf("%s", date_of_birth);
    printf("Student details added successfully");
}
*/
void update_student()
{

    char student_id[100], name[100], address[100], phone_number[100], email[100], date_of_birth[100];
    printf("enter your student id:");
    scanf("%s", student_id);
    if (student_id == "123456789")
    {
        printf("update your student id:");
        scanf("%s", student_id);
        printf("update your name:");
        scanf("%s", name);
        printf("update your address:");
        scanf("%s", address);
        printf("update your phone number:");
        scanf("%s", phone_number);
        printf("update your email:");
        scanf("%s", email);
        printf("update your date of birth:");
        scanf("%s", date_of_birth);
    }
    else
        printf("student id not found");
}
void delete_student()
{
}

void add_course()
{
    char course_id[100], course_name[100], instructor[100], schedule[100], credits[100];
    printf("Enter your course id:");
    scanf("%s", course_id);
    printf("Enter course name:");
    scanf("%s", course_name);
    printf("Enter instructor:");
    scanf("%s", instructor);
    printf("Enter schedule:");
    scanf("%s", schedule);
    printf("Enter credits:");
    scanf("%s", credits);
}
void update_course()
{
    char course_id[100], course_name[100], instructor[100], schedule[100], credits[100];
    printf("update course id:");
    scanf("%s", course_id);
    printf("update course name:");
    scanf("%s", course_name);
    printf("update instructor:");
    scanf("%s", instructor);
    printf("update schedule:");
    scanf("%s", schedule);
    printf("update credits:");
    scanf("%s", credits);
}
void delete_course()
{
}
void display_course()
{
    char course_id[100], course_name[100], instructor[100], schedule[100], credits[100];
    printf("__course_id__|__course_name__|__instructor__|__schedule__|__credits__\n");
    printf("%s|%s|%s|%s|%s\n", course_id, course_name, instructor, schedule, credits);
}
void enroll_student()
{
    char student_id[100], course_id[100], enrollment_id[100], enrollment_date[100];
    printf("Enter student id:");
    scanf("%s", student_id);
    printf("Enter course id:");
    scanf("%s", course_id);
    printf("Enter enrollment id:");
    scanf("%s", enrollment_id);
    printf("Enter enrollment date:");
    scanf("%s", enrollment_date);
}
void withdraw_student()
{
}
void display_enrollments()
{
    char student_id[100], course_id[100], enrollment_id[100], enrollment_date[100];
    printf("__student_id__|__course_id__|__enrollment_id__|__enrollment_date__\n");
    printf("%s|%s|%s|%s\n", student_id, course_id, enrollment_id, enrollment_date);
}
void add_transaction()
{
    char transaction_id[100], student_id[100], transaction_type[100], transaction_date[100], transaction_amount[100];
    printf("Enter transaction id:");
    scanf("%s", transaction_id);
    printf("Enter student id:");
    scanf("%s", student_id);
    printf("Enter transaction type:");
    scanf("%s", transaction_type);
    printf("Enter transaction date:");
    scanf("%s", transaction_date);
    printf("Enter transaction amount:");
    scanf("%s", transaction_amount);
}
void display_transactions()
{
    char transaction_id[100], student_id[100], transaction_type[100], transaction_date[100], transaction_amount[100];
    printf("__transaction_id__|__student_id__|__transaction_type__|__transaction_date__|__transaction_amount__\n");
    printf("%s|%s|%s|%s|%s\n", transaction_id, student_id, transaction_type, transaction_date, transaction_amount);
}