#include<stdio.h>
int main(){
	int n,k,counter=0;
	scanf("%d %d",&n,&k);
	int arr[50];
	for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);

	}

	for(int i=1;i<=n;i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            counter++;
        }
	}
	printf("%d",counter);

	return 0;

}
