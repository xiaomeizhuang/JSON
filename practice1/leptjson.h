//
//  leptjson.h
//  JSONpractice
//
//  Created by xiaomeizhuang on 19/3/12.
//  Copyright © 2019年 xiaomeizhuang. All rights reserved.
//

#ifndef leptjson_h
#define leptjson_h

#include <stdio.h>

//JSON中的几种数据类型
typedef enum{LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT}lept_type;

//目前只是解析null/true/false,所以先只储存lept_type
typedef struct{
    lept_type type;
}lept_value;

//lept_parse返回值枚举类型
enum{
    LEPT_PARSE_OK=0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

int lept_parse(lept_value* v, const char* json);

//访问结果的函数，获取其类型
lept_type lept_get_type(const lept_value* v);

#endif /* leptjson_h */
