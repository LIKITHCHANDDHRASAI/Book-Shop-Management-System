#include<stdio.h> 
int main() 
{ 
int a,phoneno[10]; 
float b,Tax; 
char name[50]; 
printf("\n\t************"); 
printf("\n\t*------------------------------*"); 
printf("\n\t*!!!!!!!!! *WELCOME !!!!!!!!!!**");  
printf("\n\t*------------------------------*"); 
printf("\n\t************"); 
printf("\n\t**----*SRM BOOK STORE*----**"); 
printf("\n\t                                  "); 
printf("\n\t                                  "); 
printf("\n\tENTER YOUR NAME:"); 
scanf("%s",name); 
printf("\n\tENTER YOUR PHONE NO:"); 
scanf("%d",phoneno); 
printf("\n\tFOLLOWING BOOKS AND THEIR      
INR(PRICES) :");     
printf("\n\t                                  "); 
15 | Page 
 
printf("\n\t************"); 
printf("\n\t************"); 
printf("\n\t                                  "); 
printf("\n\t================================
 =="); 
printf("\n\t================================
 =="); 
printf("\n\t== SN:=BOOKNAME:         =PRICE =="); 
printf("\n\t================================
 =="); 
printf("\n\t== 01:=PHYSICS BOOK      =   50 =="); 
printf("\n\t== 02:=MATHS BOOK        =   60 =="); 
printf("\n\t== 03:=CSE BOOK          =   70 =="); 
printf("\n\t== 04:=ENVIRONMENT BOOK  =   80 
=="); 
printf("\n\t== 05:=HISTORY BOOK      =   90 =="); 
printf("\n\t== 06:=CHEMISTRY BOOK    =  100 =="); 
printf("\n\t== 07:=BIOLOGY BOOK      =  120 =="); 
printf("\n\t================================
 =="); 
printf("\n\t================================
 =="); 
printf("\n\tENTER THE SERIAL NUMBER (SN) OF 
THE BOOK :  "); 
16 | Page 
 
scanf("%d",&a); 
printf("\n\tENTER THE QUANTITY OF THE BOOK : 
"); 
scanf("%f",&b); 
switch(a) 
{ 
case(1): 
printf("\n\tYOUR  PHYSICS BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",50*b); 
Tax=0.125*(50*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(50*b)); 
printf("\n\t=========================="); 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(50*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
case(2): 
17 | Page 
 
printf("\n\tYOUR  MATHS BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",60*b); 
Tax=0.125*(60*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(60*b)); 
printf("\n\t========================="); 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(60*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
case(3): 
printf("\n\tYOUR  CSE BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",70*b); 
Tax=0.125*(70*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(70*b)); 
printf("\n\t========================="); 
18 | Page 
 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(70*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
case(4): 
printf("\n\tYOUR  ENVIRONMENT BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",80*b); 
Tax=0.125*(80*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(80*b)); 
printf("\n\t========================="); 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(80*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
19 | Page 
 
printf("\n\t-----------*------------"); 
break; 
case(5): 
printf("\n\tYOUR  HISTORY BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",90*b); 
Tax=0.125*(90*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(90*b)); 
printf("\n\t=========================="); 
printf("\n\tyou should pay = Rs. %4.2f",Tax+(90*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
case(6): 
printf("\n\tYOUR  CHEMISTRY BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",100*b); 
Tax=0.125*(100*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
20 | Page 
 
printf("\n\tTotal price = Rs. %4.2f",Tax+(100*b)); 
printf("\n\t========================="); 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(100*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
case(7): 
printf("\n\tYOUR  BIOLOGY BOOK x %f",b); 
printf("\n\tBase price = Rs.%4.2f",120*b); 
Tax=0.125*(120*b); 
printf("\n\tTax @12.5% = Rs.%4.2f",Tax); 
printf("\n\tTotal price = Rs. %4.2f",Tax+(120*b)); 
printf("\n\t========================="); 
printf("\n\tyou should pay = Rs. 
%4.2f",Tax+(120*b)); 
printf("\n\t=========================="); 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
21 | Page 
 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
default: 
printf("\n\t**********"); 
printf("\n\t**      THANK YOU       **"); 
printf("\n\t**********"); 
printf("\n\t PLESE VIST ANGIN*****"); 
printf("\n\t-----------*------------"); 
break; 
} 
return 0; 
} 
