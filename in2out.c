#include <stdio.h>
#include <io.h>
#include <fcntl.h>


main() {   
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin),  _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    wchar_t c;
    while((c = getwchar())  != WEOF)
        putwchar(c);
}