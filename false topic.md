

```c
//错题1
#include <stdio.h>
#define  S(x) 4*x*x+1
int main() {
    int i=6,j=8;
    int c = S(i+j);     //4*i+j*i+j+1 是直接将i和j带入并没有括号
    printf("%d\n",c);
}
```