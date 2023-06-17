#include <stdio.h>

int main(){
    //　十六進数
    unsigned char i = 0xf; //　二進数：00001111
    unsigned char j = 0xff; //　二進数：11111111
    printf("%x << 1 = %x\n", i, i << 1); //　１ビット左シフト：　二進数：　00011110 = 0x1e0
    printf("%x >> 1 = %x\n", i, i >> 1); //　１ビット右シフト：　二進数：　00000111 = 0x7
    printf("%x | %x = %x\n", i, j, i | j); //　OR演算：　二進数：　11111111 = 0xff
    printf("%x & %x = %x\n", i, j, i & j); //　AND演算：　二進数：　00001111 = 0xf
    printf("*%x = %x\n", i, (unsigned char)i); //　NOT演算：　二進数：　11110000 = 0xf0
    return 0;
}