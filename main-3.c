/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int get_input();
// Ibrahim Jami, G01296681 , Homework 2
int main()
{
    int user_input;
    user_input = get_input();
    
    return 0;
}


int get_input();

{
    int n;
    printf("Enter a positive integer between [ 1 - 999999]:: ");  // Setting intger between 1 and 999999
    scanf("%d",&n);
    while ((n<1)|| (n >999999))                         // If the number is out of range
    {
        printf("Number Out Of Range.\n");
        printf("Please enter a number between [ 1 - 999999]:");
        scanf("%d",&n);
    }
    
    printf("%d is a valid entry\n",n);
    return n;
}

int display (int val)
int sum = 0;
int temp = val;            // dividing the input by 10
    while (temp > 0)
{
    
    sum = sum+temp%10;
    prinf("\n%d\n",temp%10);
        temp = temp/10;
}
}
    
    printf("%d is a valid entry\n",n);
    
    if (n%9==0)                                 // Finding out if n is divisible by 9
        printf("Integer is divisible by 9");
    else
        printf("Integer is not divisible by 9");
        
}

