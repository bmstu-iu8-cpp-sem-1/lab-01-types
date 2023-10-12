#!/usr/bin/env sh

restore_dir=$(pwd)
cd $(git rev-parse --show-toplevel)

set -e
export CTEST_OUTPUT_ON_FAILURE=true

meson setup _builds -Db_coverage=true
ninja -C _builds test
ninja -C _builds coverage

[ -z "$SAVE_CACHE" ] && rm -r _builds || mv _builds _cache

cd "$restore_dir"
