#include <stdio.h>
/*
void get_details(char name[], int* age, char qualification[], float* percentage){

	printf("Enter the name: ");
        scanf("%s",name);
        printf("Enter age: ");
        scanf("%d", age);
        printf("Highest qualification: ");
        scanf("%s", qualification);
        printf("Percentage obtained: ");
        scanf("%f", percentage);
}

void display_details(char name[], int age, char qualification[], float percentage){

	printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Highest Qualification: %s\n", qualification);
        printf("Percentage: %.2f\n", percentage);

}
*/
int main(){

	char name[30];
        int age;
        char qualification[30];
        float percentage;
	
//	get_details(name, &age, qualification, &percentage);
//	display_details(name, age, qualification, percentage);









	printf("Enter the name: ");
        scanf("%s",name);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Highest qualification: ");
        scanf("%s", qualification);
        printf("Percentage obtained: ");
        scanf("%f", &percentage);

	printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Highest Qualification: %s\n", qualification);
        printf("Percentage: %.2f\n", percentage);


	return 0;
}
