# include <stdio.h> 
# include <conio.h> 
void main() 
{ 
 int s1=-1,s2=1,s3=0,i1,n,sum = 0 ; 
 clrscr() ; 
 printf("\n Enter the limit:") ; 
 scanf("%d", &n) ; 
 printf("\nThe fibonacci series is :\n\n") ; 
 for(i1=1;i1<=n;i1++) 
 { 
 s3 = s1 + s2 ; 
  printf("%d \t",s3) ; 
  sum = sum+s3 ; 
  s1=s2 ; 
  s2= s3 ; 
 } 
 printf("\n\nThe sum of the fibonacci series is: %d", sum) ; 
 getch() ; 
} 
