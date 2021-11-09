#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

int main()
{
 char *p,*q;
 char temp;
 char in[MAXSIZE];
 char stuff[MAXSIZE];
 char destuff[MAXSIZE];
 int count=999;

 printf("enter the input character string (0s & 1s only):\n");
 scanf("%s",in);
 p=in;
 q=stuff;
 while(*p!='\0')
 {
  *q = *p;
  q++;
  if(*p=='0'){
	  count = 0;
  }
  else if(count != 999){
	  count++;
  }
  
  if(count == 5){
	  *q = '0';
	  q++;
  }
  p++;
 }
 *q='\0';
 char *res = stuff;
 char flag[9] = "0111110";
 char result[100];
 printf("\nstuffed character string is");
 sprintf(result,"%s%s%s",flag,res,flag);
 printf("\n%s\n",result);
 p=stuff;
 q=destuff;
 count = 999;
 while(*p!='\0')
 {
   if(*p=='0'){
	   if(count == 5){
		   p++;
	   }
	   count = 0;
   }
   else if(count != 999)
	   count++;
   *q = *p;
   p++;
   q++;
 }
 *q='\0';
 printf("\ndestuffed character string is");
 printf("\n%s\n",destuff);
 return 0;
}



