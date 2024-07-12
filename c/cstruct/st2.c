#include<stdint.h>
#include<stdio.h>
typedef struct hex{
    int num;
    char letter;
}hex;

int main(int argc, char const *argv[]){
    hex hex_codes[30];
    for(int i=65 ; i<91 ; i++){
        hex_codes->num=i;
        hex_codes->letter=i;
        printf("%d : %c\n",hex_codes->num,hex_codes->letter);
    }
    return 0;
}
