#include <stdio.h>
int main() {
    int Salary[3] = {20000, 35000, 50000}; // เงินเดือนพื้นฐานแต่ละตำแหน่ง
    int position, years, projects;
    int expBonus = 0, specialBonus = 0, netSalary = 0;

    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%d", &years);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);

    int baseSalary = Salary[position - 1];

    // คำนวณโบนัสตามอายุงาน
    if (years < 1) expBonus = 0;
    else if (years <= 3) expBonus = baseSalary * 10 / 100;
    else if (years <= 5) expBonus = baseSalary * 15 / 100;
    else expBonus = baseSalary * 20 / 100;

    // โบนัสพิเศษ
    if (projects > 5) specialBonus = baseSalary * 5 / 100;

    netSalary = baseSalary + expBonus + specialBonus;

    printf("Base Salary: %d THB\n", baseSalary);
    printf("Experience Bonus: %d THB\n", expBonus);
    printf("Special Bonus: %d THB\n", specialBonus);
    printf("Net Salary: %d THB\n", netSalary);

    return 0;
}