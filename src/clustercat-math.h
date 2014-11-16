#ifndef INCLUDE_CLUSTERCAT_MATH
#define INCLUDE_CLUSTERCAT_MATH

double dot_product(const double probs[const], const double weights[const], int length);
float dot_productf(const float probs[const], const float weights[const], int length);

long int powi(long int base, long int exp);

#endif // INCLUDE_HEADER
