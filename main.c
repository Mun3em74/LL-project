#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;
int N,L,x;
struct Nodes *head;
struct Nodes *tail;
struct student*p;
struct student
    {
     char Name[50];
     int ID;
     int Birth[3];
     int Score;
    }first_student;

struct Nodes
    {
        struct student student_list;
        struct Nodes *next;
    };
    void insert()
    { int place;
    printf("Enter student name: ");
    scanf("%*c");
    fgets(first_student.Name,50,stdin);
    printf("Enter student ID: ");
    scanf("%d",&first_student.ID);
    printf("Enter student Birth date: ");
    printf("\nDay: "); scanf("%d",&first_student.Birth[0]);
    printf("Month: "); scanf("%d",&first_student.Birth[1]);
    printf("Year: "); scanf("%d",&first_student.Birth[2]);
    printf("Enter student score: ");
    scanf("%d",&first_student.Score);
    struct Nodes *temp;
    temp=(struct Nodes*)malloc(sizeof(struct Nodes));
if (L==1)
{
    switch(x)
    {
        case 1:
          {  N++;
                if((head->next)==NULL) tail=head;
                temp->student_list=first_student;
                temp->next=head;
                head=temp;
                tail->next=NULL;
                break;}

        case 2:
                    {N++;
                    struct Nodes *pre;
                    struct Nodes *aft;
                    if(head->next==NULL)
                    {
                    printf("There is only one student in the list, you can't insert in the middle\n");
                    }
                    else
                    {   pre=head;
                        printf("Which place do you want to insert the student?\n");
                    A:; scanf("%d",&place);
                        if (place==1)
                            {
                                printf("This place is at the beginning not in the middle, enter a middle place.....\n\n"); goto A;
                            }
                                else if (place==N)
                            {
                                printf("This place is at the end not in the middle, enter a middle place.....\n\n"); goto A;
                            }
                        else if (place>N) {printf("The list contains of only %d students, Enter a valid place\n",N); goto A; }
                        else if (place==0) {printf("Numbering starts from 1, Enter a valid place"); goto A;}
                        else if (place<N&&place>1)
                    {
                        temp->student_list=first_student;
                        pre=head;
                        for(int k=2;k<place;k++) pre=pre->next;
                        aft=pre->next;
                        temp->next=aft;
                        pre->next=temp;
                    }
                        else {printf("Invalid input, Enter a valid number\n"); goto A;}
                    }
            break;}

        case 3:
          {  N++;
                if(head->next==NULL) tail=head;
                temp->student_list=first_student;
                temp->next=NULL;
                tail->next=temp;
                tail=temp;
                break;}
    }
}

    else if(L==2)
    {
     switch(x)
    {
        case 1:
          {    for(int i=N;i>=0;i--)
                    *(p+i)=*(p+i-1);
                    *p=first_student;
                    N++;
                    break;}

        case 2:
                    {N++;
                    int place;
                    if (N==2) {printf("The list contains of only 1 students, you can't insert in the middle"); break;}
                    printf("Which place do you want to insert the student?\n");
                    a:;
                    scanf("%d",&place);
        if (place==1)
            {printf("This place is at the beginning , enter a valid middle place\n"); goto a;}
        else if (place==N)
            {printf("This place is at the end not in the middle, enter a middle place.....\n\n"); goto a;}
        else if (place>N) {printf("The list contains of only %d students, Enter a valid place\n",N); goto a;}
        else if (place==0) {printf("Numbering starts from 1, Enter a valid place"); goto a;}
        else if (place<N&&place>1)
            {
                for(int i=N-1;i>=place;i--)
                *(p+i)=*(p+i-1);
                *(p+place-1)=first_student;
            } break;}

        case 3:
          {  *(p+N)=first_student;
                N++;
                break;}

    }
    }
    }

int main()
{
printf("----------Welcome to our program----------\n");
}
