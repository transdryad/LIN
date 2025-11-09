project(
  'LIN',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : ['warning_level=3', 'cpp_std=c++23'],
)

dependencies = [
]

exe = executable(
  'LIN',
  'src/main.cpp',
  'src/token.hpp',
  'src/token.cpp',
  install : true,
  dependencies : dependencies,
)

test('basic', exe)
