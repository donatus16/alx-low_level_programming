#!/bin/bash
wget -O /tmp/win.so https://github.com/donatus16/alx-low_level_programming.git/raw/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
