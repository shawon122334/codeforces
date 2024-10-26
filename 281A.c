#include<stdio.h>
#include<string.h>

int main(){
    char name[1000];
    fgets(name,sizeof(name),stdin);

    if(name[0] >= 97 && name[0]<=122){
        name[0] -= 32;
    }
    puts(name);
}

