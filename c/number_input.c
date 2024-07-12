#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
const char *strings[] = {
    "flag{space_is_forever}",
    "flag{reverse_engineering_is_fun}",
    "flag{keep_calm_and_code_on}",
    "flag{hello_world}",
    "flag{security_first}",
    "flag{never_give_up}",
    "flag{coding_is_art}",
    "flag{random_text_generator}",
    "flag{explore_dream_discover}",
    "flag{learn_together}",
    "flag{stay_hungry_stay_foolish}",
    "flag{life_is_a_journey}",
    "flag{code_like_a_pro}",
    "flag{be_yourself}",
    "flag{think_outside_the_box}",
    "flag{programmers_rock}",
    "flag{stay_curious}",
    "flag{embrace_the_unknown}",
    "flag{discover_the_unknown}",
    "flag{never_stop_learning}",
    "flag{dream_big}",
    "flag{hack_the_world}",
    "flag{happy_coding}",
    "flag{coding_is_fun}"
};
void failure();
void realFlag();
int main(){
    int number;
    char input[10];
    printf("Bir sayi girin: ");
    fgets(input, sizeof(input), stdin);
    if(sscanf(input, "%d", &number) == 1){
        printf("Girdiginiz sayi: %d\n", number);
    }else if(input[0] == 'y'){
        failure();
    }else{
        printf("Hatali giris!\n");
    }
    return 0;
}
void failure(){
    system("cls || clear");
    printf("Hatali giris!\n");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf("\nAma burada bir seyler var gibi");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    //for(int i = 0; i < 24; i++)printf("%s\n", strings[i]);
    realFlag();
}
void realFlag(){
    printf("Daha once md5'i duymus muydun ?\n");
    sleep(5);
    printf("Duyduysan nasil cozecegini de biliyor olman gerekir.\n");
    sleep(5);
    printf("8f14e45fceea167a5a36dedd4bea2543.indekse bir goz atabilirsin.\n");
    sleep(10);
    return;
}