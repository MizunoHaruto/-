#include <stdio.h>
#include <math.h> 

void solveQuadratic(int a, int b, int c) {
    double discriminant;
    double x1, x2;

    
    discriminant = (double)b * b - 4.0 * a * c;

    printf("判別式の結果: %.2f\n", discriminant);

   
    if (discriminant > 0) {
       
        x1 = (-b + sqrt(discriminant)) / (2.0 * a);
        x2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("2つの実数解があります: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } 
    else if (discriminant == 0) {
        
        x1 = -b / (2.0 * a);
        printf("1つの実数解（重解）があります: x = %.2f\n", x1);
    } 
    else {
      
        printf("実数解はありません。\n");
    }
}

int main() {
    int a, b, c;
    do {
        printf("整数 a (0以外), b, c を入力してください:\n");
        printf("a = ");
        scanf("%d", &a);
        if (a == 0) {
            printf("aに0を入力することはできません。再入力してください。\n");
        }
    } while (a == 0);

    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    solveQuadratic(a, b, c);

    return 0;
}