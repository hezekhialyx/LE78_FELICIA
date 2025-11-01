#include<stdio.h>
#include<string.h>

int main(){
    int elems[100];
    int e,i = 0,largest;
    
    
    printf("== Finding The Largest Element in Array ==\n");
    printf("   Enter how many elements you want: ");
    scanf("%d", &e);
    
    printf("Enter %d Elements:\n", e);
    while(i < e){
        printf("Element %d:", i + 1);
        scanf("%d", &elems[i]);
        
        i++;
    }
        largest = elems[0];
        i = 1;
    
        while(i < e){
            if(elems[i] > largest){
                largest = elems[i];
            }
            i++;
        }
        
        printf("The Largest Elements is: %d\n", largest);
    
    
    char string[200];
    int vowels = 0;
    i = 0;
    
        printf("\n== Counting The Vowels in The String ==\n");
        printf("   Enter a String: ");
        getchar();
        fgets(string, sizeof(string), stdin);
        
        while(string[i] != '\0') {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' ||
           string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U') {
            vowels++;
        }
        i++;
    }
        printf("The Number of The Vowels in The String is: %d ", vowels);
    
    return 0;
    
}