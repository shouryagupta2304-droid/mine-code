// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     // int a =1,b =0;
//     // for(int i=1; i<=n; i++){
//     //     for(int j=1; j<=i; j++){
//     //         if(i ==j || j == (i-2)) printf("%d",a);
//     //         else printf("%d", b);
//     //     }
//     //     printf("\n");
//     }          
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a ;
    for(int i=1; i<=n; i++){
        if(i%2!=0) a=1;
        else a =0;
        for(int j=1; j<=i; j++){
            printf("%d",a);
            if(a==0) a=1;
            else a = 0;
            
        }
        printf("\n");
    }          
    return 0;
}