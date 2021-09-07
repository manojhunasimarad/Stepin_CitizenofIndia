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

#include "VMS.h""

int main()
{
    read();
    int choice;
    printf("Welcome to Voter-Id Management System\n\n");

    while(choice!=6)

    {

        printf("You are Welcome!!!!!!!!!!!!!! \nto\n Voter Id Database Mangement System\n\n");
        printf("Press 1 to Add Applicant's Data\n");
        printf("Press 2 to View Applicant's Data\n");
        printf("Press 3 to Search Applicant's Data\n");
        printf("Press 4 to Edit Applicant's Data\n");
        printf("Press 5 to Delete Applicant's Data\n");
        printf("Press 6 to Exit the opeartion\n");
        scanf("%d",&choice);
        printf("you have selected %d ",choice);

        if(choice==1)
        {
            printf("You have opted to add Applicants data\n\n");
            system("cls");
            add();
        }
        else if (choice==2)


      {
            printf("You have opted to View Applicants data\n\n");
            system("cls");
            view();
        }

        else if(choice==3)
        {
            printf("You have opted to search Applicants data\n\n");
            system("cls");
            search();
        }
        else if(choice==4)
        {
            printf("You have opted to edit the Applicants data\n\n");
            system("cls");
            edit();
        }
        else if(choice==5)
        {
            printf("You have opted to Delete Applicants data\n\n");
            system("cls");
            del();
        }

        else if(choice==6)
        {
            printf("You have opted to Exit the VoterId  database Management system\n\n");
            return 0;

        }
        else
    {
        system("cls");
        printf("You have entered an invalid input.Please try again with  valid inputs only\n\n");

    }




    }





}


