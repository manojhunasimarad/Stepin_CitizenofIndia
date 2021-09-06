#include <VMS.h>
int n,index1,index2=0,a=0,sum=0,g,flag,num;
void add()
{
    printf("\n");
    printf("The number of entries you entered =%d\n\n\n",num);//how much of the inputs are provide starting from zero
    printf("The number of entries you wish to add =\n");
    scanf("%d",&n);
    sum=n+num;

    for(index1=num,index2=0; index1<sum; index1++)
    {
        printf("\n");
        // fflush(stdin);
        printf("Please Enter the Applicant's name :");
        scanf("%s",x[index1].Applicant_name);
        // fflush(stdin);
        printf("Enter the House Address = ");
        scanf("%s",x[index1].Houseaddress);
        // fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&x[index1].age);
        // fflush(stdin);
        printf("Enter Aadhar Number = ");
        scanf("%d",&x[index1].AadharNumber);
        // fflush(stdin);
        printf("Enter phone number = ");
        scanf("%d",&x[index1].phone);
        // fflush(stdin);
        printf("\n");
        index2++;
        a++;
        num++;
    }
}
void view()
{
    for(index1=0; index1<num; index1++)
    {
        printf("\n");
        printf("Serial Number=%d\n",index1);
        printf("Applicant name = ");
        puts(x[index1].Applicant_name);
        printf("House Address = ");
        puts(x[index1].Houseaddress);
        printf("AadharNumber = %d\nPhone number = 0%d\nAge=%d",x[index1].AadharNumber,x[index1].phone,x[index1].age);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    // fflush(stdin);
    printf("Do you want to edit ?\n");
    printf("if yes Please Enter your option\n");
    printf("1.Applicant_name\n2.House Address\n3.Age\n4.AadharNumber\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of the Applicant= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                // fflush(stdin);
                printf("Enter the new Applicant_name=");
                scanf("%s",x[p].Applicant_name);

            }
            else if(q==2)
            {
                //fflush(stdin);
                printf("Enter the new House Address=");
                scanf("%s",x[p].Houseaddress);
            }
            else if(q==3)
            {
                //fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
                //fflush(stdin);
                printf("Enter the new AadharNumber=");
                scanf("%d",&x[p].AadharNumber);
            }

            else if(q==5)
            {
                //fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search()
{
    int s,h;
    char u[100];
    printf("the criteria you wish to search is?\n");
    printf("1.Serial no.\n2.Applicant_name\n3.House Address\n4.AadharNumber.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the Applicant");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Applicant_name = ");
            puts(x[s].Applicant_name);
            printf("House Address = ");
            puts(x[s].Houseaddress);
            printf("AadharNumber = %d\nPhone number = 0%d\nAge = %d",x[s].AadharNumber,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNo Data Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        // fflush(stdin);
        printf("Enter your Applicant_name=");
        scanf("%s",u);
        // fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].Applicant_name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Applicant_name = ");
                puts(x[g].Applicant_name);
                printf("House Address = ");
                puts(x[g].Houseaddress);
                printf("Aadhar Number = %d\nPhone number = 0%d\nAge = %d",x[g].AadharNumber,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNo Data Found\n");



    }
    else if(h==3)
    {
        int f=1;
        // fflush(stdin);
        printf("Enter House Address = ");
        scanf("%s",u);
        // fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].Houseaddress)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Applicant name = ");
                puts(x[g].Applicant_name);
                printf("House Address = ");
                puts(x[g].Houseaddress);
                printf("Aadhar Number = %d\nPhone number = 0%d\nAge = %d",x[g].AadharNumber,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Aadhar Number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].AadharNumber)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Applicant Name = ");
                puts(x[g].Applicant_name);
                printf("Houseaddress = ");
                puts(x[g].Houseaddress);
                printf("Aadhar Number = %d\nPhone number = 0%d\nAge = %d",x[g].AadharNumber,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("No Data Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Applicant's Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Applicant_name = ");
                puts(x[g].Applicant_name);
                printf("House Address = ");
                puts(x[g].Houseaddress);
                printf("AadharNumber = %d\nPhone number = 0%d\nAge = %d",x[g].AadharNumber,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Applicant_name = ");
                puts(x[g].Applicant_name);
                printf("Houseaddress = ");
                puts(x[g].Houseaddress);
                printf("AadharNumber = %d\nPhone number = 0%d\nAge = %d",x[g].AadharNumber,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");




}
void del()
{
    int f,h;
    printf("Enter the serial number of the applicant that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Applicant_name\n3.Remove Houseaddress\n4.Remove age\n5.Remove AadharNumber\n6.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].Applicant_name,x[f+1].Applicant_name);
                strcpy(x[f].Houseaddress,x[f+1].Houseaddress);
                x[f].age=x[f+1].age;
                x[f].AadharNumber=x[f+1].AadharNumber;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].Applicant_name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].Houseaddress,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].AadharNumber=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("Applicant.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("Applicant.txt","w");
        // fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
/*
void write()
{
    FILE *fp = fopen("Applicant.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
*/
