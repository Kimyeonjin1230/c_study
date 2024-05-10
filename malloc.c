/*동적할당을 배열처럼 사용하기*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi; //동적할당 영역의 포인터. pi변수에 동적할당을 받을 것임
    int sum =0;

    pi = (int *)malloc(5*sizeof(int)); //저장공간 20바이트 할당. 5행 4열
    
    //반환값이 null 포인터인지 확인
    if(pi==NULL){
        printf("메모리가 부족합니다.\n");
        exit(1);
    }

    printf("다섯명의 나이를 입력하세요.\n");
    for(int i=0; i<5; i++){
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("평균나이: %.1lf\n", (sum/5));
    free(pi); //할당한 메모리 영역 반환

    return 0;
}