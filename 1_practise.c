//To find area of rectangle with uswr's input
#include <stdio.h>


int main() {
    
    int len,wid,area;
    printf("Give Dimensions to find area of rectangle's area ");
    printf("\nLength of rectangle:- ");
    scanf("%d", &len);
    printf("Width of rectangle:- ");
    scanf("%d", &wid);
    area = len*wid;
    printf("Area of rectangle is %d unit square",area);
    
    
    
    return 0;
}