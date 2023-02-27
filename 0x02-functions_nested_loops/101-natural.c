#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
int ans = 0, i = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
ans += i;      
}
i++;
}
printf("%d\n", ans);
return (0);

}
