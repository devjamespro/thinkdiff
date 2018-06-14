/*
 * author: Mahmud Ahsan
 * github: https://github.com/mahmudahsan
 * blog: http://thinkdiff.net
 * Web: http://banglaprogramming.com
 * youtube: https://www.youtube.com/c/banglaprogramming
 * License: MIT License
 * https://github.com/mahmudahsan/thinkdiff/blob/master/LICENSE 
 */
 
/* 
 * Multiplication
 */

#include <stdio.h>

int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    printf("\nMultiplication\n");
    printf("-------------------\n");
    printf("Number\tMultiplication\n");
    
    for (int i = 1; i <= 10; ++i){
        int result = i * number;
        printf("%2d\t  %2d\n", i, result); // -2d
    }
        
    return 0;
}