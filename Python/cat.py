#!/usr/bin/env python3
import sys

if len(sys.argv) < 2:
    exit(1)

for path in sys.argv[1:]:
    f = open(path, 'r')
    print(f.read())
    f.close()
