#include <stdio.h>

//int main(){
 //   printf("%d", printf("%s", "Hello world!"));
 //   return 0;
//}

// what's the output
// %s is used to print string of characters and %d whille print the total no. of characters 

// so the expected output is Hello world!12

/*
int main() {
    printf("%s\n", "Hello");
    printf("%10s", "Hello");
    return 0;
}
*/

//the output is hello
                      //hello
// this is because we use %10s this create the diffrent of 10 spaces       


//whats the output

int main() {
    char c= 255;
    c = c+10;
    printf("%d", c);
    return 0;
}