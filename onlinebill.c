// for domestic
// first 100 units rs 1/unit
// 101 to 200 units rs 2.5/unit
// 201 to 500 units rs 4/unit
/*for commercial
first 100 units rs 2/unit 
101 to 200 units rs 4/unit 
201 to 500 units rs 6/unit
   */
 #include <stdio.h>
int main()
{
    float unit,price,pre,curr,sur,ext;
    int id,i,v;
    char name[100];
    printf("Enter 1 for domestic and 2 for commercail\n");
    scanf("%d",&v);
    printf("*******Cosumer ID*******\n");
    scanf("%d",&id);
    printf("***Name of the consumer***\n");
    scanf("%s",&name);
    printf("**Current month readiing**\n");
    scanf("%f",&curr);
    printf("**previous month reading**\n");
    scanf("%f",&pre);
    unit = curr - pre;
    switch(v)
    {
          case (1):
    if (unit <= 100)
    {
        price = unit;
        printf("**unit consumed******= %f\n",unit);
        printf("***total cahrge =%f\n", price);
        unit++;
        break;
    }
    else if(unit > 100 && unit <= 200)
    {
        for (i=1;i<=(unit - 100);i++)
        {
            sur = i * 2.5;
            ext = unit - i - 100;
        }
        price = sur + (ext * 2.5) + 100;
       printf("****Unit consumed****%f\n",unit);
        printf("****total cahrge***%f\n", price);
        unit++;
        break;
    }
    else if (unit > 200 && unit <= 500)
    {
        for (i = 1; i <= (unit - 200); i++)
        {
            sur = i * 4;
            ext = unit - i - 200;
        }
        price = sur + 300 + (ext * 4);
        printf("****Unit consumed****%f\n",unit);
        printf("****total cahrge***%f\n", price);
        unit++;
        break;
    }
    else if (unit > 500)
    {
        for (i=1; i<=(unit - 300);i++)
        {
            sur = i * 6;
            ext = unit - i - 500;
        }
         price = sur + 1500 + (ext * 6);
        printf("****Unit consumed****%f\n",unit);
        printf("\n****total cahrge***%0.3f\n", price);
        unit++;
        break;
    }
    case (2):
     {
         if (unit <= 100)
    {
        price = 2 * unit;
        printf("**unit consumed******= %f\n",unit);
        printf("***total cahrge =%0.3f\n", price);
        unit++;
        break;
    }
    else if(unit > 100 && unit <= 200)
    {
        for (i=1;i<=(unit - 100);i++)
        {
            sur = i * 4.50;
            ext = unit - i - 100.00;
        }
        price = sur + 200.00 + (ext * 4.50);
       printf("****Unit consumed****%f",unit);
        printf("****total cahrge***%f", price);
        unit++;
        break;
    }
    if (unit > 200 && unit <= 500 )
    {
        for(i=0; i<(unit - 200); i++)
        {
            sur = i * 6;
            ext = unit - i - 200;
        }
        price = sur + 650 + (ext * 6);
        printf("**unit consumed******= %f\n",unit);
        printf("***total cahrge =%f\n", price);
        unit++;
        break;
    }
     }
    }
}