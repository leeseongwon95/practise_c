#include <stdio.h>


struct GameInfo {
  char * name; 
  int year;
  int price; 
  char * company;
  
  struct GameInfo * friendGame; // 연관 업체 게임
};


typedef struct GameInfomation {
  char * name; 
  int year;
  int price; 
  char * company;
  
  struct GameInfo * friendGame; // 연관 업체 게임
} GAME_INFO;


int main_struct(void)
{
  // 게임 출시
  // 이름 : 나도 게임
  // 발매년도 : 2017년
  // 가격 : 50원
  // 제작사 : 나도회사

  char * name = "나도게임";
  int year = 2017;
  int price = 50;
  char * company = "나도회사";


  // [또다른 게임 출시]
  // 이름 : 샹구 게임
  // 발매년도 : 2018년
  // 가격 : 40원
  // 제작사 : 샹구회사

  char * name2 = "샹구게임";
  int year2 = 2018;
  int price2 = 40;
  char * company2 = "샹구회사";

  // 구조체 사용
  struct GameInfo gameInfo1;
  // struct GameInfo gameInfo2;
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2017;
  gameInfo1.price = 50;
  gameInfo1.company = "나도회사";

  // 구조체 출력
  printf("-- 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameInfo1.name);
  printf("  발매년도  : %d\n", gameInfo1.year);
  printf("  가격      : %d\n", gameInfo1.price);
  printf("  제작사    : %s\n", gameInfo1.company);

  // 구조체를 배열처럼 초기화
  struct GameInfo gameInfo2 = {"샹구게임", 2018, 40, "샹구회사"};
  printf("-- 또다른 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameInfo2.name);
  printf("  발매년도  : %d\n", gameInfo2.year);
  printf("  가격      : %d\n", gameInfo2.price);
  printf("  제작사    : %s\n", gameInfo2.company);

  // 구조체 배열 
  struct GameInfo gameArray[2] = {
    {"샹구게임", 2018, 40, "샹구회사"},
    {"샹구게임", 2018, 40, "샹구회사"}
  };

  // 구조체 포인터
  struct GameInfo * gamePtr; // 미션맨
  gamePtr = &gameInfo1;
  printf("\n\n-- 또다른 게임 출시 정보 --\n");
  // printf("  게임명    : %s\n", (*gamePtr).name); // *ptr int 형 변수의 주소값을 가지고 있는 것
  // printf("  발매년도  : %d\n", (*gamePtr).year);
  // printf("  가격      : %d\n", (*gamePtr).price);
  // printf("  제작사    : %s\n", (*gamePtr).company);

  printf("  게임명    : %s\n", gamePtr->name);
  printf("  발매년도  : %d\n", gamePtr->year);
  printf("  가격      : %d\n", gamePtr->price);
  printf("  제작사    : %s\n", gamePtr->company);

  // 연관 업체 게임 소개
  gameInfo1.friendGame = &gameInfo2;
  printf("\n\n-- 연관업체 게임 출시 정보 --\n");
  printf("  게임명    : %s\n", gameInfo1.friendGame->name);
  printf("  발매년도  : %d\n", gameInfo1.friendGame->year);
  printf("  가격      : %d\n", gameInfo1.friendGame->price);
  printf("  제작사    : %s\n", gameInfo1.friendGame->company);

  // typedef
  // 자료형에 별명 지정

  int i = 1;
  typedef int 정수;
  typedef float 실수;
  정수 정수변수 = 3; // int i = 3;
  실수 실수변수 = 3.12f; // float f = 3.12f;
  printf("\n\n정수변수 : %d, 실수변수 : %.2f\n", 정수변수, 실수변수);

  typedef struct GameInfo 게임정보;
  게임정보 game1;
  game1.name = "한글게임";
  game1.year = 2015;

  GAME_INFO game2;
  game2.name = "한글게임2";
  game2.year = 2014;

  struct GameInfomation game3;
  game3.name = "한글게임3";
  game3.year = 2013;
  
  return 0;
}