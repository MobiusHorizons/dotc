#export foo
int foo (int n) {
    return n * 111;
}

#export foo2
#define foo2 10

#export bazzy as bar
int bazzy (int n) {
    return n * foo2;
}
