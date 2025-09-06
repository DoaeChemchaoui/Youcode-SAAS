#include <stdio.h>
#include <string.h>

void inverser(char str[]) {
    int len = strlen(str);
    for(int i=0; i<len/2; i++) {
        char tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
}

int main() {
    char str[100];
    printf("Entrez une chaine : ");
    scanf("%s", str);

    inverser(str);
    printf("Chaine inversee : %s\n", str);
    return 0;
}
