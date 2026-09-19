#include<stdio.h>
int main()
{
 char str[40] ;
 char *ptr = str;
 char *left =str;
 char *right ;
 int n=0;
 printf("enter your favorate word and max size is 40 characters:");
 scanf("%s",str);
 while(*(ptr+n) != '\0' )
 {
   n++;
 }

 printf("n:%d",n);
 right = ptr+n-1;
 while(left<right)
 {
    char temp = *left;
    *left = *right;
    *right = temp;
    left++;
    right--;

 }
 printf("reversed string :%s",str);
 return 0;
    
}