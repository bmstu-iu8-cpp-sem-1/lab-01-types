#!/usr/bin/env sh

restore_dir=$(pwd)
cd $(git rev-parse --show-toplevel)

set -e
export CTEST_OUTPUT_ON_FAILURE=true
export GTEST_COLOR=1

meson setup _builds
meson compile -C _builds tests
./_builds/tests/tests --verbose

rm -r ./_builds

cd "$restore_dir"
