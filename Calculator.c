#include<stdio.h>
#include<math.h>
int main()
{
    char opt;
    int a, b, expo;
    float apo;
    printf ("Dialekse ti thes na kaneis (^,s,+,-,*,/)\n");
    scanf ("%c",&opt);
    printf ("Vale to prwto noymero:");
    scanf ("%d",&a);
    printf ("Vale to deftero noymero:");
    scanf ("%d",&b);       
        if (opt=='^')
    {
    expo = b;
    int apo=1;
        if (b > 0)
    {
        while(b!=0)
        {
        apo = apo * a;
        b--;
        }
        printf("To %d stin %dh dinami isoytai me: %d ",a,expo,apo);
    }
    }  
        else if(opt=='s')
    {
        apo=sqrt(a);
        printf("H tetragwniki riza toy %d einai:%.2f",a,apo);
    }

        else if (opt=='+')
    {
        apo = a + b;
        printf("To apotelesma einai: %f",apo);
    }
        else if (opt=='-')
    {
        apo = a - b;
        printf("To apotelesma einai: %f",apo);
    }
        else if (opt=='*')
    {
        apo = a * b;
        printf("To apotelesma einai: %f",apo);
    }
        else if (opt=='/')
    {
        if (b == 0);
        {
            printf ("Den mporei na dierethei me to 0, dialekse allo noymero:");
            scanf ("%d",&b);
        }    
        apo = a / b;
        printf("To apotelesma einai: %f",apo);
    }
        else
    {
        printf("Kati evales lathos!");
    }
    return 0;
}
