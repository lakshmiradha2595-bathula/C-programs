include<stdio.h>
void main()
{
  int id, p;
printf("enter student id number");
scanf("%d",&id);
if(id==101)
{
  printf("enter the password");
scanf("%d",&p);
if(p==4321)

  printf("login successful");
else
  printf("incorrect password");
}
else
{
  printf("user not found");
}
}
