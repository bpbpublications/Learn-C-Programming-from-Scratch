#include <stdio.h>  
int main () {  
int age; 
char g; 
printf("Input gender - m or f\n");
scanf ("%c", &g);
 printf("Input age\n"); 
scanf ("%d", &age);    
if (g == 'm')
{	//if male 
      if (age>=50) 
{		//if age>=50            	 
printf("2000 is your bonus\n"); 
       } 
       else 
{	//male but age<50 
     		printf("1500 is your bonus \n"); 
      	} 
} 
else if (g == 'f') 	 	 	//if female 
{ 	
if (age>=50)
{		//female and age>50 
printf("3000 is your bonus\n");           
} 
else
{				// female and age<50 
printf("2500 is your bonus \n"); 
} 
} 
else 
{
printf("Other gender"); 
} 
return (0); 
}
