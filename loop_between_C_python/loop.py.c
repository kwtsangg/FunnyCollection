#if FALSE

from subprocess import call
print "YO! I am Python!"
call(["gcc", "loop.py.c", "-o", "loop"])
call(["./loop"])

'''foo'
#else
#include <stdio.h>
#include <stdlib.h>

int system(const char *command);

int main() {
  printf("YO! I am C!\n");
  system("python loop.py.c");
}

#endif

#if FALSE
'foo'''
#endif

