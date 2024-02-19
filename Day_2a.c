#include <stdio.h>
int week;
int main() {
    printf("Enter the day number in the week: ");
    scanf("%d", &week);
    
    switch(week){
        default: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}

