#include<vector>
#include<iostream>
#include "test.h"


int main() {
	/*初始化一维数组*/
  // 方法1
	// int b[20]={5,1,5,9,1};
	// int a[100]={1,2,2,3,4,4,4,5,5,5};
  // int c[20]={4,2,3,3};
	// std::vector<int> vec1(a,a+2);
	// std::vector<int> vec2(a+2,a+10);
	// std::vector<int> vec3(b,b+5);
	// 方法2
  std::vector<int> vec1={1,2};
	std::vector<int> vec2={2,3,4,4,4,5,5,5};
	std::vector<int> vec3={5,1,5,9,1};
	std::vector<int> vec5={4,2,3,3};
	std::vector<int> vec7={2, 7, 11, 15};

	/*初始化二维数组*/
  // 方法1(nxn矩阵)
	// int num=3; // default value
  // std::vector<std::vector<int>> vec6(num);
  // for(int i=0;i<num;i++)
	// 		vec6[n].resize(num);
	// 	}
	// }
  // 方法2
  std::vector<std::vector<int>> vec4={{1,2,3},{4,5,6},{7,8,8}};
  std::vector<std::vector<int>> vec6={{0,0,0},{0,0,0},{0,0,0}};

  /*矩阵90度顺时针旋转*/
  std::cout<<"初始矩阵为"<<std::endl;
  matrixPrintf(vec4);
  std::cout<<"旋转后矩阵为"<<std::endl;
  vec6=rotate(vec4);
  matrixPrintf(vec6);
  // std::cout<<vec4.size()<<std::endl;// 行数
  // std::cout<<vec4[0].size()<<std::endl;// 列数
  
  /*搜索矩阵中是否存在目标值*/
  if(searchMatrix(vec4, 0)) {
    std::cout<<"Yes"<<std::endl;
  }
  else {
    std::cout<<"No"<<std::endl;
  }
  /*vec2插入到vec1的后面*/
	// vec1.insert(vec1.end(),vec2.begin(),vec2.end()); 	
  // std::cout<<"origin array"<<std::endl;
	// printf(vec1);
	
    /* 删除数组中重复的element*/
 //  std::cout<<"delete repeat element"<<std::endl;
 //  array(vec1);
 //  printf(vec1);

     /*数组平移k个单位*/
 //  std::cout<<"rotate array"<<std::endl;
 //  rotate(vec1,3);
 //  printf(vec1);

      /*股票最大获利*/
 //  int count=maxProfit(vec1);
 //  std::cout<<"the max profit is "<<count<<std::endl;
 //  //maxProfit(vec1);
 //  
     /*输出只出现一次的数据*/
 //  std::cout<<"vec3中只出现一次的数字: "<<singleNumber(vec3)<<std::endl;
 //  
     /* 找出数组中没有出现的数字*/
 //  findDisappearNumbers(vec5,vec6);
 //  printf(vec6);

/*给定一个整数数组,已知有且只有两个数的和等于给定值,求这两个数的位置*/
  int target=9;
  std::vector<int> vec8=twoSum(vec7,target);
  printf(vec8);












	return 0;
}
