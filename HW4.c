#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct address_t
{
   int a, b, c, d;
   char alias[16];
};

struct address_t address[100];
void Read_Data_File();
void Bubble_sort(int size);
char *getDateAndTime();
void Generate_Alias_List();


 int main()
{
   int size; 
   Read_Data_File();
   Bubble_sort( size);
   char dateTime[32]; 
   char buffer[16];
   Generate_Alias_List();   
   return 0;
   
}

void Read_Data_File()
{
   FILE *sfp, *dfp;
   char sfname[32],dfname[32], text[132], buff[BUFSIZ];
   sfp=fopen("CS222_Inet.txt","r");
   int ch;
   float num;
   int ret;
   int array[100], n, c, d;
  
   
   if(sfp == NULL)
   {
    printf("Error opening destination file:%s",dfname);
    exit(1);
     
   }
   else
   {
    printf("The contents of %s file are :\n", text);
   }
   {
   int b[4] = {0};
   char name[16];
   while(fgets(text, sizeof(text), sfp) !=NULL)
     {
      printf("%s" , text);
                
      ret = strncmp(text,"0.0.0.0 NONE",12); //compare w sent rec (0.0.0.0) using strcmp
      if (ret ==0)
      {
         printf("Sentinal Address Detected");
         break;

       }
   //printf("\n %d arguments parsed.\n", sscanf(text, "%d.%d.%d.%d %s", &b[0],&b[1],&b[2],&b[3], name));
  
   //printf("values in %s: %s %s %s %s %s\n", str,address[0].alias,address[1].alias, address[2].alias, address[3].alias, name);
   
    fclose(sfp);
    }
   }
}
char *getDateAndTime()    //Setting up date & time
{
   char ch[10];
   time_t t; 
   time(&t);
   return ctime(&t);
   
   printf("Enter Name:");
   fgets(ch,10,stdin);
   
}
      
void Bubble_sort(int size)
{
   int array[100], n, c, d;
   struct address_t swap;
   char ch[10];
   int ret;

   ret = strcmp(address[c].alias, address[c+1].alias);
    
    printf("Do you want it listed in Ascending or Decending order? [a/d]: \n"); //Prompt User for Order
    fgets(ch,10,stdin);
    
    if(ch[0] == 'a')  //WHEN "a" is entered
    {
   // for (c = 0 ; c < ( n - 1 ); c++)   //Sort in Ascending Order
    for (c = 0 ; c < size; c++)  
     {
    // for (d = 0 ; d < n - c - 1; d++)
     for (d = 0 ; d < size - 1; d++)
      {
       if (ret < 0)  // strcmp(address[c].alias, address[c+1].alias)
       {
        swap = address[c]; 
        address[c] = address[c+1]; 
        address[c+1] = swap;
       }
      }
     }
   printf("Sorted list in ascending order:\n");   
   for ( c = 0 ; c < n ; c++ )
    printf("%d\n", array[c]);
    }
    
    else if (ch[0] =='d') //When "d" is entered
    {
    // for (c = 0 ; c < ( n - 1 ); c++)   //Sort in Decending Order
     for (c = 0 ; c < size; c++)
      {
     // for (d = 0 ; d < n - c - 1; d++)
      for (d = 0 ; d < size - 1; d++) 
       {
   
   if (ret > 0)
       {
       swap = address[c]; 
       address[c] =  address[c+1]; 
       address[c+1] = swap;
       }
      } 
     }
     
   printf("Sorted list in Decending order:\n"); 
   for ( c = 0 ; c < n ; c++ )
    printf("%d\n", array[c]);
    }
    else
    {
    printf("Use either 'a' or 'd' \n");
    }
}
void Generate_Alias_List()
{
   {
   char ch[10];         // Get Date & Time
   time_t t; 
   time(&t);
   ctime(&t);
  printf("Enter User Name:");  //Get User Name
   fgets(ch,10,stdin);
   }

   char c,buffer[3];
    fgets(buffer, sizeof(buffer), stdin);
    c = buffer[0];
    
     FILE *sfp, *dfp;
   char sfname[32],dfname[32], text[132]; 
   
   printf("File Saved to 222_Alias_List");  //File Saved to Alias List
  // scanf("%s",sfname);
   sfp = fopen(sfname,"w");
  
   
   if (sfp == NULL)
   {
   printf("File Did Not Save:%s",sfname);
   }
   else
   {
    fprintf(sfp, "Name on File to be Saved: \n");  //Print Name
    fprintf(sfp, "Today's date and time :&t\n,getDateAndTime()"); //Print date & time
   } 
}








