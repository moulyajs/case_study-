#include <stdio.h>
int entry(int choice);
// MAIN FUNCTION
int main()
{
    int choice;
    printf("       *** STUDENT RECORDS ***\n");
    printf("1.Student details\n2.Course details\n3.Enrollment details\n4.Transaction details\n");
    entry(choice);
}
// FUNCTION WHICH DISPLAYS THE CHOICES FOR EACH MODULE
int entry(int choice)
{

    printf("Enter corresponding Sl.no: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("1.Add a student\n2.Update a student details\n3.Delete student details\n4.Display student details\n");
        break;
    case 2:
        printf("1.Add a course\n2.Update a course\n3.Delete a course details\n4.Display course details\n");
        break;
    case 3:
        printf("1.Enroll a student\n2.Withdraw a student\n3.Display the enrollments\n");
        break;
    case 4:
        printf("1.Add transaction\n2.Display transactions\n");
        break;
    default:
        printf("Enter valid number\n");
        entry(choice);
    }
}
