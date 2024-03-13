#include <stdio.h>


int teglakerulet(int a, int b)
{
    return 2*(a + b);

}

int teglaterulet(int a, int b)
{
    return a* b;   
}


int main(){

int a, b;
printf("Adja meg a az A oldal hosszat: ");
scanf("%d",&a);

printf("Adja meg a B oldal hosszat: ");
scanf("%d",&b);

int kerulet = teglakerulet(a,b);
int terulet = teglaterulet(a,b);

printf("A teglalap kerulete: %d, A teglalap terulete: %d\n",kerulet,terulet);

}