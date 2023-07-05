 /*Print 1(true) and 0(false) for:
 a. If it's Sunday and it's raining -> true
 b. If it's Monday or it's raining -> true
 */
 #include <stdio.h>
 int main () {
    int sunday, monday, raining, n1;
    
    //a.
    printf("Is it Sunday?\n");
    printf("[1] 'YES'\n[0] 'NO'\n");
    scanf("%d", &sunday);
    
    printf("Is it Raining?\n");
    printf("[1] 'YES'\n[0] 'NO'\n");
    scanf("%d", &raining);
    
    printf("If it's Sunday and it's Raining -> True\n");
    printf("[1] 'TRUE'\n[0] 'FALSE'\n");
    printf("%d\n\n", sunday&&raining);
    
    //b.
    printf("Is it Monday?\n");
    printf("[1] 'YES'\n[0] 'NO'\n");
    scanf("%d", &monday);
    
    printf("If it's Monday or it's Raining -> True\n");
    printf("[1] 'TRUE'\n[0] 'FALSE'\n");
    printf("%d\n", monday||raining);
 }