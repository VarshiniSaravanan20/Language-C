#include<stdio.h>

int main()
{
    int i=0,n,a,streak=0,count=0,max=0;

    scanf("%d",&n);

    while(i<n)
    {
        scanf("%d",&a);

        if(a>70)
        {
            count++;
            streak++;

            if(streak>max)
            {
                max=streak;
            }
        }
        else
        {
            streak=0;
        }

        i++;
    }

    printf("Noise Violations: %d\n",count);
    printf("Longest Violation Streak: %d",max);

    return 0;
}
