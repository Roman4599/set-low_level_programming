#!/bin/bash
# Usage: ./run_file.sh 0x01-variables_if_else_while/0-positive_or_negative.c

if [ -z "$1" ]; then
    echo "Usage: ./run_file.sh <file_path>"
    echo "Example: ./run_file.sh 0x01-variables_if_else_while/0-positive_or_negative.c"
    exit 1
fi

if [ ! -f "$1" ]; then
    echo "❌ File $1 not found!"
    exit 1
fi

DIR=$(dirname "$1")
FILE=$(basename "$1")
OUTPUT="${FILE%.c}.exe"

echo "📁 Directory: $DIR"
echo "📄 File: $FILE"
echo "🔧 Compiling..."

cd "$DIR"
gcc -Wall -Werror -Wextra -pedantic "$FILE" -o "$OUTPUT" 2>/dev/null

if [ -f "$OUTPUT" ]; then
    echo "✅ Compiled successfully!"
    echo "🏃 Running..."
    ./"$OUTPUT"
else
    echo "❌ Compilation failed"
fi
cd - > /dev/null
