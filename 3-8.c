#include <stdio.h>

int main(void) 
{   
    
   int n1,n2,n3;
   
   puts("请输入两个整数。");
   printf("整数1:\n");    scanf("%d",&n1);
   printf("整数2:\n");    scanf("%d",&n2);
   
   if(n1>n2)
        n3=n1-n2;
    else
        n3=n2-n1;
        
   printf("它们的差是%d。\n",n3);
   
   
	return 0;
}