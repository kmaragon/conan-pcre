#include <iostream>
#include <pcre.h>

using namespace std;

int main() {
    const char *regex = "^(.*)hello (.*)^";
    int errOffset;
    const char *pcreError;
    
    auto compiled = pcre_compile(regex, 0, &pcreError, &errOffset, NULL);
    pcre_free(compiled);
}
