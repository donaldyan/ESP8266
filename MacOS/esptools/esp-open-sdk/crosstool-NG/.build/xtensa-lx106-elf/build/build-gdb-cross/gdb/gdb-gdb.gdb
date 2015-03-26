echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gdb-7.5.1/gdb/../libiberty
dir /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gdb-7.5.1/gdb/../bfd
dir /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gdb-7.5.1/gdb
dir .
set prompt (top-gdb) 

define pdie
  if $argc == 1
    call dump_die ($arg0, 1)
  else
    if $argc == 2
      call dump_die ($arg0, $arg1)
    else
      printf "Syntax: pdie die [depth]\n"
    end
  end
end

document pdie
Pretty print a DWARF DIE.
Syntax: pdie die [depth]
end