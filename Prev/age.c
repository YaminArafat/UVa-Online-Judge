#include <stdio.h>
int main()
{
    int f_year,f_month,f_day;
    int n,i,x,y=0;
    int year,month,day;
    int r_year,r_month,r_day,total_day;

    scanf("%d %d %d", &f_year, &f_month, &f_day);

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &year, &month, &day);

        r_year=f_year-year;
        r_month=abs(f_month-month);
        r_day=abs(f_day-day);

        if ((f_month<month && f_day<day))
        {
            r_month=abs((12- month)+f_month-1);
            r_day=abs((30+f_day)-day);
            r_year=r_year-1;
        }
        else
        {
            r_year=r_year;
            r_month=r_month;
            r_day=r_day;
        }
        if ((f_month<month && month<=12 && f_day>day))
        {
            //month++;
            r_month=abs((12- month)+f_month);
            r_day=abs(f_day-day);
            r_year=r_year-1;
        }
        else
        {
            r_year=r_year;
            r_month=r_month;
            r_day=r_day;
        }
        if ((f_day<day && f_month>month))
        {
            r_month=abs(f_month-month-1);
            r_day=abs((f_day+30)-day);
            r_year=r_year;
        }
        else
        {
            r_year=r_year;
            r_month=r_month;
            r_day=r_day;
        }
        if (f_month==month && f_day<day)
        {
            r_year=r_year-1;
            r_month=11;
            r_day=(30-day+f_day);
        }
        if (f_month==month && f_day>day)
        {
            r_year=r_year;
            r_month=0;
            r_day=f_day-day;
        }
        printf("%d %d %d\n", r_year, r_month, r_day);
        //break;

        total_day=(r_day+(r_month*30)+(r_year*12*30));

        printf("%d\n", total_day);
        //break;


    for (x=year; x<=f_year; x++)
    {
        if (x%400 || x%4 || (x%400 && x%4))
        {
            y++;
            total_day=total_day+y;
            printf("%d\n" , total_day);
        }
            //printf("%d\n" , total_day);
            //break;
    }
    }
    return 0;
}
