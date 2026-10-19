

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    char longest[100] = ""; 
    char temp[100] = "";    
    int j = 0;
    
    for (int i = 0;str[i] != '\0' ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            temp[j++] = str[i];
        } else {
            temp[j] = '\0';
            
            int temp_len = 0;
            for (int k = 0; temp[k] != '\0'; k++) {
                temp_len++;
            }
            
            int longest_len = 0;
            for (int k = 0; longest[k] != '\0'; k++) {
                longest_len++;
            }
            
            if (temp_len > longest_len) {
                int k;
                
                for (k = 0; temp[k] != '\0'; k++) {
                    longest[k] = temp[k];
                }
                longest[k] = '\0'; 
            }
            
            j = 0;
        }
        
        
       
    }
    
    printf("Longest word: %s\n", longest);
    
    return 0;
}