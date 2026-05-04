#include <stdio.h>
#include <stdlib.h>

// Simulated device states
int light = 0;
int fan = 0;
float temperature;

// Function prototypes
void controlLight(int motion);
void controlFan(float temp);
float readTemperature();

int main() {
    int motionDetected;

    while(1) {
        printf("\nEnter motion (1/0): ");
        scanf("%d", &motionDetected);

        temperature = readTemperature();

        controlLight(motionDetected);
        controlFan(temperature);

        printf("Light: %s\n", light ? "ON" : "OFF");
        printf("Fan: %s\n", fan ? "ON" : "OFF");
    }
    return 0;
}

void controlLight(int motion) {
    if(motion)
        light = 1;
    else
        light = 0;
}

void controlFan(float temp) {
    if(temp > 30)
        fan = 1;
    else
        fan = 0;
}

float readTemperature() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);
    return temp;
}
