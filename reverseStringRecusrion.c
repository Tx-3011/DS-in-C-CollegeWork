#include <stdio.h>

int main(){
    char str[] = "hello";
    int n  = strlen(str);
    fun(str,0,n);
}

void fun(char str[], int i, int n){

if (i==n){
    return;
}else{

fun(str,i+1,n);
printf("%c", str[i]);

}
}
