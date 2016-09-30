#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line1[3000],line2[3000];
    char *p;
    int numberA[100],numberB[100];
    int i=0;
    fgets(line1,3000,stdin);
    fgets(line2,3000,stdin);
    p=strtok(line1," ");
    sscanf(p,"%d",&numberA[i]);
    i++;
    while(p=strtok(NULL," "))
    {
        sscanf(p,"%d",&numberA[i]);
        i++;
    }
    i=0;
    p=strtok(line2," ");
    sscanf(p,"%d",&numberB[i]);
    i++;
    while(p=strtok(NULL," "))
    {
        sscanf(p,"%d",&numberB[i]);
        i++;
    }
    printf("%d %d",numberA[0],numberA[7]);
    printf("%d %d",numberB[0],numberB[7]);
    return 0;
}
