file(GLOB SRC_HTTP "*.c" "*.h")
list(SORT SRC_HTTP)

add_library(http-parser STATIC ${SRC_HTTP})

enable_warnings(implicit-fallthrough=1)
