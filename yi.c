#include "yi.h"

// get_hexagram_name 的实现
const char* get_hexagram_name(int num) {
    if (num < 1 || num > 8) {
        return NULL; // 或者返回一个错误消息
    }
    return hexagrams[num - 1];
}