#include <stdio.h>
main(){
  int a;
  printf("(1)사과 | (2)키위 | (3)복숭아 | (4)수박\n");
  printf("좋아하는 과일은?");
  scanf("%d", &a);
  
  if(a==1)
    printf("사과를 좋아하는구나!");

  else if(a==2)
   printf("키위를 좋아하는구나!");

  else if(a==3)
   printf("복숭아를 좋아하는구나!");

  else if(a==4)
   printf("수박을 좋아하는구나!");

  else
      printf("넌 아마 과일을 좋아하지 않는 것 같아!");

printf("좋아하는 과일 조사 끝~:)");
}