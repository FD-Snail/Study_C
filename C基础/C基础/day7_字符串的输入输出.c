//
//  day7_字符串的输入输出.c
//  C基础
//
//  Created by wukeng on 2018/10/24.
//  Copyright © 2018年 吴铿. All rights reserved.
//

#include "day7_字符串的输入输出.h"

void StringScanfAndPrinte(void){
//    char buf[100] = {0};
//    printf("请输入字符串:\n");
//    scanf("%s",buf);   //不需要&，默认以空格分开
//    printf("buf = %s\n",buf);
//
//    char tmp[100] = {0};
//    printf("请输入字符串:\n");
//    scanf("%s",tmp);   //不需要&，默认以空格分开
//    printf("tmp = %s\n",tmp);
//    //scanf()的缺陷，不做越界检查
//    char str[10] = {0};
//    printf("请输入字符串:\n");
//    scanf("%s",str);
//    printf("str = %s\n",str);
    
    char buf2[100] = {0};
    //gets()从键盘读取字符串，放在指定的数组
    //运行有空格，不做越界检查
    gets(buf2);
    printf("buf2 = %s\n",buf2);
    
}
