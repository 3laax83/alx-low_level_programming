#!/bin/bash
wget -P /tmp https://github.com/aeiedamo/alx-low_level_programming/raw/main/0x18-dynamic_libraries/neogm.so
export LD_PRELOAD=/tmp/neogm.so