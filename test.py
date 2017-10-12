#!/usr/bin/env python3
import gi
import sys

gi.require_version ('Test', '1.0')
from gi.repository import Test

if __name__ == "__main__":
    vals = Test.enum_array_return_type()
    if vals[1] != Test.Enum.BAR:
        sys.exit(1)
    sys.exit(0)
