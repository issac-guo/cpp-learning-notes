int factorial(int n){
    if (n == 0){
        return 1;
    }           //结束条件
    return factorial(n - 1) * n;
}