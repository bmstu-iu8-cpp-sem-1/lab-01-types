deps = [
  dependency('gtest', fallback: ['gtest', 'gtest_dep']),
  dependency('gmock', fallback: ['gmock', 'gmock_dep']),
  # gmock_main initializes both gtest and gmock
  dependency('gmock_main', fallback: ['gmock_main', 'gmock_main_dep']),
  dependency('lab'),
]
inc_dirs = [
  '../include',
]
test_files = files('example.cpp')

extraarg = []
if get_option('coverage')
  extraarg += 'b_coverage=true'
endif

tests = executable('tests',
  test_files,
  install: false,
  dependencies: deps,
  include_directories: inc_dirs,
  override_options: extraarg,
)

test('Lab tests', tests)
