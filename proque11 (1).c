

 
 
 
 #include <stdio.h>

int Length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
int size ;
printf("enter array of size \n");
scanf("%d",&size);
    char str[size];
    printf("Enter any string: ");
    scanf("%s",&str);

    int length = Length(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

 
    