#!/bin/bash
echo "🚀 Compiling all C programs in current directory..."

for file in *.c; do
    if [ -f "$file" ]; then
        output="${file%.c}.exe"
        echo "📦 Compiling $file -> $output"
        gcc -Wall -Werror -Wextra -pedantic "$file" -o "$output" 2>/dev/null
        if [ -f "$output" ]; then
            echo "✅ $output created successfully!"
        else
            echo "❌ Failed to compile $file"
        fi
    fi
done

echo ""
echo "🏃 Running all executables..."
for exe in *.exe; do
    if [ -f "$exe" ]; then
        echo "=== $exe ==="
        ./"$exe"
        echo ""
    fi
done
