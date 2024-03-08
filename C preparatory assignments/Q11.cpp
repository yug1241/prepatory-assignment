#include <stdio.h>
struct Employee {
 char first_name[50];
 char last_name[50];
 double monthly_salary;
};
void emp_init(struct Employee* e, const char* first_name,
const char* last_name, double monthly_salary)
{
 strcpy(e->first_name, first_name);
 strcpy(e->last_name, last_name);
 e->monthly_salary = monthly_salary;
}
void set_salary(struct Employee *e, double sal) {
 e->monthly_salary = sal;
}
void emp_display(struct Employee *e) {
 printf("Employee: %s %s\n", e->first_name, e->last_name);
 printf("Monthly Salary: %.2f\n", e->monthly_salary);
}
int main() {
 struct Employee emp1, emp2;

 emp_init(&emp1, "John", "Doe", 5000.0);
 emp_init(&emp2, "Jane", "Smith", 6000.0);

 printf("Yearly Salary for Employee 1: %.2f\n",
emp1.monthly_salary * 12);
 printf("Yearly Salary for Employee 2: %.2f\n",
emp2.monthly_salary * 12);

 set_salary(&emp1, emp1.monthly_salary * 1.10);
 set_salary(&emp2, emp2.monthly_salary * 1.10);
 printf("\nAfter 10%% Raise:\n");
 printf("Yearly Salary for Employee 1: %.2f\n",
emp1.monthly_salary * 12);
 printf("Yearly Salary for Employee 2: %.2f\n",
emp2.monthly_salary * 12);
}