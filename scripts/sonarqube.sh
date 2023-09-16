#!/usr/bin/env sh

restore_dir=$(pwd)
cd $(git rev-parse --show-toplevel)

set -e
export CTEST_OUTPUT_ON_FAILURE=true
project_name=`basename $(git remote get-url origin) .git`

sonar-scanner \
    -D sonar.projectKey="$project_name" \
    -D sonar.cxx.file.suffixes=.h,.cpp,.cc,.c,.hpp \
    -D sonar.exclusions='subprojects/**,third-party/**,tools/**,tests/**' \
    -D sonar.cxx.jsonCompilationDatabase='_cache/compile_commands.json' \
    -D sonar.cxx.cobertura.reportPaths='_cache/meson-logs/coverage.xml'

cd "$restore_dir"
