#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define Pi 3.14
int main()
{

   /*
    //***************************1.Write a C program to perform input output of all basic data types**********************************
    char x1;
    unsigned char x2;

    int y1;
    unsigned int y2;

    float z1;

    short z2;
    unsigned short z3;

    double q1;
    long double q2;

    long a;
    long long a2;
    unsigned long a3;

    printf("enter your char number , please ! ");
    //scanf("%c",&x1);
    x1= getchar();
    printf("enter your unsigned char number , please ! ");
   // scanf("%c",&x2);
    x2= getchar();
    printf("enter your int number , please ! ");
    scanf("%d",&y1);

    printf("enter your unsigned int number , please ! ");
    scanf("%lu",&y2);

    printf("enter your float number , please ! ");
    scanf("%f",&z1);

    printf("enter your short number , please ! ");
    scanf("%hi",&z2);

    printf("enter your unsigned short number , please ! ");
    scanf("%hu",&z3);

    printf("enter your double number , please ! ");
    scanf("%lf",&q1);

    printf("enter your long double number , please ! ");
    scanf("%Lf",&q2);

    printf("enter your long number , please ! ");
    scanf("%ld",&a);

    printf("enter your long long number , please ! ");
    scanf("%lld",&a2);

    printf("enter your unsigned long long number , please ! ");
    scanf("%llu",&a3);

    printf("you entered %c\n",x1);
    printf("you entered %c \n",x2);
    printf("you entered %d \n",y1);
    printf("you entered %lu \n",y2);
    printf("you entered %f \n",z1);
    printf("you entered %hi \n",z2);
    printf("you entered %hu \n",z3);
    printf("you entered %lf \n",q1);
    printf("you entered %Lf \n",q2);
    printf("you entered %ld \n",a);
    printf("you entered %lld \n",a2);
    printf("you entered %lu \n",a3);

*/


/*
//*****************2.Write a C program to input two numbers from user and calculate their sum******************
    int num1,num2;
    printf("enter two number! ");
    scanf("%d %d",&num1,&num2);
    printf("sum= %d",num1+num2);

*/

/*
//**********************3.C program to perform all arithmetic operations**********************
   int num1,num2;
   printf("enter two number! ");
   scanf("%d %d",&num1,&num2);
   if(num1>num2)
   {
   printf("sum= %d \n",num1+num2);
   printf("Difference= %d\n",num1-num2);
   printf("Product= %d \n",num1*num2);
   printf("Quotient= %d\n",num1/num2);
   printf("Modulus= %d\n",num1%num2);
   }


*/

/*
//************************4.Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle******************
   int length,width ,perimeter ;
   printf("enter length and width");
   scanf("%d %d",&length,&width);
   perimeter=2*(length+width);
   printf("Perimeter of rectangle =%d units",perimeter);


*/

/*
//*********************5.Write a C program to input length and width of a rectangle and find area of the given rectangle**************
   int length,width;
   printf("enter length and width");
   scanf("%d %d",&length,&width);
   printf("Area of rectangle =%d sq. units",length*width);

*/
/*
//**************6.Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle************

  int radius ,Diameter ;
  float Circumference,Area;
  printf("enter radius");
  scanf("%d",&radius);
  Diameter = 2*radius;
  Circumference = 2*Pi*radius;
  Area = Pi*radius*radius;
  printf("Diameter= %d units\n",Diameter);
  printf("Circumference= %.2f units\n",Circumference);
  printf("Area= %f units\n",Area);


*/

/*
//*****************7.Write a C program to input length in centimeter and convert it to meter and kilometer**************
  float length , L_meter ,L_kilometer;
  printf("Enter length in centimeter = ");
  scanf("%f",&length);
   L_meter =length/100.0;
   L_kilometer =length/100000.0;
  printf("Length in meter =%f m \n",L_meter);
  printf("Length in kilometer =%f km \n",L_kilometer);

*/
/*
//***********8.Write a C program to input temperature in Centigrade and convert to Fahrenheit.************8

  float temp;
  printf("Enter temperature in Celsius = ");
  scanf("%f",&temp);
  float T_Fahrenheit=(temp*9/5+32);
  printf("Temperature in Fahrenheit = %.0f F",T_Fahrenheit);

*/


/*

//************9.Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.*********************
  float temp,T_celsius;
  printf("Temperature in fahrenheit =");
  scanf("%f",&temp);
  T_celsius=(temp-32)*5/9;
  printf("Temperature in celsius =%.2f C",T_celsius);

*/


/*
//***********************10.Write a C program to input number of days from user and convert it to years, weeks and days. **************************
  int day,week,year;
  printf("Enter days:");
  scanf("%d",&day);
  year = day/365;
  week= (day % 365)/7;
  day=day-((year*365)+(week*7));
  printf(" %d year/s, %d week/s and %d day/s",year,week,day);

  */


/*
//*****************11.Write a C program to input two numbers from user and find their power using pow() function.****************

  double num1,num2,power;
  printf("enter base");
  scanf("%lf",&num1);
  printf("enter exponent");
  scanf("%lf",&num2);
  power = pow(num1,num2);
  printf("%.2lf ^%.2lf = %.2lf",num1,num2,power);

*/

/*
//**********12.Write a C program to input a number and find square root of the given number**************

  int num , square;
  printf("Enter any number:");
  scanf("%d",&num);
  square = sqrt(num);
  printf("Square root of %d =%d",num,square);

*/

/*
//**************13.Write a C Program to input two angles from user and find third angle of the triangle.***********
  float angle1,angle2,angle3;
  printf("Enter first angle: ");
  scanf("%f",&angle1);
  printf("Enter second angle: ");
  scanf("%f",&angle2);
  angle3 = 180-(angle1+angle2);
  printf("Third angle = %.0f",angle3);
*/


/*
//************14.Write a C program to input base and height of a triangle and find area of the given triangle.************
   float base,height,area;
   printf("Enter base of the triangle:");
   scanf("%f",&base);
   printf("Enter height of the triangle:");
   scanf("%f",&height);
   area =.5*base*height;
   printf("Area of the triangle = %.0f sq. units",area);
*/

/*
//*********15.Write a C program to input side of an equilateral triangle from user and find area of the given triangle.*************

   float side,area;
   printf("Enter side of the equilateral triangle:");
   scanf("%f",&side);
   area =(sqrt(3) / 4) * (side * side);
   printf("Area of equilateral triangle =%.1f  sq. units",area);

*/

/*
//***********16.Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects.***********
  float sub1,sub2,sub3,sub4,sub5,total,avrg,percent;
  printf("Enter marks of five subjects: ");
  scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
  total = sub1+sub2+sub3+sub4+sub5;
  avrg = total/5;
  percent = (total *100)/500;
  printf("Total =%.0f",total);
  printf("average= %.0f",avrg);
  printf("Percentage = %.2f",percent);

*/

/*
//**********17.Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.************
   float principle,time ,rate,SI;
   printf("Enter principle:");
   scanf("%f",&principle);
   printf("Enter time:");
   scanf("%f",&time);
   printf("Enter rate:");
   scanf("%f",&rate);
   SI=(principle*time*rate)/100;
   printf("Simple Interest = %f",SI);
*/


//***********18.Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest. *************
   float P,R,T,CI;
   printf("Enter principle (amount):");
   scanf("%f",&P);
   printf("Enter time:");
   scanf("%f",&T);
   printf("Enter rate:");
   scanf("%f",&T);
   //power =pow(1+(R/100),T);
   CI=P*(pow((1+R/100),T));
   printf("Compound Interest = %f",CI);












    return 0;
}
