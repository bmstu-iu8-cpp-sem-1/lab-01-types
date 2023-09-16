#!/usr/bin/env sh

restore_dir=$(pwd)
cd $(git rev-parse --show-toplevel)

set -e
export CTEST_OUTPUT_ON_FAILURE=true

case "$OSTYPE" in
    darwin*)
        echo "Warning! ASAN not supported on macOS! Will check for leaks, but results may differ"
        SANITIZER_OPTS="";;
    *) SANITIZER_OPTS="-Db_sanitize=address";;
esac

meson setup "$SANITIZER_OPTS" _builds
meson compile -C _builds tests

case "$OSTYPE" in
    darwin*)
        source scripts/macos_leak_check.sh
        macos_leak_check ./_builds/tests/tests /tmp/tests.memgraph
        open /tmp/tests.memgraph
        ;;
    *) ./_builds/tests/tests
esac

rm -r ./_builds

cd "$restore_dir"
