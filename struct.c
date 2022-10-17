#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct triangle {
    float height;
    float width;
    float ang1;
    float ang2;
    float ang3;
};
float area(struct triangle t)
{
    return 0.5*t.height*t.width;
}
struct triangle finish_angle(struct triangle t){
    t.ang3 = 180 - t.ang1 - t.ang2;
    return t;
}

int main()
{
    struct triangle t;
    t.height = 10;
    t.width = 20;
    printf("The height of the triangle is : %f\n", t.height);
    printf("The width of the triangle is : %f\n",t.width);
    float a = area(t);
    printf("The area of the triangle is : %f\n",a);
    struct triangle t2;
    t2.height = 5;
    t2.width = 8;
    t2.ang1 = 40;
    t2.ang2 = 90;
    t2 = finish_angle(t2);
    printf("Angle 3 is : %f\n",t2.ang3);
    return 0;

}
