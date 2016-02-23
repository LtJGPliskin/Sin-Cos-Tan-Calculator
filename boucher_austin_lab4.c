#include <math.h>
#include <stdio.h>
int k, y, z, b;//sets the ints
char* a;//sets the char
double o, l;//sets the doubles
double x = 3.14159;//sets the value of pie
int userpromt(void)//prompts the user
{
  printf("Please choose an option: (0) Sine (1) Cosine (2) Tangent (3) QUIT\nEnter your choice > ");//prompts the users
  scanf("%d", &y);//scans for input
  if(y < 0)//sets boundries
    {
      printf("%d is an invalid option. Please try again.\n", y);//tells the user their input is wrong
      userpromt();//reruns the prompt running into errors
    }
  if(y > 3)//sets boundries
    {
      printf("%d is an invalid option. Please try again.\n", y);//tells the uers their input is wrong
      userpromt();//reruns the prompt running into errors
    }
  runprogram(y);//passes the input into further programs
}
int runprogram(p)//runs the program based on what is inputted
{
  z = 0;//resets the loop limit
  switch(p)//switches based on p values
   {
   case 0://runs the sin function if p is 0
     {
       b = 7;
       a = "sin";
       for(k = 0; k < b; k++)
	 {
	   l = (x * z / 180);
	   l = sin(l);
	   printf("\%s(%d) = %.4lf\n", a, z, l);
	   z = z + 15;
	 }
     break;
     }
   case 1://runs the cosine function if p is 1
     {
       b = 7;
       a = "cos";
       for(k = 0; k < b; k++)
	 {
	   l = (x * z / 180);
	   l = cos(l);
	   printf("\%s(%d) = %.4lf\n", a, z, l);
	   z = z + 15;
	 }
     break;
     }
   case 2://runs the tangent function if p is 2
     {
       b = 6;
       a = "tan";
       for(k = 0; k < b; k++)
	 {
       l = (x * z / 180);
       l = tan(l);
       printf("\%s(%d) = %.4lf\n", a, z, l);
       z = z + 15;
	 }
     break;
     }
   case 3://ends the prompt if p is 3
    {
    printf("You chose QUIT. Thank you, come again!\n");
    return(0);
    }
   }
  if(b == 6)//runs a final loop if b is 0
   {
     printf("\%s(%d) is UNDEFINED\n", a, z);
   }
  userpromt();//runs an infinate loop until p is 3
}
int main(void)//runs the program
{
  userpromt();//starts the program
}
