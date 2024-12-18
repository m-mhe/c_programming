#include <stdio.h>

void main() {
  float base_salary, house_rent, da, gross_salary;
  printf("Enter base salary: ");
  scanf("%f", &base_salary);

  if (base_salary <= 1000) {
    house_rent = 0;
    da = 0.8 * base_salary;
  } else if (base_salary <= 2000) {
    house_rent = 0.25 * base_salary;
    da = 0;
  } else {
    house_rent = 0.3 * base_salary;
    da = 1.0 * base_salary;
  }
  gross_salary = base_salary + house_rent + da;
  printf("Gross Salary: %.2f\n", gross_salary);
}
