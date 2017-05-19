std::vector<std::vector<int>> reverseOnDiagonals(std::vector<std::vector<int>> matrix) {
    int len = matrix.size();
    for (int i = 0; i < len/2; i++) {
        int tmp = matrix[i][i];
        matrix[i][i] = matrix[len -1- i][len -1- i];
        matrix[len - 1 - i][len - 1 - i] = tmp;

        tmp = matrix[len - 1 - i][i];
        matrix[len - 1 - i][i] = matrix[i][len - 1 - i] ;
        matrix[i][len - 1 - i] = tmp;
    }
    return matrix;
}
