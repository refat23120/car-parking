#include <stdio.h>

int bike = 0, rickshaw = 0, car = 0;
int totalAmount = 0;
int bikePrice=20, rickshawPrice=30, carPrice=50;

void setPrices() {
    
    
    printf("Enter the price for a Bike: $");
    scanf("%d", &bikePrice);
    
    printf("Enter the price for a Rickshaw: $");
    scanf("%d", &rickshawPrice);
    
    printf("Enter the price for a Car: $");
    scanf("%d", &carPrice);
    
    printf("Prices updated successfully.\n");
}

void addVehicle(int type) {
    int price;

    if (type == 1) {
            price = bikePrice;
            bike++;
    }
    else if (type == 2) {
            price = rickshawPrice;
            rickshaw++;
             }
    else if (type == 3) {            
            price = carPrice;
            car++;
        }
        else{
            printf("Invalid vehicle type. Please try again.\n");
            return;
        }
            totalAmount += price;
    }

    

void displayTotalRecords() {
    printf("\n\t\t\t\t\t TOTAL RECORD\n");
    printf("\t\t\t\t ===========================\n");
    printf("\t\t\t\t Total Bike:\t\t%d\n", bike);
    printf("\t\t\t\t Total Rickshaw:\t%d\n", rickshaw);
    printf("\t\t\t\t Total Car:\t\t%d\n", car);
    printf("\t\t\t\t ===========================\n");
    printf("\t\t\t\t Total Vehicle:\t%d\n", bike + rickshaw + car);
    printf("\t\t\t\t Total Amount:\t$%d\n\n", totalAmount);
}

void deleteRecords() {
    bike = 0;
    rickshaw = 0;
    car = 0;
    totalAmount = 0;
    printf("\t\t\t\t\t DELETE RECORD\n");
    printf("\t\t\t\t ===========================\n");
}

int main() {
    int choice;

    while (1) {

        
        printf("---------------------\n");
        printf("1 for Bike\n");
        printf("2 for Rickshaw\n");
        printf("3 for Car\n");
        printf("4 for Set Prices\n");
        printf("5 for Total Record\n");
        printf("6 for Delete Record\n");
        printf("7 to Exit\n");
        printf("---------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            case 2:
            case 3:
                addVehicle(choice);
                break;

            case 4:
                setPrices();
                break;

            case 5:
                displayTotalRecords();
                break;

            case 6:
                deleteRecords();
                displayTotalRecords();
                break;

            case 7:
                printf("Exiting the program. Have a great day!\n");
                return 0;

            default:
                printf("\t\t\t\t**************\n");
                printf("\t\t\t\tInvalid Number\n");
                printf("\t\t\t\tPlease try again\n");
                printf("\t\t\t\t**************\n\n");
                break;
        }
    }

    return 0;
}
