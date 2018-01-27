#include <stdio.h>
float main() {
	float salary, x;
	scanf("%f", &salary);
    if (salary < 0) {
    	printf("Error: Salary must be greater or equal to 0");
    }
    else if (salary <= 300000) {
		x=((salary*5)/100);
        printf("%.2f", x);
	}
	else if (salary >300000) {
		x=((((salary-300000)*10)/100)+15000);  
        printf("%.2f", x); 
	}
	
}