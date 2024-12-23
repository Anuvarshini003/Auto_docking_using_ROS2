#include <boost/array.hpp>
#include <iostream>
#include <cmath>

//distance function for middle point array
double dist( auto vector_i , auto vector_j){
    float dist = sqrt(pow(fabs(vector_i[0] - vector_j[0]),2)+pow(fabs(vector_i[1] - vector_j[1]),2));
    
    return dist;
}

//translate line vector to middle point array
auto mid_point(auto vector){
    boost::array<double, 2> mid ;
    mid[0] = (vector.start[0]+vector.end[0])/2 ;
    mid[1] = (vector.start[1]+vector.end[1])/2 ;

    return mid;
}

//middle point between two middle point array
auto mid_two_point( auto array_a , auto array_b){
    boost::array<double, 2> mid ;
    mid[0] = (array_a[0] + array_b[0])/2 ;
    mid[1] = (array_a[1] + array_b[1])/2 ;

    return mid;
}

//distance function for two line vector
double mid_dist( auto vector_i , auto vector_j){
    boost::array<double, 2> mid_i = mid_point(vector_i);
    boost::array<double, 2> mid_j = mid_point(vector_j);
    double dist = sqrt(pow(fabs(mid_i[0] - mid_j[0]),2)+pow(fabs(mid_i[1] - mid_j[1]),2));
    
    return dist;
}
