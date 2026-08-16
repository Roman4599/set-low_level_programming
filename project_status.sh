#!/bin/bash
echo "📊 Project Status"
echo "================="

for dir in 0x*/; do
    if [ -d "$dir" ]; then
        cd "$dir"
        c_count=$(ls -1 *.c 2>/dev/null | wc -l)
        exe_count=$(ls -1 *.exe 2>/dev/null | wc -l)
        echo "📁 $dir: $c_count .c files, $exe_count executables"
        cd ..
    fi
done
