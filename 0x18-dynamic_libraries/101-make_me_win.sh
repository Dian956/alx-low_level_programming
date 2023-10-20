#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Dian956/alx-low_level_programming/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD="$PWD/../100-operations.so"
