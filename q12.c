// Calculate the area of the circle and modify the same program to calculate the volume of a cylinder given its radius and height

#include<stdio.h>

int main(){
    float PIE = 3.14;
    float radius_of_circle;
    float radius_of_cylinder;
    int height_of_cylinder;
    float area_of_circle;
    float volume_of_cylinder;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius_of_circle);

    area_of_circle=PIE*radius_of_circle*radius_of_circle;

    printf("\nThe area of circle is %.2f",area_of_circle);

    printf("\nEnter the radius of the cylnder: ");
    scanf("%f",&radius_of_cylinder);

    printf("\nEnter the height of the cylinder: ");
    scanf("%d",&height_of_cylinder);

    volume_of_cylinder=PIE*radius_of_cylinder*radius_of_cylinder*height_of_cylinder;

    printf("\nThe volume of the cylinder is %.2f",volume_of_cylinder);

    return 0;
}
