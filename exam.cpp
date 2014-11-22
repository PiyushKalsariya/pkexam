#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
//Declaration part(function 1)
int CA1,CA2,TermPaper,Best1,Best2,cal1,cal2,cal;
cout<<"Enter the value of CA 1";
cin>>CA1
cout<<"Enter the value of CA2";
cin>>CA2
cout<<"Enter the value of Termpaper";
cin>>TermPaper

//Find the best two (function 2)
if(CA1>CA2)
{
   if(CA1>CA3)
	{
		 Best1 = CA1;
        }
   else
	{
		Best2 = CA2;
        }
}
else
{
if(CA2>CA3)
 {
   Best1 = CA1;
 }
else
 {
  Best2 = CA2;
 }
}

//Calculate total from 20
cal1 = Best1/3;
cal2 = Best2/3;
cal = cal1+cal2;
cout<<"\n total marks from best two ca is"<<cal;


}