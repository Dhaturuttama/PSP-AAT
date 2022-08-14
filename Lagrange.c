#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    float a[100],b[100],x,y=0,p;
    clrscr();
    printf("Enter number of known data points");
    scanf("%d",&n);
    printf("Enter the data corresponding to the respective data points \n");
    for(i=0;i<n;i++)
     { printf("x%d = ",i+1);
       scanf("%f",&a[i]);
       printf("y%d = ",i+1);
       scanf("%f", &b[i]);
     }
    printf("Enter point of interpolation: ");
    scanf("%f",&x);
    for(i=0;i<n;i++)
    { p=1;
      for(j=0;j<n;j++)
      { 
        if(i!=j)
        {
        p=p*(x-a[j])/(a[i]-a[j]);
        }
      }
      y=y+p*b[i];
    }
    printf("The interpolated value at %f is %f",x,y);
    getch();
}      