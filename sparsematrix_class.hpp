#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>

class SparseMatrix {
public:
    virtual void add_value(unsigned int row, unsigned int col, double value) = 0;
    virtual unsigned int get_columns() = 0;
    virtual unsigned int get_rows() = 0;
    virtual unsigned int get_nnz() = 0;
    virtual double operator() (unsigned int row_idx, unsigned int col_idx) const = 0;  //reading on const
    virtual double& operator() (unsigned int row_idx, unsigned int col_idx) = 0;        //reading on non const
    //matrix product
    virtual std::vector<double> operator*(const std::vector<double>& vec) const = 0;
    virtual void print() const = 0;
    virtual ~SparseMatrix() = default;
};


#endif //HEADER_H
