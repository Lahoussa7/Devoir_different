#include <stdio.h>
#include <math.h>
#include <string.h>

char* withoutHex(char* tab) {
    char* new = malloc(strlen(tab) + 1);
    int i = 0, j = 0;
    char hex[3];
    char car;

    while (tab[i] != '\0') {
        if (tab[i] == '%' && tab[i + 1] != '\0' && tab[i + 2] != '\0') {
            hex[0] = tab[i + 1];
            hex[1] = tab[i + 2];
            hex[2] = '\0';

            car = hex_to_char(hex);

            if (car != -1) {
                new[j] = car;
                i += 3;
            } else {
                new[j] = tab[i];
                i++;
            }
        } else if (tab[i] == '+') {
            new[j] = ' ';
            i++;
        } else {
            new[j] = tab[i];
            i++;
        }
        j++;
    }
    new[j] = '\0';

    return new;
}

int main(){
    char hex[17];
    long long decimal;
    int i = 0, val, len;

    decimal = 0;

    printf("Hexadecimal: ");
    fgets(hex,17,stdin);

    len = strlen(hex)-1;

    for(i=0; hex[i]!='\0'; i++){
        if(hex[i]>='0' && hex[i]<='9'){
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f'){
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            val = hex[i] - 65 + 10;
        }
		
        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal = %s\n", hex);
    printf("Decimal = %lld", decimal);

    return 0;
}
