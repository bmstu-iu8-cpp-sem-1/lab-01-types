file_list = files(
  # remove it and add your own
  'example.cpp',
)
deps = []
inc_dirs = [
  '../include',
]

extraarg = []

lab_lib = static_library('lab',
  file_list,
  install: true,
  dependencies: deps,
  include_directories: inc_dirs,
  override_options: extraarg,
)

lab = declare_dependency(
  link_with: lab_lib,
  dependencies: deps,
  include_directories: inc_dirs,
)

meson.override_dependency('lab',
  lab,
  native: true,
  static: true,
)
