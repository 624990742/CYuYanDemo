//
//  JCCarLicense.c
//  cyuyanDemo
//
//  Created by jcmac on 2022/11/2.
//

#include "JCCarLicense.h"
//2、假设某个城市允许机动车所有人自己编写小汽车的以“京N”开头的号牌的后5位。
//自编小汽车号牌的规则如下：号牌号码的最后一位必须为数字，其余四位有且必须有两位为
//大写英文字母（字母I、0不可用）。例如：京NAB999,京NC9D99,京NE99F9,京N9GH99,
//京 N9J9K9,京 N99LM9 等。
bool isCarNumberRightful(int cardNumberLen,char carNumStr[]){
    bool isRight = false;
    int rightCarNumberLen = cardNumberLen;
    if(cardNumberLen == 0){
        printf("\n汽车牌照最长位数不能为0");
        return isRight;
    }
    if (carNumStr == NULL) {
        printf("\n汽车牌照不能为空");
        return isRight;
    }
    size_t len = strlen(carNumStr);
    if (len == 0) {
        printf("\n汽车牌照不合法,请检查长度");
        return isRight;
    }
    char tempArr[strlen(carNumStr)];
    ///1.长度超过指定位数直接为不合法，结束。
    if (len > rightCarNumberLen || len < rightCarNumberLen) {
        printf("\n汽车牌照不合法,请检查长度");
        return isRight;
    }
    ///2.字符串中包含大写字母"I"和大写字母"O"不合法结束
    if(strstr(carNumStr,"I") || strstr(carNumStr,"O")){
        printf("\n汽车牌照不合法,不允许包含大写字母I或者O");
        return isRight;
    }
    ///3.外部传入的carNumStr赋值给tempArr供函数内部使用
    strcpy(tempArr,carNumStr);
    
    ///4.最后一位必须为数字,否则不合法，结束。
    char lastLetter = tempArr[len -1];
     if(lastLetter>='0' && lastLetter<='9'){
         printf("\n满足最后一位是数字的要求继续走");
     }else{
         printf("\n汽车牌照不合法,最后一位字符必须为数字");
         return isRight;
     }
    
    ///5.取出来前4位数
    ///如果大写字母计数器大于2证明包含两个大写字母
    int bigLetterCounter = 0;
    for(int i= 0 ;i < rightCarNumberLen - 1;i++){
        if((tempArr[i] >= 'A') && (tempArr[i]<='Z')){
            bigLetterCounter++;
        }
    }
    if(bigLetterCounter < 2 || bigLetterCounter > 4){
        printf("\n汽车牌照不合法。四位数字中有且必须有两位大写字母");
        return isRight;
    }
    
    if(bigLetterCounter >= 2 && bigLetterCounter <=4){
        isRight = true;
        printf("%d",bigLetterCounter);
    }
    if(isRight){
        printf("\n汽车牌照合法");
    } else {
        printf("\n汽车牌照不合法");
    }
    scanf("%s",tempArr);
    return isRight;
}
