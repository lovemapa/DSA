#include<stdlib.h>
#include <stdio.h> 
// int push(int*);
int main(){
    struct node
    {
       int data;
       struct  node *next;
       
       
    };
    
int STACK_SIZE,input;
printf("Enter 1 to continue and 0 to exit");
while(scanf ("%d", &input))
{

 if(input==0)
  exit(0);
  else 
  { 
      struct node *new,*head;
      if(head==NULL)
        {
             
            printf("reachign");
            new= (struct node*)malloc(sizeof(struct node));
            printf("Give node1 data\n");                                                       
            scanf("%d",&new->data);
            printf("Newly added data is %d\n",new->data);
            printf("List is %d\t",new->data);
            head=new;
            new->next=NULL;
            while(head!=NULL)
            {
                printf("data:%d\t",head->data);
                 head=head->next;   
                
            }
        }
        else 
        {
            new=(struct node*)malloc(sizeof(struct node));
            new=new->next; 
            printf("Give node2 data\n");
            scanf("%d",&new->data);
            printf("Newly added data is %d\n",new->data);
            new->next=NULL;
            
            printf("List is %d\t",head->data);
            while(head!=NULL)
            {
                printf("%d\t",head->data);
                 head=head->next;   
                
            }
        }






  }
}
return 0;
}


// int(*)

