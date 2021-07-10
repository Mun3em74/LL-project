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

void display()
    {
        switch(L)
            {case 1:
            {struct Nodes *temp;
            temp=(struct Nodes*)malloc(sizeof(struct Nodes));
            temp=head;
        for(int i=1;temp!=NULL;i++)
            {
             printf("\n----------Student Number %d----------",i);
             printf("\nName:");
             printf(temp->student_list.Name);
             printf("\nID: %d",temp->student_list.ID);
             printf("\nDate of birth (d/m/y): (%d,%d,%d)",temp->student_list.Birth[0],temp->student_list.Birth[1],temp->student_list.Birth[2]);
             printf("\nScore: %d",temp->student_list.Score);
             temp=temp->next;
            } break;
            }
            case 2:
            {struct student *temp1;
        for(int i=0;i<N;i++)
            {
             temp1=(p+i);
             printf("\n----------Student Number %d----------",i+1);
             printf("\nName:");
             printf(temp1->Name);
             printf("\nID: %d",temp1->ID);
             printf("\nDate of birth (d/m/y): (%d,%d,%d)",temp1->Birth[0],temp1->Birth[1],temp1->Birth[2]);
             printf("\nScore: %d",temp1->Score);
            } break;
            }}

    }
void menu_display()
{
    printf("\n------MAIN MENU-----");
    printf("\nPress 1 to insert in the beginning\nPress 2 to insert in the middle\nPress 3 to insert in the end\n");
    printf("Press 4 to display all students' data\nPress 5 to end the program\n");
}

int main()
{
    printf("----------Welcome to our program----------\n");
    printf("What do you want to use?\nFor linked list press 1\nFor Dynamic array press 2\n");
    H:;
    scanf("%d",&L);
        if(L==1)
{
        printf("How many students do you want to insert initially?\n");
        scanf("%d",&N);
        head=(struct Nodes*)malloc(sizeof(struct Nodes));
        tail=(struct Nodes*)malloc(sizeof(struct Nodes));
        head->next=NULL;
        struct Nodes *temp;
        temp=(struct Nodes*)calloc(N,sizeof(struct Nodes));
        for(int i=0;i<N;i++)
            {printf("\n\nStudent number %d \n",i+1);
            insert();
            (temp+i)->student_list=first_student;
            (temp+i)->next=(temp+i+1);
            }
            head=temp;
            tail=temp+N-1;
            tail->next=NULL;
    C:; menu_display();
    D:; scanf("%d",&x);
if(x==1||x==2||x==3) {start=clock(); insert(); end=clock();  cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC; printf("Time used = %f",cpu_time_used );}
else if(x==4) display();
else if(x==5) return 0;
else {printf("Invalid number, enter a valid number again ...."); goto D;} goto C;
}
else if(L==2)
{
        printf("How many students do you want to insert initially?\n");
        scanf("%d",&N);
p=(struct student*)calloc(N,sizeof(struct student));
for(int i=0;i<N;i++)
    {   printf("\n\nStudent number %d \n",i+1);
        printf("Enter student name: ");
        fflush(stdin);
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
        *(p+i)=first_student;
    }

    Y:; menu_display();
    Z:; scanf("%d",&x);
if(x==1||x==2||x==3) {start=clock(); insert(); end=clock();  cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC; printf("Time used = %f",cpu_time_used ); }
else if(x==4) display();
else if(x==5) return 0;
else {printf("Invalid number, enter a valid number again ...."); goto Z;}
    goto Y;
}
else {printf("Invalid input, Enter a valid number....\n"); goto H;}
    goto Y;
}