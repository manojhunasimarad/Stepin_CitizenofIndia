/**
 * @file main.c
 * @author Manoj Hunasimarad
 * @brief 
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <VMS.h>
int main()  
{
   
    read();
    int choice;
    printf("VOTER-ID DATABASE MANAGEMENT SYSTEM\n");
    int index1,index2;
   
   //this will make the impression of the code output look good
for(index1=1; index1<=4; index1++)
    {
        for(index2=1; index2<=5; index2++)
            printf("  ");
        for(index2=1; index2<=index1-1; index2++)
        {
            printf("  ");
        }
        for(index2=1; index2<=4-m+1; index2++)
        {
            if(index2==4-index1+1 || index1==1 || index1==4)
                printf("*");
            else
                printf(" ");
        }
        for(index2=1; index2<=4-index1+1; index2++)
        {
            if(index2==1 ||index1==1 || index1==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
   
   
   
    while(choice!=6)
    {

        printf("*****    Please enter your choice  *****\n\n\n1. Add the Information of Voter\n2. View Information of Voter\n3. Search of Voter\n4. Edit Information of Voter\n5. Delete Information of Voter\n6. Exit or Stop \n\n\n");
        scanf("%d",&choice);//choice for option
       
       printf("Choice you have entered is= %d",choice);
        // fflush(stdin);//making it clear
        if(choice==1)//add
        {
            system("cls");
            add();
        }
        else if(choice==2)//view
        {
            system("cls");
            view();
        }
        else if(choice==3)//search
        {
            system("cls");
            search();
        }
        else if(choice==4)//edit
        {
            system("cls");
            edit();
        }
        else if(choice==5)//delete
        {
            system("cls");
            del();
        }
        else if(choice==6)
        {
            // write(); returning stop or exiting the code
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\n you have entered the Invalid input , you need to try again by using valid inputs only given from the options");
        }
        printf("\n\n");
    }
}
