#include <stdio.h>
#include <math.h>


double pi(){
    return M_PI;

}



double gombterfogat(double sugar){
    return (4 * pow(sugar,3) * pi()) / 3;

}

double gombfelszin(double sugar){
    return 4 *pow(sugar,2) * pi();

}

double get_double(){
    double r;
    printf("Kerem, adjon meg egy valos erteket: ");
    scanf("%lf", &r);
    return r;

}

int main(){

double sugar = get_double();



printf("A gomb felszine: %f, A gomb terfogata: %f\n", gombfelszin(sugar),gombterfogat(sugar));


}