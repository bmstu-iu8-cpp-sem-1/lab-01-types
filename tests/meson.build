deps = [
  dependency('gtest', fallback: ['gtest', 'gtest_dep']),
  dependency('gmock', fallback: ['gtest', 'gmock_dep']),
  # gmock_main initializes both gtest and gmock
  dependency('gmock_main', fallback: ['gtest', 'gmock_main_dep']),
  dependency('lab'),
]
inc_dirs = [
  '../include',
]
test_files = files('example.cpp')

extraarg = []

tests = executable('tests',
  test_files,
  install: false,
  dependencies: deps,
  include_directories: inc_dirs,
  override_options: extraarg,
)

test('Lab tests', tests)
