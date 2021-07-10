#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student
    {
     char Name[50];
     int ID;
     int Birth[3];
     int Score;
    }first_student;
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