#include <stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = 1;
    int *p_num;
    p_num = &num;
    
    printf("int型変数numのアドレス : %p\n",&num);
    printf("int型変数numのアドレス先の値 : %d\n",*(&num));
    printf("int型ポインタ変数p_numの参照先の値 : %d\n",*p_num);
    return 0;
}
