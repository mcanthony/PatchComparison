#ifndef ProjectedDistance_H
#define ProjectedDistance_H

// Eigen
#include <Eigen/Dense>

// ITK
#include "itkImage.h"
#include "itkVectorImage.h"

template <typename TImage>
struct ProjectedDistance
{
  typedef Eigen::MatrixXf MatrixType;
  typedef Eigen::VectorXf VectorType;

  float Distance(const itk::ImageRegion<2>& region1,
                 const itk::ImageRegion<2>& region2);

  static float Distance(const TImage* const image, const MatrixType& projectionMatrix, const itk::ImageRegion<2>& region1,
                        const itk::ImageRegion<2>& region2);

  TImage* Image;

  MatrixType ProjectionMatrix;
};

#include "ProjectedDistance.hpp"

#endif
