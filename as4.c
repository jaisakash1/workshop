#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int rev=0;
    
    while(n!=0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    int a=rev+n;
    printf("%d",a);
    return 0;
}