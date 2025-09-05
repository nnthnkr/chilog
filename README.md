# chilog - a very simple logger in c
This is a single header only micro library to log information. I use it in my other mini projects. 

We can log 3 types of information:
- information
- warning
- error

### Usage
After including the header to our project, we get access to below 3 functions:
- `cl_INFO(const char *info_msg)`
- `cl_WARN(const char *warn_msg)`
- `cl_ERROR(const char *error_msg)`

All of them follow the same logging syntax: `[message type]: logging message`

```c
#include "chilog.h"

int main(void) {
    cl_INFO("Memory allocated.");
    cl_WARN("Low disk space.");
    cl_ERROR("Memory allocation failed.");
    
    return 0;
}
```

### colors
This library also supports colors for the `message type`. `cl_INFO` is green, `cl_WARN` is yellow and `cl_ERROR` is red. 

By default colors are not enabled. To enable these colors on supported unix consoles, pass the `-DCHILOG_COLORS` flag to gcc while compiling. 

NOTE: this won't work on windows terminal. 
