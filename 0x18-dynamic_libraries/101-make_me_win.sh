#!/bin/bash
wget -O /tmp/code_injection https://github.com/MatiasMtz/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/code_injection.so?raw=true
export LD_PRELOAD="$PWD/../code_injection.so"
