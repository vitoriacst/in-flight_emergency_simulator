#include <stdio.h>
#include <stdlib.h>


void fails();
void plane_data();

int main() {
	int status;
	int fail_code;

	printf("### Flight emergency ### \n");

	printf("### Enter the criticality of the failure: ### \n 1 - Basic \n 2 - intermediary \n 3 - Extremely Danger \n");

	scanf("%d", &fail_code);

	if(fail_code){
	    fails(fail_code);
	    plane_data();
	}

	return 0;
};


void fails(int fail_code){
    int status;

    if(fail_code == 1){
        printf("1 - Engine partial failure\n2 - Low fuel level\n3 - Ice on wings\n4 - Turbulence\n");
        scanf("%d", &status);
        printf("--- Fail recorded --- \n");
    } else if(fail_code == 2){
        printf("1 - Gradual loss of altitude\n2 - Fuel leak\n3 - Electrical failure\n");
        scanf("%d", &status);
        printf("--- Fail recorded --- \n");
    } else {
        printf("1 - Total electrical failure\n2 - Severe icing\n3 - Fuel depletion\n");
        scanf("%d", &status);
        printf("--- Fail recorded --- \n");
    };
    printf("--- Now, you need insert plane data --- \n");
    plane_data();
};

void plane_data(){
	float altitude;
	float fuel;
	float speed;



	printf("You need insert the altitude: \n");

	scanf("%f", &altitude);

	printf("You need insert the fuel quantity: \n");

	scanf("%f", &fuel);

	printf("You need insert the speed: \n");

	scanf("%f", &speed);


	printf("You need insert the important values: \n");

	scanf("%d", &altitude);

};
