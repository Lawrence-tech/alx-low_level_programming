#!/bin/bash
wget -P /tmp https://github.com/Lawrence-tech/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
