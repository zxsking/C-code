

```c
//����1
#include <stdio.h>
#define  S(x) 4*x*x+1
int main() {
    int i=6,j=8;
    int c = S(i+j);     //4*i+j*i+j+1 ��ֱ�ӽ�i��j���벢û������
    printf("%d\n",c);
}
```