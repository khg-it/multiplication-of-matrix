# include <stdio.h>

int main()
{
    int arr[2][2]={{2,3},{1,4}};
    int brr[2][2]={{1,2},{1,1}};
    int crr[2][2];
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
           {

            printf("%d",arr[i][j]);
           }
            printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            {printf("%d",brr[i][j]);

            }
            printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            crr[i][j]=0;
            for(k=0;k<2;k++)
            {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }


        }

    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }
}
