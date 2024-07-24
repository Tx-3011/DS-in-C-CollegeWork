#include <stdio.h>


int power(int n,int k){
    if(k==0){
        return 1;
    }else{

        k--;
        return n*power(n,k);

    }
}

int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);
    printf("Enter Power: ");
    int k;
    scanf("%d",&k);

    int ans = power(n,k);

    printf("ans is %d",ans);
}
