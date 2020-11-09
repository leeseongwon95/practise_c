#include <stdio.h>

int main(void)
{
  // 배열
  // int subway_1 = 30;
  // int subway_2 = 40;
  // int subway_3 = 50;

  // printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
  // printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
  // printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);

  // int subway_array[3]; // [0] [1] [2]
  // subway_array[0] = 30;
  // subway_array[1] = 40;
  // subway_array[2] = 50;

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("지하철 %d 호차에 %d 명이 타고 있습니다.\n", i+1, subway_array[i]);
  // }

  // 값 설정 방법

  // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }

  // 값 초기화는 반드시 해야함 (아니면 더미값이 나옴)
  // int arr[10];
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }

  // 배열 표기는 항상 상수로 선언
  // int size = 10;
  // arr[10];

  // int arr[10] = {1 ,2}; // 3번째 값부터는 자동으로 '0' 으로 초기화 됨
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }


  // int arr[] = {1,2}; // arr[2];

  // float arr_f[5] = {1.0f, 2.0f, 3.0f}; // 4번째 부터 자동으로 '0' 으로 초기화
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%.2f\n", arr_f[i]);
  // } 

  // 문자, 문자열

  // char c = 'A';
  // printf("%c\n", c);


  // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '₩0' 이 포함되어야 함
  // char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] [₩0]
  // char str[7] = "coding"; 
  // printf("%s\n", str);


  // char str[] = "coding";
  // // printf("%s\n", str);
  // // printf("%lu\n", sizeof(str)); // 7 이 나옴


  // for (int i = 0; i < sizeof(str); i++)
  // {
  //   printf("%c\n", str[i]);
  // }

  char kor[] = "이서워";
  printf("%s\n", kor);
  printf("%lu\n", sizeof(kor));

  // 영어 한글자 1바이트
  // 한글 한글자 2바이트 (유니코드 일때)
  // 유니코드는 국제표준 문자표
  // (utf-8 이면 3바이트) 인코딩 방식

  // char 1바이트
  return 0;
}