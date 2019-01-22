#include <stdio.h>
#include <math.h>
float distance(float x1, float y1, float x2, float y2){
    return sqrt(pow( x1-x2, 2) + pow(y1-y2, 2));
}

int main(){

float x,y,radius;

scanf("%f%f%f", &x, &y, &radius);
int br = 0;
if(distance(x,y, 0.1, 0.1) - radius < 0){
    br+=1;
}else if(distance(x,y, -0.1, 0.1) - radius < 0){
    br+=10;
}else if(distance(x,y, -0.1, -0.1)  - radius < 0){
    br+=100;
}else if(distance(x,y, 0.1, -0.1)  - radius < 0){
    br+=1000;
}

printf("%d", br);





}
