#include <stdio.h>
#include <string.h>

int main(void) {
    float x = 0.0;
    char word[100];
    
    scanf("%.2f",&x);
    scanf("%s",&word);
    //scanf("%.2f %s",&x,&word);
    
    int len = strlen(word);    
    
    printf("Float: %.2f\nString: ",x);
    for(int i=0;i<len;i++) {
        printf("%c",word[i]);
    }
     
    return 0;
}
