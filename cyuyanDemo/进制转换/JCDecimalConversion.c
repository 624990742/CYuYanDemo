//
//  JCDecimalConversion.c
//  cyuyanDemo
//
//  Created by jcmac on 2022/11/2.
//

#include "JCDecimalConversion.h"
///1.编写一递归程序实现任意正整数向八进制数的转换。
///十进制转换八进制
//十进制200转为八进制的值为300
int decimalConversion(int n){
    int tempNumber;
    if(n==0){
        return 0;
    }else{
        tempNumber=n%8;  //入栈 6 2 2
            n=n/8;     //18 2 0
        decimalConversion(n); //出栈 2 2 6
            printf("%d",tempNumber);
    }
   ///递归条件使用return结束最终只返回一个值
    return 0;
}
 
