// compile with: cc hello.c
//
// generates warning:
// hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
//  main()
//  ^~~~
//
#include <stdio.h>

main()
{
  printf("hello, world\n");
}
