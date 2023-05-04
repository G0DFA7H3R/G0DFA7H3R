#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node   // Structure
{ 
   int data;
   struct node *next; 
    
};
   struct node *head = NULL;
 
void printList() //display the link list
{
   struct node *ptr = head; //start at the beginning of the list 
   printf("\nhead:");

   while(ptr != NULL) 
    {
    printf("node addr:%p \tdata:%d \tnext addr:%p\n”, ptr,ptr->data,ptr->next");
    ptr = ptr->next; 
    }
   printf(" [null]\n"); 
    
}
void insert(int data) // Insert link
{
   struct node *link = (struct node*) malloc(sizeof(struct node)); //create a new link
   link->data = data; 
   link->next = head; 
   head = link;
}

int Add_address()  // Add IPV4 Address
{
    int a, b, c, d;
    if (scanf( "%d.%d.%d.%d", &a, &b, &c, &d) !=4) //Enter in form #.#.#.
     {
      return 0;
     }
}
char saveToFile()
{
    char c,buffer[3];
    printf("Do You Want to Save File? [y/n]:");   //Save To File [y/n]
    fgets(buffer, sizeof(buffer), stdin);
    c = buffer[0];
    
    if (c=='y')        // if YES
    {
     FILE *sfp, *dfp;
   char sfname[32],dfname[32], text[132]; 
   
   printf("Enter source file name:"); //File Name
   scanf("%s",sfname);
   sfp = fopen(sfname,"r");
       
   if (sfp == NULL)
   {
   printf("File Saved Successfully:%s",sfname);
   return(1);
   }
    }
    else if (c=='n')
     printf("File Will Not Be Saved\n"); //if says No
    else if ((c !='y') || (c != 'n'))
    {
     printf("Invalid Entry\n");
     
     printf("Do You Want to Save File? [ y / n ]:");  //Reprompt
     fgets(buffer, sizeof(buffer), stdin);
     c = buffer[0];
     if (c=='y')
    {
     FILE *sfp, *dfp;
   char sfname[32],dfname[32], text[132]; //Save File Name
   
   printf("Enter source file name:"); 
   scanf("%s",sfname);
   sfp = fopen(sfname,"r");
   
   if (sfp == NULL)
   {
   printf("File Saved Successfully:%s",sfname);
   return(1);
   }
    }
    else if (c=='n')
     printf("File Will Not Be Saved\n");
   }
}


int main() 
{ 
    
    int opt;
    
    insert(15); 
    insert(2); 
    insert(33); 
    insert(5); 
    insert(75); 
    insert(13); 
     
    printf("1:  Add Address\n");
    printf("2:  Look Up Address\n");
    printf("3:  Display List\n");  // Will Print Out List
    printf("4:  Save to File\n");
    printf("5:  Quit\n");
    
    scanf("%d",&opt); //display menue items then choose sscanf which number
    
    if (opt == 1)
    {
     printf("Add Address\n");
     Add_address();
    }
     else if (opt == 2)
      {
       printf("Look Up Address\n");
      }
      else if (opt == 3)
       {
        printf("Display List\n");
        printList();
       }
       else if (opt == 4)
        {
         printf("Save to File\n"); 
         saveToFile();
        }
         else;
          {
           printf("\nGoodbye!\n");
          }
          
    
    return 0;
}












