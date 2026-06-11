#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    int RollNo;
    float mark;
}student;
void addstudent(int* c);
void verifydata();
void updatedata();
int main(){
    int choice;
    int count=0;
    while(1){
        printf("\n1.Add Student\n 2.verify student data \n 3.Update Data \n 4.Exit\n");
        printf("\nEnter Choice :");
        scanf("%d" ,&choice);
        switch(choice){
            case 1:
            addstudent(&count);
            break;
            case 2:
            verifydata();
            break;
            case 3:
            updatedata();
            break;
            case 4:
            printf("Exit!");
            return 0;
            default:
            printf("Invalid choice!");
        }
    }
}
void addstudent(int* c){
    if(*c==100){ // that is maximum student it will take is 100 student
        printf("No Extra Entries will taken!");
        return;
    }
    
        FILE *fptr;
        char select='Y';
        student s;
        fptr=fopen("record.txt" ,"a");
        if(fptr==NULL){
        printf("\nError in finding the file!\n");

    }
    while(select == 'y' || select == 'Y'){
        printf("\nEnter Name: ");
        scanf(" %[^\n]", s.name);

        printf("\nEnter Roll Number: ");
        scanf("%d", &s.RollNo);

        printf("\nEnter Mark: ");
        scanf("%f", &s.mark);
        
    
        fprintf(fptr, "%s %d %f\n", s.name,s.RollNo, s.mark); // writing in file
        *c++;

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &select);
    }
    fclose(fptr);

    printf("Data saved successfully!\n");

}
void verifydata(){
    FILE* fptr;
    student s;
    int rn;
    bool flag=0;
    printf("Enter Roll Number to verify Student :");
    scanf("%d" ,&rn);

    fptr=fopen("record.txt" ,"r");
    if(fptr==NULL){
        printf("Error in finding the file!");
    }
    while(fscanf(fptr ,"%s %d %f" ,s.name,&s.RollNo,&s.mark)!=EOF){
        if(rn==s.RollNo){
        printf("\nStudent Found!\n");
        printf("Name: %s\n", s.name);
        printf("Roll No: %d\n", s.RollNo);
        printf("Marks: %f\n", s.mark);
        flag=1;
    }
    
}
if(flag==1){
    printf("Record Found Successfully!\n");
    return;
}
else("Record Does Not found!");
}
void updatedata(){
    FILE* fptr;
    student s;
    int rn;
    char add='Y';
    bool flag=0;
    printf("Enter Roll Number to verify Student :");
    scanf("%d" ,&rn);

    fptr=fopen("record.txt" ,"a");
    if(fptr==NULL){
        printf("Error in finding the file!");
    }
    while(fscanf(fptr ,"%s %d %f" ,s.name,&s.RollNo,&s.mark)!=EOF){
        if(rn==s.RollNo && (add=='y' || add=='Y')){
        printf("\nStudent Found!\n");
        printf("\nEnter new name:");
         scanf(" %[^\n]", s.name);

        printf("\nEnter Roll Number to Assigned: ");
        scanf("%d", &s.RollNo);

        printf("\nEnter Mark of new student: ");
        scanf("%f", &s.mark);
        flag=1;
        printf(" \n is record enterred(y/n): ");
        scanf("%c" ,&add);
    }
    
}
if(flag==1){
    printf("Record Update Successfully!\n");
    return;
}
else("Record Does Not found!");
}