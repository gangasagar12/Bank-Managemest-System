#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// define subjects[5]
struct student
{
    /* data */
    char name[50];
    int marks[5];
    int ID;
};
struct student std[10];
void  store_student();
void display_student();
 int main(){
    int choice;
    printf("student managament system: \n");
    printf(" 1. \t enter the student details: \n");
    printf(" 2. \t display the student result :\n");
    printf("enter the choice: \n");
    scanf("%d",&choice);
     switch(choice){
        case 1:
        store_student();
        break;
         
        case 2:
        display_student();
        break;
     }
     return 0;
 }
 void store_student(){
    FILE *file;
    file=fopen("student.txt","a");
    if(file==NULL){
        printf("file not found");
        return 0;
    }
    
int i,j,marks[5];
    printf("enter the student details: \n");   // storing the student detaisll
    for(int i=0;i<10;i++){
        printf("enter the studdent name: \n");
        gets(std[i].name);
        printf("enter the student details: \n");
        scanf("%d",&std[i].ID);
        printf("enter the student marks upto 5 subjects(1-5): \n");    // taking the five subjects for stooring marks
        for(int j=0;j>5;j++){
            scanf("%d",&marks[j]);
        }
        
    }
 }
 void display_student(){
    FILE *file;
    file=fopen("student.txt","r");
    if(file==NULL){
        printf("file coudn't open! \n");
        exit(0)
    }

 }


