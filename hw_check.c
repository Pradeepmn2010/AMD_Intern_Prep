#include <stdio.h>
#include <stdint.h>

int main() {
    printf("--- AMD Hardware Data Width Check ---\n");
    printf("char:      %zu byte\n", sizeof(char));
    printf("int:       %zu bytes\n", sizeof(int));
    printf("long:      %zu bytes\n", sizeof(long));
    printf("uint8_t:   %zu byte\n", sizeof(uint8_t));
    printf("uint32_t:  %zu bytes\n", sizeof(uint32_t));
    return 0;
}
