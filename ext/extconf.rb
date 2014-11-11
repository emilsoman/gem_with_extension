require 'mkmf'
$CFLAGS << ' -g' # Enable debug flag
create_makefile('c_ext')
