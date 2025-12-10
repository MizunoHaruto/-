#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MIN_LENGTH 8
#define MAX_INPUT 100

void check_password_strength(const char *password) {
    size_t length = strlen(password);
    bool is_strong = true;
    bool has_upper = false;
    bool has_lower = false;
    
    printf("\n--- チェック項目 ---\n");

    if (length < MIN_LENGTH) {
        printf("長さが不足しています (現在 %zu 文字)。%d 文字以上にする必要があります。\n", length, MIN_LENGTH);
        is_strong = false;
    } else {
        printf("長さの基準を満たしています (%zu 文字)。\n", length);
    }
    
    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        
        if (islower(c)) {
            has_lower = true;
        }
        
        if (isupper(c)) {
            has_upper = true;
        }
    }
    
    if (!has_upper || !has_lower) {
        is_strong = false;
        printf("大文字と小文字の**両方**を含んでいません。\n");
        if (!has_upper) {
            printf("大文字を少なくとも1文字含めてください。\n");
        }
        if (!has_lower) {
            printf("小文字を少なくとも1文字含めてください。\n");
        }
    } else {
        printf("文字と小文字の両方を含んでいます。\n");
    }
    
    printf("\n　結果 　\n");
    if (is_strong) {
        printf("あなたのパスワードは強いパスワードです。\n");
    } else {
        printf("あなたのパスワードは弱いパスワードです。上記改善点を参考にしてください。\n");
    }
}

int main() {
    char password[MAX_INPUT]; 

    printf("パスワードを入力してください:\n> ");
    
    if (fgets(password, MAX_INPUT, stdin) == NULL) {
        return 1;
    }
    
    size_t len = strlen(password);
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }

    check_password_strength(password);
    
    return 0;
}