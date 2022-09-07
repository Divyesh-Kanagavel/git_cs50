#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

using namespace std;
template <typename Object>

class Matrix{

    public:

    Matrix(int rows, int cols) : arr(rows)
    {
        for(auto& thisRow : rows)
        thisRow.resize(cols);
    }

    Matrix(vector<vector<Object>> v) : arr{v} {}

    Matrix(vector<vector<Object>>&& v) : arr {move(v)} {}

    const vector<Object>& operator[](int row) const{
        return arr[row];
    }

    vector<Object> & operator[] (int row) {
        return arr[row];
    }

    int numRows() const{
        return arr.size();
    }

    int numCols() const{
        return numRows() ? arr[0].size() : 0;
    }





    private:
    vector<vector<Object>> arr;



};

#endif