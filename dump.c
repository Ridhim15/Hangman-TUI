#include <stdio.h>
#include <conio.h>
void BASIC_SALARY(){
    int sal;
    float da,ra,sum;
    printf("Enter your basic salary\n");
    scanf("%d",&sal);
    da=sal*40/100;
    printf("Your dearness allowance is=%f",da);
    printf("\n");
    ra=sal*20/100;
    printf("Your house rent allowance is=%f",ra);
    printf("\n");
    sum=sal+da+ra;
    printf("Your gross salary is=%f\n",sum);

}
void calc_dist(){
    //(b)distance
    float dist,m,f,inch,cm;
    printf("Enter the distance in Km\n");
    scanf("%f",&dist);
    m=dist*1000;
    cm=dist*100000;
    f=dist*3281;
    inch=dist*39370;
    printf("Distance in meters=%f \n",m);
    printf("Distance in centi meters=%f \n",cm);
    printf("Distance in feet=%f \n",f);
    printf("Distance in inches=%f \n",inch);

}
void marks(){
    //(c)marks
    unsigned int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of subject 1");
    scanf("%d",&sub1);
    printf("Enter marks of subject 2");
    scanf("%d",&sub2);
    printf("Enter marks of subject 3");
    scanf("%d",&sub3);
    printf("Enter marks of subject 4");
    scanf("%d",&sub4);
    printf("Enter marks of subject 5");
    scanf("%d",&sub5);
    unsigned int b4=(sub1+sub2+sub3+sub4)/400;
}


void celcius_conversion(){
    float f,c;
    printf("Enter the temperature in fahrenheit \n");
    scanf("%f",&f);
    c=(f-32)*5.0/9;
    printf("Temperature in Celcius is : %f",c);
}

void calc_perimeter(){
    //(d)perimeter
    const float pi=3.1415926535897932384626433832795028;
    float calc,l,b,r;
    printf("Enter the length of the rectangle \n");
    scanf("%f",&l);
    printf("Enter the width of the rectangle \n");
    scanf("%f",&b);
    printf("Enter the radius of the circle \n");
    scanf("%f",&r);
    calc=l*b;
    printf("Area of the rectangle is : %f \n",calc);
    calc=2*(l+b);
    printf("Perimeter of the rectangle is : %f \n",calc);
    calc=pi*(r*r);
    printf("Area of the circle is : %f \n",calc);
    calc=2*pi*r;
    prinf("Circumference of the circle is : %f",calc);
}

void Paper_size(){
    //(e)paper_size
    float w,h;
}
