#!/bin/bash
# Auto-detect and set up make
if command -v mingw32-make &> /dev/null; then
    alias make='mingw32-make'
elif command -v make &> /dev/null; then
    # make is already available
    :
else
    # Try to find make in MSYS2
    if [ -f /c/msys64/mingw64/bin/mingw32-make.exe ]; then
        export PATH="/c/msys64/mingw64/bin:$PATH"
        alias make='mingw32-make'
    fi
fi

if [ -z "$1" ]; then
    echo "Usage: ./test_project.sh <project_directory>"
    echo "Available projects:"
    ls -d 0x*/
    exit 1
fi

if [ ! -d "$1" ]; then
    echo "❌ Directory $1 not found!"
    exit 1
fi

echo "🔍 Testing $1..."
cd "$1"

if [ -f "Makefile" ]; then
    # Use make if available, otherwise compile manually
    if command -v mingw32-make &> /dev/null || command -v make &> /dev/null; then
        make clean 2>/dev/null
        make 2>/dev/null
        make run 2>/dev/null
    else
        echo "⚠️  Make not found, compiling manually..."
        for file in *.c; do
            [ -f "$file" ] && gcc -Wall -Werror -Wextra -pedantic "$file" -o "${file%.c}.exe" 2>/dev/null
        done
        for exe in *.exe; do
            [ -f "$exe" ] && echo "=== $exe ===" && ./"$exe"
        done
    fi
else
    echo "📦 No Makefile found. Compiling all .c files..."
    for file in *.c; do
        [ -f "$file" ] && gcc -Wall -Werror -Wextra -pedantic "$file" -o "${file%.c}.exe" 2>/dev/null
    done
    for exe in *.exe; do
        [ -f "$exe" ] && echo "=== $exe ===" && ./"$exe"
    done
fi

cd ..
echo "✅ Done testing $1"
