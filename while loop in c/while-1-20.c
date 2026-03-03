#include <stdio.h>

int main() {
    int n, p, c,d=0, con=0;
    int crashday=-1;
    int day=2;
    scanf("%d",&n);
    scanf("%d",&p);
    while(day<=n)
    {
        scanf("%d",&c);
        if(c<p)
        {
            d++;
            con++;
            
            if(con==3&&crashday==-1)
            {
                crashday=day;
            }
        }
            else
            {
                con=0;
            }
            p=c;
            day++;
        }
        if(crashday!=-1)
        {
           printf("crash day:%d\n",crashday);

        }
        else
        {
             printf("crash day: undeducted\n");
        }
        printf("Total Drops:%d",d);
    return 0;
}