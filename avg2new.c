 int main()
{
    int i,n,b[5],sum=0,x,a;
    float avg;

    scanf("%d", &n);

     for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b[a]);
        x=b[a]+sum;
        sum=x;
        avg=(float)sum/5;
        printf("%d\n",sum);
        printf("%.2f\n",avg);
    }

return 0;
}
