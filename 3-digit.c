#include <stdio.h>
 
int check(int n)
{
   
   int reverse = 0;
   int temp;
 
    
   temp = n;
 
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
 
   if ( n == reverse )
      return 1; //printf("%d is a palindrome number.\n", n);
   else
      return 0; //("%d is not a palindrome number.\n", n);
 
   //return 0;
}

main(){
    int x;
    int result;
    int num1;
    int num2;
    int my;
 
    for(num1=100;num1<999;num1++){
        for(num2=100;num2<999;num2++){
            x=num1*num2;
            result=check(x);
            if(result==1)
               my=x;     
        }
    
    
    }
    printf("%d",my);
    
}