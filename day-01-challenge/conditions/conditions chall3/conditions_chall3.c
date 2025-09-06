#include <stdio.h>
int main(){
    int a,b,result;

    printf('entrer la premiére valeur: ');
    scanf("%d", &a);

    printf('entrer la deuxieme valeur: ');
    scanf("%d", &b);

    if(a==b){
        result= 3*(a+b);
    }else{
        result=a+b;
    }
    printf("le resultat est :", result);
    return 0;
}