#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lower = 1, upper = 10, count = 1;   //  You can also take limit using scanf
    int num;
	srand(time(0));
    for (int i = 0; i < count; i++) {
		num = (rand() %	(upper - lower + 1)) + lower;
	}

    printf("The Parked Hours for your vehicle is %d \n", num);
    
    if(num<=2){
        printf("The Charges for your car is 30 Rupees \n");
    }

    else if(num>2 && num<=4){
        printf("The Charges for your car is 40 Rupees \n");
    }
    
    else if(num>4 && num<=6){
        printf("The Charges for your car is 50 Rupees \n");
    }
    
    else if(num>6 && num<=8){
        printf("The Charges for your car is 60 Rupees \n");
    }
    
    else if(num>8){
        printf("The Charges for your car is 70 Rupees \n");
    }

    printf("You have 15 mins to exit!");


    

    return 0;
}