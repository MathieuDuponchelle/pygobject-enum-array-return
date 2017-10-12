project('gobject-introspection-test', 'c')

libsources = ['test.c', 'test.h']

gnome = import('gnome')
gobj = dependency('gobject-2.0')

test_project = shared_library(
  'testproject',
  sources : libsources,
  dependencies : [gobj],
  install : true
)

gnome.generate_gir(
  test_project,
  sources : libsources,
  dependencies : [gobj],
  nsversion : '1.0',
  namespace : 'Test',
  symbol_prefix : 'test_',
  identifier_prefix : 'Test',
  includes : ['GObject-2.0'],
  install : true
)

envdata = environment()
envdata.append('GI_TYPELIB_PATH', meson.current_build_dir())
envdata.append('LD_LIBRARY_PATH', meson.current_build_dir())

test('py', find_program('test.py'), env: envdata)
