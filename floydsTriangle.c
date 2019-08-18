#include<stdio.h>

int main(){

int n,i,j,k = 0,m;

scanf("%d",&n);

for(i=1;i<=n;i++){
            m=1;

    for(j=1;j<=i;j++){
        if( j == 1)
        printf("%d ",j+k);
        else
        {
            printf("%d ",j+k-m);
            m++;
        }
        k++;
    }
    printf("\n");
}



}
