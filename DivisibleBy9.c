
#include <stdio.h>
// Ibrahim J

int get_input();

int main()
{
    int n;
    
    printf("Enter a integer between [1-999999]:"); //Setting integer between 1 and 999999
    scanf("%d", &n);
    
    while ((n<1)|| (n >999999))
    {
        printf("Number Out Of Range.\n");
        printf("Please enter a number between [ 1 - 999999]:");
        scanf("%d",&n);
    }
    
    printf("%d is a valid entry\n",n);
    
    if (n%9==0)                                 // Finding out if n is divisible by 9
        printf("Integer is divisible by 9");
    else
        printf("Integer is not divisible by 9");
        
    return 0;
}
