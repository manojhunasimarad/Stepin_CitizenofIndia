/**
 * @file HMS.h
 * @author Manoj Hunasimarad(manojsumya@dgmail.com)
 * @brief Voter-Id database Management syetem
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef  __VMS_H__
#define __VMS_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct pro
{
    char Name[50],ParentsName[50],Houseaddress[100],Aadharcardno[12],phoneno[10];;
    int pincode,age;
}variable[100];

void read();
void add();
void view();
void search();
void edit();
void del();
void show();




#endif


