#!/bin/bash
echo "🔨 Building all projects..."
echo "============================"

for dir in 0x*/; do
    if [ -d "$dir" ]; then
        echo ""
        echo "📁 Building $dir..."
        cd "$dir"
        
        # Clean
        rm -f *.exe
        
        # Compile all .c files
        for file in *.c; do
            if [ -f "$file" ]; then
                gcc -Wall -Werror -Wextra -pedantic "$file" -o "${file%.c}.exe" 2>/dev/null
                if [ -f "${file%.c}.exe" ]; then
                    echo "  ✅ ${file%.c}.exe"
                fi
            fi
        done
        
        cd ..
    fi
done

echo ""
echo "============================"
echo "✅ All projects built!"
