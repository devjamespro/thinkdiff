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
 * Nested If
 */

#include <stdio.h>

int main(){
    int year;
    
    printf("Please enter a year: ");
    scanf("%d", &year);
    if ( (year % 4 == 0) ) {
        if (year % 100 != 0){
            printf("%d is a leap year\n", year);
        }
        else {
            printf("%d is not a leap year\n", year);
        }
    }
    else if (year % 400 == 0) {
        printf("%d is a leap year\n", year);
    }
    else {
        printf("%d is not a leap year\n", year);
    }
        
    return 0;
}