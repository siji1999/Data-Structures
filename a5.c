#include <stdio.h>
int main()
{
int s[5] = {89, 76, 98, 91, 84}, i;
printf("\n---Students marks details--- ");
for(i = 0; i < 5; i++)
{
printf("\ns%d = %d ", i + 1, s[i]);
}
return 0;
}
