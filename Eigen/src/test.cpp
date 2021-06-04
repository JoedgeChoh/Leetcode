#include <Eigen/StdVector>
#include <iostream>

int main() {
  Eigen::Vector3d src(1,2,3);
  Eigen::Vector3d dec(4,5,6);
  // std::cout<<src.transpose()<<std::endl<<dec.transpose()<<std::endl;
  // std::cout<<src.head(2).cwiseProduct(src.head(2)).sum()<<std::endl;
  Eigen::MatrixXf aMatrix( 3, 5 );
  aMatrix <<
  1, 2, 1, 2, 1,
  2, 1, 2, 1, 2,
  1, 1, 1, 1, 1;

  Eigen::VectorXf aVector( 5 );
  aVector << 3, 4, 5, 6, 7;
  
  std::cout<< aVector.replicate( 1, aMatrix.rows()).transpose()<<std::endl;
  std::cout << aMatrix.cwiseProduct( aVector.replicate( 1, aMatrix.rows() ).transpose() )<<std::endl;    
  return 0;
}
