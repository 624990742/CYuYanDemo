//
//  JCCarLicense.h
//  cyuyanDemo
//
//  Created by jcmac on 2022/11/2.
//

#ifndef JCCarLicense_h
#define JCCarLicense_h
#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef enum{
    true=1,
    false=0
}bool;
/** 是否是按照规则产生的正确的拍照 */
bool isCarNumberRightful(int cardNumberLen,char carNumStr[]);
#endif /* JCCarLicense_h */
