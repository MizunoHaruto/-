#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("1つ目の数字を入力してください: ");
    scanf("%d", &num1);
    
    printf("2つ目の数字を入力してください: ");
    scanf("%d", &num2);
    
    if (num1 > num2) 
    {
        
        printf("1つ目の数字 (%d) の方が、2つ目の数字 (%d) より大きいです。\n", num1, num2);
    } 
    else if (num1 < num2) 
    {
    
        printf("2つ目の数字 (%d) の方が、1つ目の数字 (%d) より大きいです。\n", num2, num1);
    } 
    else 
    {
        
        printf("2つの数字 (%d と %d) は等しいです。\n", num1, num2);
    }
    
    return 0;
}