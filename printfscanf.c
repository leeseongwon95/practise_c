#include <stdio.h>

int main(void)
{
  int age = 12;
  printf("%d\n", age);
  age = 13;
  printf("%d\n", age); 

  // 실수형 변수에 대한 예제
  float f = 4.65;
  printf("%.2f\n", f);
  double d = 4.428;
  printf("%.3lf\n" , d); 

  // const int YEAR = 2000; // 상수
  // printf("태어난 년도: %d\n", YEAR);
  // YEAR = 2001;

  // printf 
  // 연산
  int add = 3 + 7; // 10
  printf("3 + 7 = %d\n", add); 

  // scanf
  // 키보드 입력을 받아서 저장

  int input;
  printf("값을 입력하세요 : ");
  scanf("%d\n", &input);
  printf("입력값: %d\n", input);

  int one, two, three;
  printf("3개의 정수를 입력하세요 : ");
  scanf("%d,%d,%d", &one, &two, &three);
  printf("첫번째 값: %d\n", one);
  printf("두번째 값: %d\n", two);
  printf("세번째 값: %d\n", three); 

  // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
  char c = 'C';
  printf("%c\n", c); 

  char str[256];
  sscanf("%s", str, sizeof(str));
  printf("%s\n", str); 

  return 0;
}
