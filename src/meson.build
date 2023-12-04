sources = files('main.cc')
inc_dirs = include_directories()

add_project_arguments([
  '-DWLR_USE_UNSTABLE',
  ], language: ['c', 'cpp'])

executable('melody',
  sources,
  include_directories: inc_dirs,
  dependencies: [wlroots.get_variable('wlroots')])
