#include<stdio.h>
main(){
        int a=1;  
        int num[100],i=0,count=0,j=0;
        while(a=1){	// ให้วน loop ไปเรื่อย ถ้า a=1 อันนี้เป็น infinity loop 
                printf("Enter number : ");	// แสดงข้อความรับค่า
                scanf("%d",&num[i]);	// รับค่าตัวเลขเก็บใน Array
                if(num[i]==0){	// ถ้า Array ในตำแหน่งล่าสุด มีค่าเท่ากับ 0
                        break;	// สั่งให้หยุดการทำงานของ loop นี้
                }
                i++; count++;	// บวกค่าของ i และ count เพิ่มครั้งละ 1 ของแต่ละรอบ
        }
	// ส่วนของการแสดงผลใน Array 
        for(j=0;j<=count;j++){	// วน loop for ตั้งแต่ j มีค่าเท่ากับ 0 จนถึง j มีค่าเท่ากับ count
                printf("%d ",num[j]);	// แสดงค่าของ Array ตั้งแต่ตำแหน่งที่ 0 จนถึงตำแหน่งล่าสุดคือ count
        }
}