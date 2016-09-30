#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define statck_max_size 5

typedef struct
{
    int Carriage_number;
} StationC;

int main()
{

    char line1[3000],line2[3000];
    char *p;
    int numberA[100],numberB[100];
    int i=0,j=0,total_Carriage;
    /***************************/
    int top=-1;
    StationC tmpeStationC[statck_max_size];
    /**************************/
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
    total_Carriage=i;
    i=0;
    p=strtok(line2," ");
    sscanf(p,"%d",&numberB[i]);
    i++;
    while(p=strtok(NULL," "))
    {
        sscanf(p,"%d",&numberB[i]);
        i++;
    }
    i=0,j=0;
    while(1)
    {
        if(top>5)
        {
            break;
        }
        else if(top==-1)
        {
            if(numberA[i]==numberB[j])
            {
                i++,j++;
                if(i>total_Carriage)
                {
                    break;
                }
            }
            else
            {
                top++;
                tmpeStationC[top].Carriage_number=numberA[i];
                i++;
            }

        }
        else
        {
            if(tmpeStationC[top].Carriage_number==numberB[j])
            {
                top--;
                j++;
            }
            else
            {
                if(numberA[i]==numberB[j])
                {
                    i++,j++;
                }
                else
                {
                    if(i>total_Carriage)
                    {
                        top=5;
                        break;
                    }
                    top++;
                    tmpeStationC[top].Carriage_number=numberA[i];
                    i++;
                }
            }

        }

    }
    if(top>=5)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}
