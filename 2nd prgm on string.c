//2. 
- Accept a String input
- Accept a String of valid chars
- Remove all the characters that are not present in the valid chars from the input string
- Print the cleansed String and the count of characters removed

program

#include<stdio.h>
#include<string.h>
int main(){
    char inputStr[100];
    int i;
    printf("Enter your string : ");
    fgets(inputStr,100,stdin);
    int j = 0;
    for(i=0; inputStr[i] ;i++){
      if((inputStr[i] >= '0' && inputStr[i] <= '9')||(inputStr[i]>='#' && inputStr[i]<='-')){
            inputStr[j] = inputStr[i];
            j++;
        }
    }
    inputStr[j] = '\0';
    printf("%s",inputStr );
    printf(" was removed ");  
    printf("\n%d",j);
    printf(" was removed");
}
