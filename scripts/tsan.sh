#!/usr/bin/env sh

restore_dir=$(pwd)
cd $(git rev-parse --show-toplevel)

set -e
export CTEST_OUTPUT_ON_FAILURE=true

case "$OSTYPE" in
    darwin*) echo "TSAN is not supported on macOS, sorry..." && exit 0;;
    *) SANITIZER_OPTS="-Db_sanitize=thread";;
esac

meson setup "$SANITIZER_OPTS" _builds
meson compile -C _builds tests

./_builds/tests/tests

rm -r ./_builds

cd "$restore_dir"
