#include <stdio.h>
#include <string.h>

int main(){
    char naskah[30];
    int array[30];
    fgets(naskah, sizeof(naskah), stdin);
    printf("%s", naskah);
}
