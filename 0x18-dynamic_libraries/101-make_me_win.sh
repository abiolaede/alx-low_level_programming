#!/bin/bash
wget -P /tmp/ https://raw.github.com/abiolaede/alx-low_level_programming/master/0x18-dynamic_libraries/bypass.so
export LD_PRELOAD=/tmp/bypass.so
