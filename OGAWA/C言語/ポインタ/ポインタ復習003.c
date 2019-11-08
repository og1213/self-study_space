#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char str[]="Hello";
    int i_arr[]={0,1,2,3,4};
    float f_arr[]={0.0f,0.1f,0.2f,0.3f,0.4f};
    double d_arr[]={0.0,0.1,0.2,0.3,0.4};
    
    //ポインタ変数宣言
    char    *p_chr;
    int     *p_int;
    float   *p_flt;
    double  *p_dbl;
    
    p_chr = str;
    p_int = i_arr;
    p_flt = f_arr;
    p_dbl = d_arr;
    
    
    printf("char型ポイント変数p_chr : %p, アドレス先の値 : %c \n",p_chr,*p_int);
    printf("char型配列要素str[0]アドレス : %p, アドレス先の値 %c \n",&str[0],*(&str[0]));
    printf("char型ポイント変数(p_chr + 1) : %p, アドレス先の値 : %c \n",p_chr + 1,*(p_int + 1));
    printf("char型配列要素str[1]アドレス : %p, アドレス先の値 %c \n",&str[1],*(&str[1]));

    
    printf("int型ポイント変数p_int : %p, アドレス先の値 : %c \n",p_int,*p_int);
    printf("int型配列要素i_str[0]アドレス : %p, アドレス先の値 : %c \n",&i_arr[0],*(&i_arr[0]));
    printf("int型ポイント変数(p_int + 1) : %p, アドレス先の値 : %c \n",p_int +1 ,*(p_int + 1));
    printf("int型配列要素i_str[1]アドレス : %p, アドレス先の値 : %c \n",&i_arr[1],*(&i_arr[1]));

    printf("float型ポイント変数p_float : %p, アドレス先の値 : %lf \n",p_flt,*p_flt);
    printf("float型配列要素str[0]アドレス : %p, アドレス先の値 : %lf \n",&f_arr[0],*(&f_arr[0]));
    printf("float型ポイント変数(p_float + 1) : %p, アドレス先の値 : %lf \n",p_flt +1 ,*(p_flt + 1));
    printf("float型配列要素str[1]アドレス : %p, アドレス先の値 : %lf \n",&f_arr[1],*(&f_arr[1]));

    printf("");
    printf("");
    printf("");
    printf("");

    printf("Hello, World!\n");
    return 0;
}
