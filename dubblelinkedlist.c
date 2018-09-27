// Dubble linked list
#include<stdio.h>
#include<stdlib.h>
   struct node
   {
     struct node  *prv;
     int data ;
     struct node  *next;
   };
  struct node  *start=NULL,*end=NULL;
void insert();
void Delet();
void traverse();
void main ()
{

int ch;
while(1)
{
    printf("\nchoose  your operation on Dobbly linked list \n");
    printf("1: Insertion \n");
    printf("2: Deletion \n");
    printf("3: Traverse \n");
    printf("4: Exit \n");
   scanf("%d",&ch);
   switch(ch)
   {
  case 1:
       insert();
       break;
  case 2:
      Delet();
      break;
  case 3:
      traverse();
      break;
  case 4:
       exit(0);
  default:
    printf("Invalid  input \n");
   }
}
}
void insert()
{
struct node  *temp,*temp1;
int c;

 printf("\t\tChoose your insertion operation\n");
   printf("\t\t1 : At Begin\n");
   printf("\t\t2 : At End\n\t\t");
   scanf("%d",&c);
   if(c!=1&&c!=2)
{
  printf("\t\tInvalid Input\n");
  return;
}

temp=(struct node *)malloc(sizeof(struct node ));
  printf("Enter data : ");
  scanf("%d",&temp->data);
  temp->prv=NULL;
  temp->next=NULL;
  if(start==NULL&&end==NULL)
  {
   start=temp;
   end=temp;
  }

  else
  {
    switch(c)
    {
   case 1:
    temp1=start;
    start=temp;
    temp->next=temp1;
    temp1->prv=temp;
    break;
   case 2 :
    temp1=end;
    end=temp;
    temp1->next=temp;
    temp->prv=temp1;
    break;
  }
  }
}
void Delet()
{
struct node  *temp,*temp1;
int ch;
  if(start==NULL||end==NULL)
   {
    printf("List is empty Deletion is not posible\n");
   }
 else
  {
   printf("Enter your deletion operation \n");
    printf("\t\t1: At Begin\n");
    printf("\t\t2: At End \n");
    scanf("%d",&ch);
     if(ch!=1&&ch!=2)
{
  printf("\t\tInvalid Input\n");
  return;
}
   switch(ch)
   {
    case 1:
   temp=start;
   printf("\t\tDeleted Element : %d\n ",temp->data);
   start=temp->next;
   start->prv=NULL;
   free(temp);
   break;
    case 2:
   temp=end;
   printf("\t\tDeleted Element : %d\n ",temp->data);
   end=temp->prv;
   end->next=NULL;
   free(temp);
   break;
   }
  }
}
void traverse()

{
struct node *temp;
int c;
 if(start==NULL||end==NULL)
    printf("List  is Empty\n");
  else
   {
   printf("\t\tChoose your traverse operation\n");
   printf("\t\t1 : forward traverse\n");
   printf("\t\t2 : Backward traverse\n\t\t");
   scanf("%d",&c);
  switch(c)
  {
  case 1:

     temp=start;
     printf("\n \t\tYour List : ");
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }

    break;
  case 2 :

     temp=end;
     printf("\n \t\tYour List : ");
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->prv;
     }
    break;
default :
  printf("\t\tInvalid Input\n");
 }
  }

}

