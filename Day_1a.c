
#include <stdio.h>

struct Address {
    char door_no[10];
    char street[20];
    char city[20];
    char state[20];
    int pincode;
};

void get_details(struct Address *address) {
    printf("Enter the door number: ");
    scanf("%s", address->door_no);
    printf("Enter street name: ");
    scanf("%s", address->street);
    getchar();
    printf("Enter city: ");
    scanf("%s", address->city);
    printf("Enter State: ");
    scanf("%s", address->state);
    printf("Enter pincode: ");
    scanf("%d", &address->pincode);
}

void display_details(struct Address *address) {
    printf("Door number: %s\n", address->door_no);
    printf("Street: %s\n", address->street);
    printf("City: %s\n", address->city);
    printf("State: %s\n", address->state);
    printf("Pincode: %d\n", address->pincode);
}

int main() {

    struct Address person1_address;

    get_details(&person1_address);
    printf("Address details:\n");
    display_details(&person1_address);

    return 0;
}

