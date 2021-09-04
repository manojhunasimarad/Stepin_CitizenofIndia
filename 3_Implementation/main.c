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
#include <voter.h>
int main()  
{
   
    read();
    int c;
    printf("VOTER-ID DATABASE MANAGEMENT SYSTEM\n");
    int index1,index2;
for(index1=1; index1<=4; index1++)
    {
        for(index2=1; index2<=5; index2++)
            printf(" ");
        for(index2=1; index2<=index1-1; index2++)
        {
            printf(" ");
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
    while(c!=6)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        // fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            // write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , you need to try again by using valid inputs only");
        }
        printf("\n\n");
    }
}
