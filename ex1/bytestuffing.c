#include<stdio.h>
#include<string.h>
# include "stdlib.h"
char *remove_new_line(char *data){
   unsigned int n = strlen(data);
   char *res = malloc(sizeof(char)*n);
   int i = 0,j=0;
   for(;data[i] != '\0';i++){
      int temp = (int)data[i]-48;
      if(temp > -1){
        res[j] = data[i];
        j++;
      }
   }
   res[j] = '\0';
   return res;
}
int main()
{
 printf("\nESCAPE character : e");
 printf("\nFlag Value : f");
 char ch1[50],ch2[50];
 char *ch = malloc(sizeof(char) * 50);
 int n,i,count=0,count1=0,j;
 FILE *fp;
 fp=fopen("input.txt","r");
 fgets(ch,50,(FILE*)fp);
 char *res = remove_new_line(ch);
 free(ch);
 ch = res;
 fclose(fp);
 printf("\nInput Data : ");
 n=strlen(ch);
 for(i=0;i<n;i++)
 {
  printf("%c",ch[i]);
 }
 j=0;
 for(i=0;i<n;i++)
 {
  if(ch[i]=='f')
  {
   ch1[j]='e';
   j++;
   ch1[j]=ch[i];
  }
  else if(ch[i]=='e')
  {
   ch1[j]='e';
   j++;
   ch1[j]=ch[i];
  }
  else
  {
   ch1[j]=ch[i];
  }
  j++;
 }
 for(i=j-1;i>=0;i--)
 {
  ch1[i+1]=ch1[i];
  count++;
 }
 ch1[0]='f';
 ch1[count+1]='f';
 count+=2;
 printf("\nStuffed Data \n");
 for(i=0;i<count;i++)
 {
  printf("%c",ch1[i]);
 }
 printf("\nDestuffed Data\n");
 j=0;
 int k=0;
 for(i=1;i<count-1;i++)
 {
  if(ch1[i]=='e')
  {
   ch2[k]=ch1[i+1];
   k++;
   i++;
  }
  else
  {
        ch2[k]=ch1[i];
        k++;
  }
 }
 for(i=0;i<k;i++)
 {
  printf("%c",ch2[i]);
 }
 printf("\n");
 return 0;
}

