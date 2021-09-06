/**
 * @file HMS.h
 * @author Shaik MOhammed Feroz(mohammedferoz17@dgmail.com)
 * @brief Hospital Management syetem
 * @version 0.1
 * @date 2021-07-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HMS_H__
#define __HMS_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[100];

void read();
void add();
void view();
void search();
void edit();
void del();
void show();

#endif
