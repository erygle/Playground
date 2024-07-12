#include<stdio.h>

union{
    char sector;
    struct{
        int salary;
        char *employee_name;
    }employee;
}system;

int main(int argc, char const *argv[]){
    //system.sector = 'C';
    system.employee.salary=5000;
    system.employee.employee_name="ery";
    printf("%d\n",system.employee.salary);
    printf("%s\n",system.employee.employee_name);
    /*printf("Enter your sector : ");
    scanf("%s",system.sector);
    printf("%s",system.sector);*/
    
    return 0;
}
