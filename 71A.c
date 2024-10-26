#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    getchar();

    char name[1000];
    for (int i =0;i<n;i++){
            fgets(name,sizeof(name),stdin);

            name[strcspn(name,"\n")] = '\0';

    int length = strlen(name);
    if(length>10){
        printf("%c%d%c\n",name[0],length-2,name[length-1]);
    }
    else{
        puts(name);
    }
    }
}

