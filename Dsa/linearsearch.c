#include<stdio.h>
int main(){
    printf("sneha mudgal");
    int array[100],search,i,n;
    printf("enter no of element in array\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    scanf("%d",&array[1]);
    printf("enter a number to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(array[1]==search)
        {
            printf("%d is %d,\n",search,i+1);
            break;
        }
    }
    if(i==n)
    printf("%disn't present in the array,\n",search);
    return 0;
    

}
