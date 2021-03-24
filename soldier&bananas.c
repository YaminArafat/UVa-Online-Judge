#include <stdio.h>
int main()
{
    int cst_ban,money,need,borrow,i,tot_money_need=0;

    scanf("%d %d %d", &cst_ban, &money, &need);

    for (i=1; i<=need; i++)
    {
        tot_money_need=tot_money_need+i*cst_ban;
    }
    if (tot_money_need>money)
    {
        borrow=tot_money_need-money;
        printf("%d\n",borrow);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
