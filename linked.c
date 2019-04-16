#include <stdlib.h>
#include <stdio.h>
// int push(int*);
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int input;

    struct node *start, *head = NULL, *temp = NULL, *temp2 = NULL;
    printf("enter 1 to continue and 0 to exit\n");
    while (scanf("%d", &input))
    {
        if (input == 0)
            exit(0);
        else if (head == NULL)
        {
            start = (struct node *)malloc(sizeof(struct node));
            head = start;
            temp = start;
            start->next = NULL;

            scanf("%d\n", &start->data);
        }
        else
        {

            start = (struct node *)malloc(sizeof(struct node));

            scanf("%d", &start->data);

            temp->next = start;
            temp = temp->next;
            start->next = NULL;
        }
        temp2 = head;
        printf("List is\t");
        while (temp2 != NULL)
        {
            printf("%d\t", temp2->data);
            temp2 = temp2->next;
        }
        printf("\nenter 1 to continue and 0 to exit\n");

    }
}
