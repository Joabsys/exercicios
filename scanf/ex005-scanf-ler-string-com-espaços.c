#include <stdio.h>

int main() {
    char name[51];  // 50 characters + null terminator
    int age, grade_level;
    float academic_score;
printf("Enter student name:\n");
scanf("%[^\n]",name);//ler string com espaços
printf("Enter student age:\n");
scanf("%d",&age);
printf("Enter grade level\n");
scanf("%d",&grade_level);
printf("Enter academic score:\n");
scanf("%f",&academic_score);
printf("--- Student Information ---\n");
printf("Name:%s\n",name);
printf("Age:%d\n",age);
printf("Grade Level:%d\n",grade_level);
printf("Academic Score:%.2f\n",academic_score);
    // TODO: Prompt the user for student details using printf() and scanf()

    // TODO: Display the collected student information with formatted output

    return 0;
}