project('lsrtm','c')

madagascar_proj = subproject('madagascar')
librsf_dep = madagascar_proj.get_variable('librsf_dep')

openmp_dep = dependency('openmp', language: 'c')

incdir = include_directories('include')

executable('mshots','Mmshots.c', dependencies : [openmp_dep, librsf_dep])

executable('lsprtm2d',['Mlsprtm2d.c','prtm2d.c'],
  dependencies : [openmp_dep, librsf_dep],
  include_directories : incdir)

executable('silsprtm2d',['Msilsprtm2d.c','prtm2d.c'],
  dependencies : [openmp_dep, librsf_dep],
  include_directories : incdir)
