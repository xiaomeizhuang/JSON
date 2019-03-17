# 简介

这个repo是一个练习项目，参考Milo Yip的JSON库。

JSON解析器实际上是一个函数，输入JSON文本，输出对应到语言本身的数据结构，一共有7种数据类型（true和false算为两种）：

```c
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;
```

## practice1

关于true／null／false的解析，以及单元测试

## practice2

关于number／string的解析，以及单元测试

## practice3

关于Unicode／数组的解析，以及单元测试

## practice4

关于对象的解析，以及单元测试

## practice5

关于生成器

## practice6

关于访问与其他功能

