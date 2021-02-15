#include<vector>
#include<iostream>
// #include "test.h"

/*@brief:1.删除数组中重复的element
*/
void array(std::vector<int> &vec) {
	for(size_t i=0;i<vec.size();i++) {
		while(vec[i]==vec[i+1]&&(i+1)!=vec.size()){
			vec.erase(vec.begin()+(i+1));
		}
		continue;
	}
}

/**
 *@brief: 打印vector的值
 * */
void printf(std::vector<int>& vec ) {
	// std::vector<int>::iterator it;
	// for(it=vec.begin();it!=vec.end();it++) {
	// 	std::cout<<*it<<" ";
	// }
  for(int it:vec) {
    std::cout<<it<<" ";
  }
    std::cout<<std::endl;

}
/*
 *@brief:打印二维矩阵
 * */
void matrixPrintf(std::vector<std::vector<int> >& vec) {
	for(size_t i=0;i<vec.size();i++) {
		for(size_t j=0;j<vec[0].size();j++) {
			std::cout<<vec[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
}

/**
 *@brief:3.股票最大获利
 * */
int maxProfit(std::vector<int>& vec) {
		int count=0;
		while(vec.size()>1) {
	    int i=vec.size(),j=vec.size(),index_min=0,index_max=0;
			int min=vec[0];
			while(--i) {
				if(vec[i]<min) {
					min=vec[i];
					index_min=i;
				}
			}
			//std::cout<<"index_min="<<index_min<<std::endl;
			int max=vec[index_min];
			while(--j>index_min) {
				if(vec[j]>max) {
				  max=vec[j];
					index_max=j;
				}
			}
			//std::cout<<"index_max="<<index_max<<std::endl;
			if(max>min) {
			  count+=max-min;
		    //std::cout<<"count="<<count<<std::endl;
        vec.erase(vec.begin()+index_min);
				vec.erase(vec.begin()+index_max-1);
				//printf(vec);
			}
      else {
        vec.erase(vec.begin()+index_min);
			}
		  //std::cout<<"vec_size="<<vec.size()<<std::endl;
	}
		return count;
}

/*
 *@brief: 2.数组平移k个单位
 * */
void rotate(std::vector<int>& vec,int k) {
	for(int i=0;i<k;i++) {
		int n = vec.size()-1;
		int t=vec[n];
		while(n!=0) {
			vec[n]=vec[n-1];
			n--;
		}
		vec[0]=t;
	}

}

/*
 *@brief: 4.打印数组中只出现一次的数据
 * */

int singleNumber(std::vector<int>& vec) {
	int count;
	size_t i=vec.size();
	while(--i>=0) {
		bool signal=false;
    for(size_t j=0;j<vec.size();j++) {
			if(j==i) {
				continue;
			}
			if(vec[j]==vec[i]) {
			  signal=true;
				break;
			}
		}
		if(signal) {
		  continue;
		}
		count=vec[i];
		break;
	}
	return count;
}

/**
 *@brief：5.找出数组中没有出现的数字
 * */
std::vector<int> findDisappearNumbers(std::vector<int> &vec,std::vector<int>& ans) {
  for(const int i:vec) {
    if(vec[i-1]>0) {
      vec[i-1]=-vec[i-1];
    }
  }
  for(size_t j=0;j<vec.size();j++) {
    if(vec[j]>0) {
    ans.push_back(j+1);
    }
  }
  return ans;
}

/*
 *@brief 给定一个 n × n 的矩阵,求它顺时针旋转 90 度的结果
 * */
std::vector<std::vector<int>> rotate(std::vector<std::vector<int>>& matrix) {
  int n=matrix[0].size();
  // std::vector<std::vector<int>> ans={{0,0,0},{0,0,0},{0,0,0}};
  std::vector<std::vector<int>> ans(n);
  for(int m=0;m<n;m++) {
    ans[m].resize(n);
  }
  for(int j=0;j<n;j++) {
    for(int i=n-1;i>=0;i--) {
      ans[j][n-1-i]=matrix[i][j];
    }
  }
  return ans;
}


/*
 *@brief 6.给定一个 n × n 的矩阵,求它顺时针旋转 90 度的结果,且必须在原矩阵上修改(in-place)
 * */
void rotate_(std::vector<std::vector<int>>& matrix) {
  //
}


/*
 *@brief: 7.给定一个二维矩阵,已知每行和每列都是增序的,尝试设计一个快速搜索一个数字是否在矩
阵中存在的算法
 * */
bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
  int row=matrix.size();
  int col=matrix[0].size();
  int sign=-1;
  for(int i=0;i<row;i++) {
    if(matrix[i][col-1]>target) {
      sign=i;
      break;
    }
    if(matrix[i][col-1]==target) return true; 
  }
  if(sign<0) return false;
  else {
    for(int i=0;i<col;i++) {
      if(matrix[sign][i]==target) return true;
    }
    return false;
  }
}


/*给定一个整数数组,已知有且只有两个数的和等于给定值,求这两个数的位置*/
std::vector<int> twoSum(std::vector<int>& nums, int target) {
  std::vector<int> ans;
    for (size_t i=0;i<nums.size()-1;i++) {
      for (size_t j=i;j<nums.size();j++) {
        if(nums[i]+nums[j]==target) {
          ans.push_back(i);
          ans.push_back(j);
        }
      }
 }
  return ans;
}


































































