#include<stdio.h>
int main()
{
    int i, X;
    for(i=0; ; i++)
    {
        scanf("%d", &X);
        if(X==0)
        {
            break;
        }

        else if (X>0 || X<0)
        {
            int sum=0;
            for(int j=X; j<=(X+9); j++)
            {
                if(j%2==0)
                {
                    sum+=j;
                }
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
