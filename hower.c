#include<stdio.h>
#include<conio.h>
struct node
{
 int b;
 int llp;
 struct node *next;
}*t1,*t2,*t3;
int f;
void push(struct node *,int);
int pop(struct node *);
void disp(struct node *);
void makeDisk(int n,struct node *,struct node *,struct node *);
void main()
{
 int n=3;
 clrscr();
 printf("\nEnter the number of plates in tower1...");
 scanf("%d",&n);
 printf("\nThe moves are...");
 t1=(struct node *)malloc(sizeof(struct node)*n);
 t1->next=NULL;
 t2=(struct node *)malloc(sizeof(struct node)*n);
 t2->next=NULL;
 t3=(struct node *)malloc(sizeof(struct node)*n);
 t3->next=NULL;
 t1->b=1;
 t2->b=2;
 t3->b=3;
 makeDisk(n,t1,t2,t3);
 getch();
}

void makeDisk(int n,struct node *t1,struct node *t2,struct node *t3)
{
 if(n==1)
 {
  printf("\nMove from tower %d to %d....",t1->b,t2->b);
  f=pop(t1);
  push(t2,f);
 }
 else
 {
  makeDisk(n-1,t1,t3,t2);
  printf("\nMove from tower %d to %d....",t1->b,t2->b);
  f=pop(t1);
  push(t2,f);
  makeDisk(n-1,t3,t2,t1);
 }
}


void push(struct node *head,int x)
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->llp=x;
 temp->next=head->next;
 head->next=temp;
}

int pop(struct node *head)
{
 struct node *p;
 int t=0;
 p=head->next;
 t=p->llp;
 head->next=head->next->next;
 free(p);
 return t;
}

void disp(struct node *head)
{
 struct node *p;
 p=head->next;
 printf("\nThe llp are...");
 while(p!=NULL)
 {
  printf("%d\t",p->llp);
  p=p->next;
 }
}
