#!/bin/bash
rm -rf /opt/project/build
cd /googletest/build && make
/opt/project/build/PrintDateTest
rm -rf /opt/project/build