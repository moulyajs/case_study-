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
int main()
{
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
            addStudent();

            break;
        case 2:
            updateStudent();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            displayStudents();
            break;
        }
        break;
    case 2:
        printf("1.Add a course\n2.Update a course\n3.Delete a course details\n4.Display course details\n");
        {
            int b;
            printf("Enter choice:");
            scanf("%d", &b);
            switch (b)
            {
            case 1:
                addCourse();
                break;
            case 2:
                updateCourse();
                break;
            case 3:
                deleteCourse();
                break;
            case 4:
                displayCourse();
                break;
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
            enrollStudent();
            break;
        case 2:
            withdrawStudent();
            break;
        case 3:
            displayEnrollments();
            break;
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
            addTransaction();
            break;
        case 2:
            displayTransactions();
            break;
        }
        break;
    default:
        printf("Enter valid number\n");
        break;
    }

    return 0;
}
void addStudent()
{
    char student_id[100], name[100], address[100], phone_number[100], email_id[100], dob[50];
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
    printf("Student details added successfully");
}
void updateStudent()
{
    char student_id[100] = "PES2UG23CS3243", name[100], address[100], phone_number[100], email_id[100], dob[50];
    char student[100];
    printf("Enter Student ID: ");
    scanf("%s", student);
    if (student == student_id)
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
        printf("Student details updated successfully");
    }
    else
    {
        printf("Student not found");
    }
}
void deleteStudent()
{
    char student_id[100] = "PES2UG23CS1203", name[100] = "RAM", address[100] = "Bangalore", phone_number[100] = "1234567891", email_id[100] = "ram@gmail.com", dob[50] = "12/12/1999";
    printf("enter student id:");
    scanf("%s", student_id);
    if (student_id == "PES2UG23CS1203")
    {
        student_id[100] = '\0';
        name[100] = '\0';
        address[100] = '\0';
        phone_number[100] = '\0';
        email_id[100] = '\0';
        dob[50] = '\0';
        printf("Student details deleted successfully");
    }
    else
    {
        printf("Student not found");
    }
}
void displayStudents()
{
    char student_id[100] = "PES2UG23CS1203", name[100] = "RAM", address[100] = "Bangalore", phone_number[100] = "1234567891", email_id[100] = "ram@gmail.com", dob[50] = "12/12/1999";
    printf("____student id______name_______address_______phone number______email_id_____date of birth_____\n");
    printf("%s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\n", student_id, name, address, phone_number, email_id, dob);
}
void addCourse()
{
    char course_id[100], course_name[100], instructor[100], schedule[100];
    char creadits[10];
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
    printf("Course details added successfully");
}
void updateCourse()
{
    char course_id[100] = "CS1203", course_name[100] = "Data Structures", instructor[100] = "Lakshman", schedule[100] = "Monday 10am-12pm, Wednesday9am-1pm";
    char creadits[10] = "3";
    char course[100];
    printf("Enter Course ID: ");
    scanf("%s", course);
    if (course == course_id)
    {
        printf("update Course Name: ");
        scanf(" %s", course_name);
        printf("update Instructor: ");
        scanf(" %s", instructor);
        printf("update Schedule: ");
        scanf(" %s", schedule);
        printf("update Creadits: ");
        scanf(" %s", creadits);
        printf("Course details updated successfully");
    }
    else
    {
        printf("Course not found");
    }
}
void deleteCourse()
{
    char course_id[100] = "CS1203", course_name[100] = "Data Structures", instructor[100] = "Lakshman", schedule[100] = "Monday 10am-12pm, Wednesday9am-1pm";
    char creadits[10] = "3";
    printf("enter course id:");
    scanf("%s", course_id);
    if (course_id == "CS1203")
    {
        course_id[100] = '\0';
        course_name[100] = '\0';
        instructor[100] = '\0';
        schedule[100] = '\0';
        creadits[10] = '\0';
        printf("Course details deleted successfully");
    }
}
void displayCourse()
{
    char course_id[100] = "CS1203", course_name[100] = "Data Structures", instructor[100] = "Lakshman", schedule[100] = "Monday 10am-12pm, Wednesday9am-1pm";
    char creadits[10] = "3";
    printf("____course id_______course name_______instructor_______schedule_______creadits_____\n");
    printf("%s\t  %s\t  %s\t  %s\t  %s\t  %s\n", course_id, course_name, instructor, schedule, creadits);
}
void enrollStudent()
{
    char enroll_id[100], student_id[100], course_id[100], enrollment_date[100];
    printf("Enter Enrollment ID: ");
    scanf("%s", enroll_id);
    printf("Enter Student ID: ");
    scanf("%s", student_id);
    printf("Enter Course ID: ");
    scanf("%s", course_id);
    printf("Enter Enrollment Date: ");
    scanf("%s", enrollment_date);
    printf("Enrollment details added successfully");
}
void withdrawStudent()
{
    char enroll_id[100] = "E123", student_id[100] = "PES2UG23CS1203", course_id[100] = "CS1203", enrollment_date[100] = "12/12/2020";
    printf("enter enrollment id:");
    scanf("%s", enroll_id);
    if (enroll_id == "E123")

    {
        enroll_id[100] = '\0';
        student_id[100] = '\0';
        course_id[100] = '\0';
        enrollment_date[100] = '\0';
        printf("Enrollment details deleted successfully");
    }
    else
    {
        printf("Enrollment id not found");
    }
}
void displayEnrollments()
{
    char enroll_id[100] = "E123", student_id[100] = "PES2UG23CS1203", course_id[100] = "CS1203", enrollment_date[100] = "12/12/2020";
    printf("____enrollment id_______student id_______course id_______enrollment date_____\n");
    printf("%s\t  %s\t  %s\t  %s\t  %s\n", enroll_id, student_id, course_id, enrollment_date);
}
void addTransaction()
{
    char transaction_id[100], student_id[100], transaction_type[100], transaction_date[100], amount[100];
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
    printf("Transaction details added successfully");
}
void displayTransactions()
{
    char transaction_id[100] = "T123", student_id[100] = "PES2UG23CS1203", transaction_type[100] = "deposit", transaction_date[100] = "12/12/2020", amount[100] = "1000";
    printf("____transaction id_______student id_______transaction type_______transaction date_______amount_____\n");
    printf("%s\t  %s\t  %s\t  %s\t  %s\t  %s\n", transaction_id, student_id, transaction_type, transaction_date, amount);
}
