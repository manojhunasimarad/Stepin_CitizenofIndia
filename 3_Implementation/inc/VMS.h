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

#ifndef __VMS_H__
#define __VMS_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char wardno[30];
    int pincode,phone,age;
} x[100];

void read();
void add();
void view();
void search();
void edit();
void del();
void show();

#endif
