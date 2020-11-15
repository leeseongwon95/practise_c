#include <stdio.h>

#define MAX 10000
int main(void)
{
  // 파일 입출력
  // 파일에 어떤 데이터를 저장
  // 파일에 저장된 데이터 불러오기

  // fputs, fgets 쌍
  char line[MAX]; // char line[10000]

  // 파일에 쓰기

  FILE * file = fopen("c:\\test1.txt", "wb"); // \\ 두개써야 하나로 인식 // r w a 읽기 쓰기 이어쓰기 // t b 텍스트 바이널데이터
  if (file == NULL)
  {
    printf("파일 열기 실패\n");
    return 1;
  }
  fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
  fputs("잘 적히는지 확인해주세요\n", file);

  // 파일 읽기

  FILE * file = fopen("c:\\test1.txt", "rb"); // \\ 두개써야 하나로 인식 // r w a 읽기 쓰기 이어쓰기 // t b 텍스트 바이널데이터
  if (file == NULL)
  {
    printf("파일 열기 실패\n");
    return 1;
  }
  
  while (fgets(line, MAX, file) != NULL)
  {
    printf("%s", line);
  }

  // 파일을 열고 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면 ?
  // 데이터 손실 발생 가능 ! 그래서 항상 파일을 닫아주는 습관을 들어주세요
  fclose(file);

  // fprintf, fscanf 쌍

  int num[6] = {0,0,0,0,0,0};
  int bouns = 0;
  char str1[MAX];
  char str2[MAX];

  // 파일 쓰기

  FILE * file = fopen("c:\\test2.txt", "wb");
  if (file == NULL)
  {
    printf("파일 열기 실패");
    return 1;
  }

  // 로또 추첨 번호 저장
  fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
  fprintf(file, "%s %d\n", "보너스번호", 7);

  // 파일 읽기

  FILE * file = fopen("c:\\test2.txt", "rb");
  if (file == NULL)
  {
    printf("파일 열기 실패");
    return 1;
  }
  fscanf(file, "%s %d %d %d %d %d %d" ,str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
  printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

  fscanf(file, "%s %d", str2, &bouns);
  printf("%s %d\n", str2, bouns);



  fclose(file);


  return 0;
}