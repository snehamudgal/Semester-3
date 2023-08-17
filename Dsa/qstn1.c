#include<stdio.h>
int main(){
    int stack[100],choice,n,top,x,i;
    void push(void);
    void pop(void);
    void display(void);
    int main(){
        top=-1
        printf("\n enter the size of the stack[max=100]:");
        scanf("%d",&n);
        printf("\n\t stack operation using array");
        printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    
    return 0;
    }
    