include<stdio.h>
void main()
{
  float w,h,bmi;
printf("enter the weight of the body");
scanf("%f",&w);
printf("enter the height of the body");
scanf("%f",&h);
bmi= w/(h*h);
printf("the BMI value is%f",bmi);
if(bmi<18.5)
  printf("it is in underweight");
else
  if(bmi>=18.5&&bmi<25)
    printf("it is normal");
else
    if(bmi>=25&&bmi<30)
      printf("it is overweight");
else
      printf("it is obese");
}
