#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix = []
    for i in range(len(matrix)):
        lst = []
        for j in range(len(matrix[i])):
            lst.append(matrix[i][j]**2)
        new_matrix.append(lst)
    return new_matrix
