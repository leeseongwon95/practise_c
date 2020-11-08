#include <stdio.h>

// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int apple(int total, int ate);
int main_function(void)
{
  // Function
  // 게산기

  // int num = 2; 
  // // printf("num은 %d 입니다\n", num);
  // p(num); // 2

  // // 2 + 3 ?
  // num = num + 3; // num += 3;
  // // printf("num은 %d 입니다\n", num);
  // p(num); // 5

  // // 5 - 1 ?
  // num -= 1;
  // // printf("num은 %d 입니다\n", num);
  // p(num); // 4

  // // 4 x 3 ?
  // num *= 3;
  // // printf("num은 %d 입니다\n", num);
  // p(num); // 12

  // // 12 / 6 ?
  // num /= 6;
  // // printf("num은 %d 입니다\n", num);
  // p(num); // 2

  // 함수 종류
  // 반환값이 없는 함수

  // function_without_return();

  // 반환값이 있는 함수

  // int ret = function_with_return();
  // p(ret);

  // 파라미터(전달값)이 없는 함수
  // function_without_params();

  // 파라미터(전달값)이 있는 함수
  // function_with_params(1, 2, 3);


  // 파라미터(전달값)도 받고, 반환값도 있는 함수

  // int ret = apple(5, 2); // 5개의 사과중에 2개를 먹었습니다.

  // printf("사과 5개중에 2개를 먹으면? %d개가 남아요\n", ret);
  // printf("사과 %d개 중에 %d개를 먹으면, %d개가 남아요", 10, 4, apple(10, 4));


  // 계산기 함수
  int num = 3;

  num = add(num, 3);
  p(num);

  
  num = sub(num, 3);
  p(num);

  
  num = mul(num, 3);
  p(num);

  
  num = div(num, 3);
  p(num);


  return 0;
}

// 정의
void p(int num)
{
  printf("num은 %d 입니다\n", num);
}
void function_without_return()
{
  printf("반환값이 없는 함수 입니다.");
}

int function_with_return()
{
  printf("반환값이 있는 함수입니다.\n");
  return 10;
}

void function_without_params()
{
  printf("전달값이 없는 함수입니다.");
}

void function_with_params(int num1,int num2,int num3)
{
  printf("전달값이 있는 함수이며, 전달값은 %d,%d,%d 입니다\n", num1, num2, num3);
}

int apple(int total, int ate)
{
  printf("전달값과 반환값이 있는 함수입니다.\n");
  return total - ate;
}

int add(int num1, int num2)
{
  return num1 + num2;
}

int sub(int num1, int num2)
{
  return num1 - num2;
}

int mul(int num1, int num2)
{
  return num1 * num2;
}

int div(int num1, int num2)
{
  return num1 / num2;
}