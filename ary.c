#include <stdio.h>

int main(void)
{
    int ary1[5] = {10,20,30,40,50};
    int ary2[7] = {10,20,30,40,50,60,70};

    print_ary(ary1,5 ); // ary1[5] 출력 -> 주소값으로
    printf("\n");
    print_ary(ary2,7 ); // ary2[7] 출력

    return 0;
}

void print_ary(int *pa, int size){ 
    for(int i=0; i<size; i++){
        printf("%d ", pa[i]); // 해당 배열의 주소를 하나하나 출력
    }
}

/* 
[실행프로세스]
ary1 |10|20|30|40|50|
ary2 |10|20|30|40|50|60|70|
print_ary()실행 -> ary1을 int *pa 인자로 받고 size = 5
i=0 -> pa[0] -> 10
i=1 -> pa[1] -> 20
.....
i=4 -> pa[4] -> 50
printf : 10 20 30 40 50 

ary2도 동일하게 실행 
return 0 
*/