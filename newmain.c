#include <xc.h>
int CalcSum(int n);

void main(void) {
 int result = 0;
 result = result + 5;
 int sum = CalcSum(3);
 result = sum + 100;
 while(1);
}

int CalcSum(int n)
{
 int sum = 0;
 for(int i = 0; i < n; i++)
 {
 sum = sum + i;
 }
 return sum;
}

