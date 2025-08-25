#include <stdio.h>

int main() {
    int money, price = 20, change;
    int cupAvailable = 1; // 1 = มีแก้ว, 0 = แก้วหมด
    int member = 0;       // 1 = เป็นสมาชิก, 0 = ไม่เป็น
    int payMethod;        // 1 = เงินสด, 2 = e-Wallet

    printf("=== ตู้เต่าบิน ===\n");
    printf("กรุณาหยอดเหรียญ (บาท): ");
    scanf("%d", &money);

    if (money >= 10) {
        printf("เลือกสินค้า ราคา %d บาท\n", price);

        if (cupAvailable == 1) {
            printf("ตรวจสอบแก้ว: มีแก้วพร้อมใช้งาน\n");

            if (money >= price) {
                change = money - price;
                printf("ทำเครื่องดื่มสำเร็จ\n");
                printf("กรุณารับสินค้า\n");

                if (change > 0) {
                    printf("กรุณารับเงินทอน %d บาท\n", change);
                }

                printf("คุณเป็นสมาชิกหรือไม่? (1=ใช่, 0=ไม่): ");
                scanf("%d", &member);

                if (member == 1) {
                    printf("ชำระเงินผ่านอะไร? (1=เงินสด, 2=E-Wallet): ");
                    scanf("%d", &payMethod);

                    if (payMethod == 1) {
                        printf("จ่ายเงินสดสำเร็จ\n");
                    } else if (payMethod == 2) {
                        printf("จ่ายผ่าน E-Wallet สำเร็จ\n");
                    } else {
                        printf("วิธีการชำระเงินไม่ถูกต้อง\n");
                    }
                } else {
                    printf("ลูกค้าไม่ใช่สมาชิก\n");
                }

            } else {
                printf("ยอดเงินไม่พอ กรุณาเติมเงินเพิ่ม\n");
            }

        } else {
            printf("ขออภัย แก้วหมด!\n");
        }

    } else {
        printf("เงินไม่เพียงพอ (อย่างน้อย 10 บาท)\n");
    }

    printf("=== สิ้นสุดการทำงาน ===\n");
    return 0;
}
