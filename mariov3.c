#include <stdio.h>

int main(){

int m;
printf("Adja meg a magasságot: ");
scanf("%d",&m);

int szokoz = m - 1;
for (int i = 1; i <= m; i++)
{
    for (int k = 0; k < szokoz; k++)
    {
        printf(" ");
    }

    for (int l = 0; l < i; l++)
    {
        printf("#");
    }

    for (int e = 0; e < 2; e++)
    {
        printf(" ");
    }
    
    for (int x = 0; x < i; x++)
    {
        printf("#");
    }
    

    printf("\n");
    
    szokoz--;
    
}


return 0;

}