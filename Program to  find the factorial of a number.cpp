//write a c program to check whether the given number is pslindrome or not
#include <stdio.h>
int main()
{
	int a,b,c,rev=0,t;
	printf("Enter the value: ");
	scanf("%d",&a);
	t=a;
for (b=a;b>0;)
{    c=b%10;
      rev=rev*10+c;
      b=b/10;
      }
      if(t==rev)
      {
      printf("%d is equal to %d Hence the given number is palandrome",t,rev);
    }else
  {printf("the given number is not a palandrome");
  }
}
