#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

// 1a
struct table { 
    uint8_t ncolumns;       // 1..26
    size_t nrows;           // current number of rows
    size_t max_rows;        // current maximum for realloc
    char **cells;           // array of (ncolumns * max_rows) pointers to strings
}   ;

// 1b
struct table *table_load_csv(const char *filename) {
    // TODO: to be implemented
}
