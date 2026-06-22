# AI: Pre-processor Co-pilot

## Scenario Choice
Scenario A: MAX(a, b) arithmetic macro.

## The Flawed Macro
#define MAX(a, b) a > b ? a : b
Bug: Missing parentheses causes operator precedence issues.
MAX(2 + 3, 4 + 1) expands to 2 + 3 > 4 + 1 ? 2 + 3 : 4 + 1
which evaluates incorrectly.

## Safety Inspector Prompt
"Act as a Senior C Developer. Review this macro:
#define MAX(a, b) a > b ? a : b
Find all operator precedence bugs, double evaluation
side effects, and unsafe patterns. Suggest a fix."

## Conditional Code Generator Prompt
"Act as a Senior C Developer. Generate robust scaffolding
for a MAX macro header file with these three requirements:
1. Include proper #ifndef/#define header guards
2. Add a DEBUG_MAX macro that prints both values being compared
3. Use #ifdef DEBUG to toggle between debug and release versions
of the macro"

## Fixed Macro
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
Every parameter wrapped in parentheses prevents precedence bugs.

## Analysis and Reflection
AI instantly identifies classic preprocessor pitfalls like missing
parentheses around macro parameters that cause silent operator
precedence bugs. These bugs are especially dangerous because they
compile without warnings yet produce wrong results at runtime.
Using AI as a safety inspector before compilation saves significant
debugging time on hard-to-trace logical errors.

## Files
- flawed_macro.c: Initial unsafe version of MAX macro
- fixed_macro.c: Refactored safe version with debug support
