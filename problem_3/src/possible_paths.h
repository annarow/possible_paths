

long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}
//
long possiblePathsIterative(int M, int N) {
    // homework
    int array [N][M];
    //columns first for loop
    if(M == 0 or N == 0){
        return 0;
    }
    for(int row = 0; row < N; row++){
        for(int column = 0; column < M; column++){
            if(row == 0){
                array[row][column] = 1;
            }
            else if (column == 0){
                array[row][column] = 1;
            }
            else{
                array[row][column] = array[row-1][column] + array[row][column-1];
            }

        }
    }

    return array[N-1][M-1];
}
