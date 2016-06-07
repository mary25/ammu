#include <stdio.h>
    int main(void) {
      char a;
      scanf("%c",&a);
      if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
           printf("the given character is vowel");
      else
           printf("the given character is consonant");
      return 0;
    }
