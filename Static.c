#include <stdio.h>
void disp()
{
static int i = 1;
printf(“%d”,i);
i++;
}
int main()
{

    disp();
    disp();
    disp();

    return 0;
}
