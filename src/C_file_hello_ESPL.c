#include<stdio.h>
#include<espl_lib.h>

int main(){
    int n =0;
    int p =1;
    char a;

    
    while (p==1){
        printf("give me a number please : \n");
        scanf ("%d",&n);
        printf("%s\n" , num_to_words(n));
        printf("type r to Replay or another letter to Exit : \n");
        getchar();
        scanf("%c",&a);
        if (a!='r') p = 0;

    }
} 