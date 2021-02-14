# README

## DESCRIPE


> this is a simple example using Stack. And I will update constantly  

### stack demo

#### 1.设计一个最小栈,除了需要支持常规栈的操作外,还需要支持在 O(1) 时间内查询栈内最小值的功能。

我们可以额外建立一个新栈,栈顶表示原栈里所有值的最小值。每当在原栈里插入一个数字时,若该数字小于等于新栈栈顶,则表示这个数字在原栈里是最小值,我们将其同时插入新栈内。每当从原栈里取出一个数字时,若该数字等于新栈栈顶,则表示这个数是原栈里的最小值之一,我们同时取出新栈栈顶的值。

#### 2.给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：
    左括号必须用相同类型的右括号闭合。
    左括号必须以正确的顺序闭合。

举例：字符串 "()"有效、"()[]{}"有效、"(]"无效、"([)]"无效、"{[]}"有效。

解题思路：
使用1个堆栈即可解决，依次遍历这个字符串，如果遇到是左括号就入栈到堆栈中，如果遇到的是右括号，则从堆栈中取出栈顶的第一个左括号，比对一下这个左括号和当前遇到的右括号是否匹配，如果不匹配这认为这整个字符串无效。如果能匹配，则OK，删除这个左括号和右括号，继续往后走，继续遍历字符串中剩下的字符，只要遇到左括号就入栈，只要遇到右括号就与将栈顶的左括号出栈与之比较。一直走到字符串结束，再来检查堆栈中是否还有元素，如果还有元素，则这个字符串同样无效，如果堆栈为空，则字符串有效。

### **操作**:  

```
$mkdir build bin
$cd build
$cmake .. && make
$cd ../bin
$./main
```

### GDB使用：

#### CMakeLists.txt 添加

```bash
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
```

#### 启动

```bash
gdb ./main
```

#### 参数

| 指令                  | 快捷键       |
| --------------------- | ------------ |
| start executable:     | gdb ./xx.out |
| show code:            | list         |
| set breakpoint:       | b num        |
| delete breakpoiny:    | d num        |
| run                   | start        |
| exec next step        | n            |
| jump next step        | c            |
| jump into func        | s            |
| jump out current func | finish       |
| exec                  | r            |
| print valuable        | p var        |
| quit                  | quit         |

