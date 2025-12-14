/* Student */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define NAME_LEN 50
#define DEPT_LEN 30
#define COURSE_LEN 30

struct student
{
    int roll_no, joining_year;
    char name[NAME_LEN], dept[DEPT_LEN], course[COURSE_LEN];
};

void clear_input_buffer();
size_t get_data(struct student *);
void print_name(struct student *, size_t, int);
void print_detail(struct student *, size_t, int);

int main()
{
    int year, roll;
    struct student stud[MAX_STUDENTS];

    size_t n_students = get_data(stud);

    print("Enter year: ");
    scanf("%d", &year);
    print_name(stud, n_students, year);

    print("Enter roll number: ");
    scanf("%d", &roll);
    print_detail(stud, n_students, roll);

    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

size_t get_data(struct student *s)
{
    size_t i = 0;
    char ans;

    while(i < MAX_STUDENTS)
    {
        printf("Enter roll no: " );
        scanf("%d", &s[i].roll_no);

        clear_input_buffer();
        printf("Enter name: " );
        scanf("%49s", s[i].name);     // 49 chars + terminating '\0'

        printf("Enter joining year: " );
        scanf("%d", &s[i].joining_year);

        clear_input_buffer();
        printf("Enter department: " );
        scanf("%29s", s[i].dept);

        clear_input_buffer();
        printf("Enter course: " );
        scanf("%29s", s[i].course);
        
        clear_input_buffer();
        printf("Continue? Press 'n' to stop: ");
        scanf("%c", &ans);
        if(ans == 'n')
            break;

        i++;
        clear_input_buffer();
    }

    return i;
}

void print_name(struct student *s, size_t n_students, int year)
{
    size_t i;

    for(i = 0; i < n_students; i++)
    {
        if(s[i].joining_year == year)
            printf("name = %s\n", s[i].name);
    }
}

void print_detail(struct student *s, size_t n_students, int roll_no)
{
    size_t i;

    for(i = 0; i < n_students; i++)
    {
        if(s[i].roll_no == roll_no)
            printf(
                "roll no = %d, name = %s, dept = %s, course = %s, joining year = %d\n"
                , s[i].roll_no, s[i].name, s[i].dept, s[i].course, s[i].joining_year
            );
        
        break;
    }
}
