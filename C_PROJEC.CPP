#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <windows.h>
#include<stdlib.h>
#include "fcn.h"
#include "horoscopes.h"
#include<math.h>
int main();


struct birthdate{
    int year;
    int month;
    int day;
                };

struct loginfo{
    char name[50];
    char sex;
    int yr,mn,dy;
        }a;

int main()
	{
		system("cls");
		int j;
		FILE *fp;
		struct birthdate bd;
        //welcomescreen();
        {//taking input of date of birth
        delay(1);
        gotoxy(45,18);printf("just enter your date of birth");
        gotoxy(45,19);printf("YEAR: ");
            scanf("%d",&bd.year);
        gotoxy(45,20);printf("MONTH: ");
            scanf("%d",&bd.month);
        gotoxy(45,21);printf("DAY: ");
            scanf("%d",&bd.day);
            fflush(stdin);
        }
        {//checking errors
        //CHECKS FOR ERROR FIRST TIME
        if((bd.month>12)||(bd.month==2&&bd.day>=30)||(bd.month==1,3,5,7,8,10,12&&bd.day>31)||(bd.month==2,4,6,9,11&&bd.day>30)||(2010-bd.year>100)||(bd.year>2010))
            {
                system("cls");
                gotoxy(30,10);printf("THE ENTRY YOU MADE WAS WRONG.....");
                gotoxy(10,11);printf("PLEASE ENTER CORRECT DATE OF BIRTH ACCORDING TO GREGORIAN CALENDAR");
                gotoxy(45,18);printf("just enter your date of birth");
                gotoxy(45,19);printf("YEAR: ");
                    scanf("%d",&bd.year);
                gotoxy(45,20);printf("MONTH: ");
                    scanf("%d",&bd.month);
                gotoxy(45,21);printf("DAY: ");
                    scanf("%d",&bd.day);
                    fflush(stdin);
            }
        //CHECKS FOR ERROR SECOND TIME
        if((bd.month>12)||(bd.month==2&&bd.day>=30)||(bd.month==1,3,5,7,8,10,12&&bd.day>31)||(bd.month==2,4,6,9,11&&bd.day>30)||(2010-bd.year>100)||(bd.year>2010))
            {
                gotoxy(45,22);printf("WRONG ENTRY");
                gotoxy(38,23);
                delay(1);
                printf("THE PROGRAM RESTARTS IN %d SECONDS",3);
                delay(1);
                gotoxy(38,23);
                printf("THE PROGRAM RESTARTS IN %d SECONDS",2);
                delay(1);
                gotoxy(38,23);
                printf("THE PROGRAM RESTARTS IN %d SECONDS",1);
                delay(1);
                gotoxy(38,23);
                printf("THE PROGRAM RESTARTS IN %d SECONDS",0);
                main();
            }
        }
        a.yr=bd.year;
        a.mn=bd.month;
        a.dy=bd.day;
        //taking names for records
        {
        system("cls");
        gotoxy(12,5);printf("REGISTRY DETAILS");
        gotoxy(12,6);printf("------------------------------------------------------------------");
        gotoxy(12,9);printf("------------------------------------------------------------------");
        gotoxy(17,7);printf("Enter Full Name:  ");
                     gets(a.name);
                     fflush(stdin);
        gotoxy(17,8);printf("Enter Sex:  ");
                     a.sex=getchar();

        gotoxy(50,23);printf("press any key to continue.....");
                      getch();
        }

        if((fp=fopen("records.txt","ab"))==NULL)
            exit(0);
        fwrite(&a,sizeof(a),1,fp);
        {//separating horoscopes and calling respective functions
        if((bd.month==3&&bd.day>=21)||(bd.month==4&&bd.day<=19))
            aries(bd.day,bd.year,a.name,a.sex);
        if((bd.month==4&&bd.day>=20)||(bd.month==5&&bd.day<=20))
            taurus(bd.day,bd.year,a.name,a.sex);
        if((bd.month==5&&bd.day>=21)||(bd.month==6&&bd.day<=20))
            gemini(bd.day,bd.year,a.name,a.sex);
        if((bd.month==6&&bd.day>=21)||(bd.month==7&&bd.day<=22))
            cancer(bd.day,bd.year,a.name,a.sex);
        if((bd.month==7&&bd.day>=23)||(bd.month==8&&bd.day<=22))
            leo(bd.day,bd.year,a.name,a.sex);
        if((bd.month==8&&bd.day>=23)||(bd.month==9&&bd.day<=22))
            virgo(bd.day,bd.year,a.name,a.sex);
        if((bd.month==9&&bd.day>=23)||(bd.month==10&&bd.day<=22))
            libra(bd.day,bd.year,a.name,a.sex);
        if((bd.month==10&&bd.day>=23)||(bd.month==11&&bd.day<=21))
            scorpio(bd.day,bd.year,a.name,a.sex);
        if((bd.month==11&&bd.day>=22)||(bd.month==12&&bd.day<=21))
            saggitarius(bd.day,bd.year,a.name,a.sex);
        if((bd.month==12&&bd.day>=22)||(bd.month==1&&bd.day<=19))
            capricorn(bd.day,bd.year,a.name,a.sex);
        if((bd.month==1&&bd.day>=20)||(bd.month==2&&bd.day<=18))
            aquarius(bd.day,bd.year,a.name,a.sex);
        if((bd.month==2&&bd.day>=19)||(bd.month==3&&bd.day<=20))
            pisces(bd.day,bd.year,a.name,a.sex);
        }


		return 0;
	}
