#include <Python.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    Py_Initialize();
    
    printf("Hello, World!\n");
    printf("Python version: %s\n", Py_GetVersion());
    
    Py_Finalize();
    return 0;
}
