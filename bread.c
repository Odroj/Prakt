#include <stdio.h> 

int main(){
    //Example of words in a 2D array
    char words[5][20];
    for(int i=0; i<5; i++){
        printf("\nEnter word %d: ", i+1);
        scanf("%19s", words[i]); 
    }
    printf("\nYour words are: ");
    for(int i=0; i<5; i++){
        printf(" %s", words[i]);
    }
    return 0; 
}