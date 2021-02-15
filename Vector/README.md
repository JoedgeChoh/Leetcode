# README

## DESCRIPE


> this is a simple example using vector. And I will update constantly  

### vector demo

#### 1.删除有序数组中重复的数组:

  遍历数组：
      while(当前元素==下一元素)
         删除下一元素
     

#### 2.将数组中的元素平移k个单位:

  while(k--):
    第i个数复制到第i+1的位置，最后一个数到第一个数的位置

#### 3.股票最大获利：

  while(数组中元素个数>1):
    遍历数组找到最小值及其索引;
    遍历最小值索引之后的数据，找到最大值及其索引;
    if(max-min):
        count+=max-min 删除这两个值
    else: 删除最小值
  return count

#### 4.只出现一次的数字

  遍历数组：
      false
      遍历数组中除当前元素外的其余元素：
          if(==)
             true
             跳出
      if(true)
         continue
      cout 当前元素

#### 5.给定一个长度为 n 的数组,其中包含范围为 1 到 n 的整数,有些整数重复了多次,有些整数没有出现,求 1 到 n 中没有出现过的整数

利用数组这种数据结构建立 n 个桶,把所有重复出现的位置进行标记,然后再遍历一遍数组,即可找到没有出现过的数字。进一步地,我们可以直接对原数组进行标记:把重复出现的数字在原数组出现的位置设为负数,最后仍然为正数的位置即为没有出现过的数。

#### 6.给定一个 n × n 的矩阵,求它顺时针旋转 90 度的结果

#### 7.给定一个二维矩阵,已知每行和每列都是增序的,尝试设计一个快速搜索一个数字是否在矩阵中存在的算法
输入是一个二维整数矩阵,和一个待搜索整数。输出是一个布尔值,表示这个整数是否存在于矩阵中。

#### 8. 给定一个含有 0 到 n 整数的数组,每个整数只出现一次,求这个数组最多可以分割成多少个子数组,使得对每个子数组进行增序排序后,原数组也是增序的
输入一个一维整数数组,输出一个整数,表示最多的分割数。
Input: [1,0,2,3,4]
Output: 4
在这个样例中,最多分割是 [1, 0], [2], [3], [4]

#### 9.给定一个整数数组,已知有且只有两个数的和等于给定值,求这两个数的位置
输入一个一维整数数组和一个目标值,输出是一个大小为 2 的一维数组,表示满足条件的两个数字的位置。
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
在这个样例中,第 0 个位置的值 2 和第 1 个位置的值 7 的和为 9

### **操作**:  

```
$mkdir build bin
$cd build
$cmake .. && make
$cd ../bin
$./vec

or

$sh run.sh
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

