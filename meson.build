project('melody++',
  ['cpp', 'c'],
  version: '0.1.0',
  default_options: [
    'buildtype=debugoptimized',
    'c_std=c11',
    'cpp_std=c++2a',
    ])

add_project_arguments([
  '-Wno-unused-value',
  '-Wno-unused-parameter',
  ], language: ['c', 'cpp'])

wlroots = subproject('wlroots', default_options: ['renderers=gles2', 'examples=false'])

subdir('src')
