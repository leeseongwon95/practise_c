#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main_condition(void)
{
  int age = 15;
  if(age >= 20)
    printf("성인입니다");
  else 
    printf("학생 입니다");

  int age;
  printf("몇살이세요?");
  scanf("%d\n", &age);
  if (age >= 8 && age <= 13)
  {
    printf("초등학생 입니다.");
  }
  else if (age >= 14 && age <= 16)
  {
    printf("중학생입니다");
  }
  else if (age >= 17 && age <= 19)
  {
    printf("고등학생 입니다");
  }
  else
  {
    printf("학생이 아님");
  }
    int age = 18;
    switch(age)
    {
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:printf("초등학생 입니다\n"); break;
      case 14:
      case 15:
      case 16:printf("중학생 입니다\n");  break;
      case 17:
      case 18:
      case 19:printf("고등학생 입니다\n"); break;
      default: printf("학생이 아닌가봐요\n"); break;
    }


  for (int i = 1; i <= 30; i++)
  {
    if(i >= 6)
    {
      printf("나머지 학생은 집에 가세요");
      break;
    }
    printf("%d 번 학생은 발표를 준비하세요\n", i);
  }

  // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
  // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
  for (int i=1; i<=30; i++)
  {
    if(i >= 6 && i <= 10)
    {
      if (i == 7)
      {
        printf("%d 번 학생은 결석입니다\n", i);
        continue;
      }
      printf("%d 번 학생은 발표를 준비하세요\n", i);
    }
  }

  // && ||
  int a = 2;
  int b = 2;
  int c = 4;
  int d = 4;
  if (a == b && c == d)
  {
    printf("a 와 b 값이 같고, c 와 d 값이 같습니다");
  }
  else 
  {
    printf("값이서로다릅니다");
  }

  // 가위바위보

  srand(time(NULL));
  int i = rand() % 3; // 0 ~ 2 반환
  if (i == 0)
  {
    printf("가위\n");
  }
  else if (i == 1)
  {
    printf("바위\n");
  }
  else if (i == 2)
  {
    printf("보\n");
  }
  else 
  {
    printf("몰라요\n");
  }

  srand(time(NULL));
  int i = rand() % 3; 
  switch (i)
  {
    case 0: printf("가위\n"); break;
    case 1: printf("바위\n"); break;
    case 2: printf("보\n"); break;
    default: printf("몰라요\n"); break;
  }

  // return 0;

  // Up and Down
  srand(time(NULL));
  int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
  printf("숫자: %d\n", num);
  int answer = 0;
  int chance = 5;
  while (1)
  {
    printf("남은기회 %d 번\n", chance--);
    printf("숫자를 맞혀보세요: (1-100) : ");
    scanf("%d\n", &answer);

    if (answer > num)
    {
      printf("DOWN!!! \n\n");
    }
    else if (answer < num)
    {
      printf("UP!!! \n\n");
    }
    else if (answer == num)
    {
      printf("정답입니다!!!");
      break;
    }
    else
    {
      printf("알 수 없는 오류가 발생했습니다.");
    }

    if (chance == 0)
    {
      printf("실패했습니다.");
      break;
    }
  }
 return 0;
}