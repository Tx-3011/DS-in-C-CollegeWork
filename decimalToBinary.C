#include <stdio.h>

int binary(int n){
    if(n==0|| n==1){
        return n;
    }else{
        return n%2 + 10*binary(n/2);
        }

}

int main(){
    printf("enter a number: ");
    int n;
    scanf("%d",&n);


    int ans = binary(n);
    printf("ans is %d",ans);
}
