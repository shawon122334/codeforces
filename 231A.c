#include<stdio.h>
int main(){
    
    int i,j,r,c,count=0;
    scanf("%d",&r);
    int arr[r][3];

    for(i=0;i<r;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int temp =0;
        for(j=0;j<3;j++){
            if(arr[i][j] == 1){
                temp ++;
            }
        }
        if(temp>=2){
            count++;
        }

        
    }
    printf("%d",count);
}