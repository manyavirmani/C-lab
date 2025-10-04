#include <stdio.h>
int main() {
 int n = 5;
 // upper hollow full pyramid
 for(int i = 1; i <= n; i++) {
for(int j = 1; j <= n - i; j++) {
    printf(" "); }
for(int j = 1; j <= 2 * i - 1; j++) {
if(j == 1 || j == 2 * i - 1 ) {
printf("*");
} else {
printf(" "); 
}
}
printf("\n");
}
// lower hollow inverterd pyramid
for(int i = n; i >= 1; i--){
for(int j = 1; j <= n - i; j++){
    printf(" ");
}
 for(int j = 1; j <= 2 * i - 1; j++) {
     if(j == 1 || j == 2 * i - 1) {
         printf("*");
     } else {
         printf(" ");
     }
 }
 printf("\n");
 }
        return 0 ;
}
