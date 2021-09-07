
#include <VMS.h>




int index1,index2,index3,index4,sum=0,g,flag,num;
void add()
{
    printf("\n\n the number of entries you wish to add\n\n");
    scanf("%d",&index3);
    sum=index3+num;

    for(index1=num,index2=0;index1<sum;index1++)
    {
        printf("Please Enter the Applicant's Name:\n");
        scanf("%s",variable[index1].Name);
        printf("Please Enter the Applicant's Parent name:\n");
        scanf("%s",variable[index1].ParentsName);
        printf("Please Enter the Applicant's House Address:\n");
        scanf("%s",variable[index1].Houseaddress);
        printf("Please Enter the Applicant's Aadhar Card Number:\n");
        scanf("%s",variable[index1].Aadharcardno);
        printf("Please Enter the Applicant's Mobile Number:\n");
        scanf("%s",variable[index1].phoneno);
        printf("Please Enter the Applicant's Pincode:\n");
        scanf("%d",&variable[index1].pincode);
        printf("Please Enter the Applicant's Age:\n\n\n");
        scanf("%d",&variable[index1].age);

        index2++;
        index4++;
        num++;

        
        
        
    }



}

void view()


{
    for(index1=0;index1<num;index1++)
    {
        printf("\n\n Serial Number is %d",index1);
        printf("Applicant's Name is :");
        puts(variable[index1].Name);
        printf("Applicant's Parent Name is :");
        puts(variable[index1].ParentsName);
        printf("Applicant's House Address is :");
        puts(variable[index1].Houseaddress);
        printf("Applicant's Aadhar card number is :");
        puts(variable[index1].Aadharcardno);        
        printf("Applicant's phone number is :");
        puts(variable[index1].phoneno);
        printf("Applicant's pincode is :%d",variable[index1].pincode);
        printf("Applicant's age is :%d",variable[index1].age);
        
    }

}

void search()

{

    int s,h;
    char u[100];
    printf("The criteria you are looking for is?");
    printf("\nPress 1 to Search by Applicant's Serial Number \n");
    printf("Press 2 to Search by Applicant's Name \n");
    printf("Press 3 to Search by Applicant's House Address \n");
    printf("Press 4 to Search by Applicant's Aadhar CardNumber\n");
    printf("Press 5 to Search by Applicant's phoneno \n");
    printf("Press 6 to Search by the pincode\n");
    printf("Press 7 to Search by the age\n");
    scanf("%d",&h);
    if(h==2)
    {
        printf("Enter the Applicant's name:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            if(strcmp(u,variable[g].Name)==0)
            {
                int f=1;
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode: %d \n",variable[g].pincode);
                
                printf("Age: %d \n",variable[g].age);
                
                f=0;


                

                

            }
            else {printf("No Command found");}
        }
        

    }
    else if(h==1)
    {
        printf("Enter the serial number of the Voter:\n");
        scanf("%d",&s);
        if(s<num)
        {
            printf("/n Serial Number is: %d",s);
            printf("Name:");
            puts(variable[g].Name);
            printf("Parents Name:\n");
            puts(variable[g].ParentsName);    
            printf(" Houseaddress:\n");
            puts(variable[g].Houseaddress);                
            printf("Aadharcardno:\n");
            puts(variable[g].Aadharcardno);                
            printf("phoneno:\n");
            puts(variable[g].phoneno);
            printf("pincode: %d \n",variable[g].pincode);
            //puts();
            printf("Age:%d \n",variable[g].age);
            //puts();

        }
        else
        {
            printf("\n\n Command not found");
        }
        

    }
    else if(h==3)
    {
        int f=1;
        printf("ENter the correspondance addresss:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            if(strcmp(u,variable[g].Houseaddress))
            {
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode: %d \n",variable[g].pincode);
                //puts();
                printf("Age:%d \n",variable[g].age);
                //puts();
                int f=0;


            }
        }
        if (f==1) {printf("No Command found");}

    }
    else if(h==4){
         int f=1;
        printf("ENter the applicant's Aadharcardno:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            if(strcmp(u,variable[g].Aadharcardno))
            {
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode: %d \n",variable[g].pincode);
            //  puts();
                 printf("Age:%d \n",variable[g].age);
            //  puts();
                int f=0;


            }
        }
        if (f==1) {printf("No Command found");}

    }
    else if(h==5){
         int f=1;
        printf("ENter the applicant's phoneno:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            if(strcmp(u,variable[g].phoneno))
            {
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode: %d \n",variable[g].pincode);
            //puts();
                printf("Age:%d \n",variable[g].age);
            //puts();
                int f=0;


            }
        }
        if (f==1) {printf("No Command found");}

    }
    else if(h==6){
         int f=1;
        printf("ENter the applicant's pincode:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            int con=atoi(u);
            if( con==variable[g].pincode)
            {
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode:%d\n",variable[g].pincode);
                //puts();
                printf("Age: %d\n",variable[g].age);
                //puts();
                int f=0;


            }
        }
        if (f==1) {printf("No Command found");}

    }
    else if(h==7){
         int f=1;
        printf("ENter the applicant's Age:");
        scanf("%s",u);
        for(g=0;g<num;g++)
        {
            int con=atoi(u);
            if(con==variable[g].age)
            {
                printf("\n Serial number is %d",g);
                printf("Name:");
                puts(variable[g].Name);


                printf("Parents Name:\n");
                puts(variable[g].ParentsName);
                
                printf(" Houseaddress:\n");
                puts(variable[g].Houseaddress);
                
                printf("Aadharcardno:\n");
                puts(variable[g].Aadharcardno);
                 
                printf("phoneno:\n");
                puts(variable[g].phoneno);
                printf("pincode: %d\n",variable[g].pincode);
                printf("Age:%d\n",variable[g].age);
                int f=0;


            }
        }

    }
    else  {printf("No Command found");}


}
void edit()

{
    int q,p;
    printf("what do youwant to edit?");
    printf("\n");
    printf("Press 1 to Edit Applicant's Name \n");
    printf("Press 2 to edit Applicant's Parents Name \n");
    printf("Press 3 to Edit Applicant's House Address \n");
    printf("Press 4 to Edit Applicant's Aadhar CardNumber\n");
    printf("Press 5 to Edit Applicant's phoneno \n");
    printf("Press 6 to Edit the pincode\n");
    printf("Press 7 to Edit the age\n");
    scanf("%d",&q);
    printf("You have elected %d",q);

    if (q<=5&&q>0)
    {
        /* code */
        printf("Enter the Serial Number of the Applicant \n");
        scanf("%d",&p);
        if (p<num)
        {
            {
                if(q==1)
                {
                    printf("Enter the new name\n");
                    scanf("%s",variable[p].Name);
                }
                else if(q==2)
                {
                    printf("Enter the new Parents name\n");
                    scanf("%s",variable[p].ParentsName);
                }
                else if(q==3)
                {
                    printf("Enter the new Address\n");
                    scanf("%s",variable[p].Houseaddress);
                }
                else if(q==4)
                {
                    printf("Enter the new Aadhar Card Number\n");
                    scanf("%s",variable[p].Aadharcardno);
                }
                else if(q==5)
                {
                    printf("Enter the new phone Number\n");
                    scanf("%s",variable[p].phoneno);
                }
                else if(q==6)
                {
                    printf("Enter the new PinCode\n");
                    scanf("%d",&variable[p].pincode);
                }
                else if(q==7)
                {
                    printf("Enter the new Age\n");
                    scanf("%d",&variable[p].age);
                }

            }
            
        }
        else
        {
            printf("Invalid Serial number.Kindly retry!!!!\n");

        }
        
    }
    else
    {
        printf("Invalid Option!!!!!!!!!!!!!!. please enter the suitable and needy input  \n");

    }

    


}
void del()

{
    int f,h;
    printf("enter the Serial number of the Voter youwish to delete \n");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want to delete\n");
        printf("1.Whole record\n2.Remove Name\n3.Remove ParentsName\n4.Remove Houseaddress\n5.Remove Aadharcardno\n6.Remove phoneno\n7. Remove pincode\n8.Remove Age");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
        {
            
            strcpy(variable[f].Name,variable[f+1].Name);
            strcpy(variable[f].ParentsName,variable[f+1].ParentsName);
            strcpy(variable[f].Houseaddress,variable[f+1].Houseaddress);
            strcpy(variable[f].Aadharcardno,variable[f+1].Aadharcardno);
            strcpy(variable[f].phoneno,variable[f+1].phoneno);
            variable[f].pincode=variable[f+1].pincode;
            variable[f].age=variable[f+1].age;
            f++;

        }
        num--;

        }
        else if(h==2)

        {
            strcpy(variable[f].Name,"Cleared");
        }

        else if(h==3)
        {
            strcpy(variable[f].ParentsName,"Cleared");
        }
        else if(h==4)
        {
            strcpy(variable[f].Houseaddress,"Cleared");
        }

        else if(h==5)
        {
            strcpy(variable[f].Aadharcardno,"Cleared");
        }
        else if(h==6)
        {
            strcpy(variable[f].phoneno,"Cleared");
        }

        else if(h==7)
        {
            variable[f].pincode=0;
        }
        else if(h==8)
        {
            variable[f].age=0;
        }




        
    }
    else
    printf("\n\nInvalid Number\n");
    

}


void write()
{
    FILE *fp=fopen("Voter.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit (1);


    }
    fwrite(variable,sizeof(struct pro),num,fp);

    fclose(fp);

}

void read()
{
    
    FILE *fp=fopen("Voter.txt","r");
    if(fp==NULL)
    {
        //printf("Error")
        //exit (1);
        fp=fopen("Voter.txt","w");
        printf("Congrats!!! the file has been created.\n\n\n");


    }
    num=fread(variable,sizeof(struct pro),100,fp);
    fclose(fp);
}



