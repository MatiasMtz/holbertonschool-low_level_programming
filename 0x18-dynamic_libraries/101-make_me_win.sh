#!/bin/bash
wget -O /tmp/code_injection.so https://github.com/MatiasMtz/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/code_injection.so
export LD_PRELOAD=/tmp/code_injection.so
