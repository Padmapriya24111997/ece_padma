#include<stdio.h>
#include"div.h"
#include"add.h"
#include"mul.h"
#include"mod.h"
#include"sub.h"
int main()
{
 int a, b, c;
printf("Enter two numbers for arithmetic operation\n");
scanf("%d%d",&a,&b);
add(a,b);
sub(a,b);
mul(a,b);
div(a,b);
mod(a,b);
return 0;
}
