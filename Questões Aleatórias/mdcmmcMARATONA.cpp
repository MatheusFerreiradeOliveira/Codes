//MMC MDC
int mdc(int a, int b) {
    return b ? mdc(b, a % b) : a;
}

int mmc(int a, int b) {
    return a * b / mdc(a, b);
}
