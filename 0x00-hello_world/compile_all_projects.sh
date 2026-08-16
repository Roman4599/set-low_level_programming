#!/bin/bash
echo "🚀 Compiling all projects..."

for dir in 0x*/; do
    if [ -d "$dir" ]; then
        echo ""
        echo "📁 Entering $dir"
        cd "$dir"
        
        # Clean and compile
        make clean 2>/dev/null
        make 2>/dev/null
        
        echo "✅ Compiled $dir"
        cd ..
    fi
done
echo "✅ All projects compiled!"
