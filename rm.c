// 「ファイルを消す」とは「実体につけた名前を減らす」こと
// 名前がなくなって初めて実体が消される
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int i;

  if (argc < 2)
  {
    fprintf(stderr, "%s: no arguments\n", argv[0]);
    exit(1);
  }

  for (i = 1; i < argc; i++)
  {
    if (unlink(argv[i]) < 0)
    {
      perror(argv[i]);
      exit(1);
    }
  }
  exit(0);
}
