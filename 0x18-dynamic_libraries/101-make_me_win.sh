#!/bin/bash
wget -P /tmp https://github.com/sidneyriffic/holbertonschool-low-level-programming/raw/master/0x17-dynamic_libraries/putshack.s
export LD_PRELOAD=/tmp/bypass.so
