
#include<stdint.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX_LEN 200
//function to write a program to "output.txt"
void writeToFile() {
    FILE *file = fopen("output.txt", "w");
    if(file ==NULL){
        perror("Error opening file for writing");
        return;
    }
    char paragraph[MAX_LEN];
    printf("Enter a paragram(up to 200 characters): ");
    fgets(paragraph, MAX_LEN, stdin);
    fprintf(file, "%s",paragraph);
    fclose(file);
    printf("Paragraph written to file successfully. \n");
}
// Fuction to read content from "output.txt"
void readFromFile(){
    FILE *file =fopen("output.txt" , "r");
    if(file==NULL){
        perror("Error opening file for reading");
        return;
    }
    char line[MAX_LEN];
    printf("content of the: \n");
    while(fgets(line, MAX_LEN, file)){
        printf("%s", line);
    }
    fclose(file);
}
//function to append an additional paragragh to "output.txt"
void appendToFile(){
    FILE *file =fopen("output.txt" , "a");
    if(file==NULL){
        perror("Error opening file for appending");
        return;
    }
    char paragragh[MAX_LEN];
    printf("Enter an additional paragragh to append: ");
    fgets(paragragh, MAX_LEN, stdin);
    fprintf(file,"%s", paragragh);
    fclose(file);
    printf("paragragh appended to file successfully. \n");
}
int main(){
    int choice;
    do{
        printf(" \nMenu: \n");
        printf("1.Write to file \n");
        printf("2.Read from file \n");
        printf("3.Append to file \n");
        printf("4.Exit \n");
        printf("Enter your chioce: ");
        scanf("%d", &choice);
        getchar();//To consume the newline character left by scanf
        switch (choice){
            case 1:
            writeToFile();
            break;
            case 2:
            readFromFile();
            break;
            case 3:
            appendToFile();
            break;
            case 4:
            printf("Exiting progra. \n");
            break;
            default:
            printf("Invalid choice. Please try again. \n");
        }
    }while (choice !=4);
    return 0;
}


