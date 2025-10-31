#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
int i;
int total = atoi(argv[1]);
if(argc == 2)
{
for (i = 0; total > 0;)
{
if (total >= 25)
{
total -= 25;
i++;
}
else if (total >= 10)
{
total -= 10;
i++;
}
else if (total >= 5)
{
total -= 5;
i++;
}
else if (total >= 2)
{
total -= 2;
i++;
}
else if (total >= 1)
{
total -= 1;
i++;
}
else
{
printf("Error\n");
return (1);
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", i);
return (0);
}
