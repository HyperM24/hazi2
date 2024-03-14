#include <stdio.h>

int main(){

int m;
printf("Adja meg a magasságot: ");
scanf("%d",&m);

if (m <= 0 || m % 2 == 0)
{
    printf("A magasságnak pozitívnak és páratlannak kell lennie!");
    return 1; 
}

int szokoz = m/2;
int csillag = 1;

for (int i = 0; i <= m/2; i++)
{
    for (int v = 0; v < szokoz; v++)
    {
        printf(" ");
    }
    
    for (int w = 0; w < csillag; w++)
    {
        printf("*");
    }
    
    printf("\n");
    csillag = csillag + 2;
    szokoz--;
}

csillag -= 4; 
szokoz = 1;

for (int i = 0; i <= (m/2)-1; i++)
{
    for (int v = 0; v < szokoz; v++)
    {
        printf(" ");
    }
    
    for (int w = 0; w < csillag; w++)
    {
        printf("*");
    }
    
    printf("\n");
    csillag -= 2;
    szokoz++;
}



return 0;


}