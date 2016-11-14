# mruby-ui

Bindings to [libui](https://github.com/andlabs/libui) for MRuby.

The api should be up to date & complete with respect to libui's master branch. Still, this is certainly "pre-release" software,
at best. Libui itself is still in alpha as well.

See the [class_bindings.rb](https://github.com/jbreeden/mruby-ui/blob/master/mrblib/class_mappings.rb)
to get an overview of the classes and methods available (note that not all functions are defined there, many
are defined in [mruby_UI.c](https://github.com/jbreeden/mruby-ui/blob/master/src/mruby_UI.c) on the `UI` module itself). Or checkout some of the [examples](https://github.com/jbreeden/mruby-ui/tree/master/examples).

## Screenshots

These screenshots are from the control gallery example, which was ported from C to MRuby.

![Basic Controls](/images/basic_controls.png?raw=true "Basic Controls")
![Numbers and Lists](/images/numbers_and_lists.png?raw=true "Numbers and Lists")
![Data Choosers](/images/data_choosers.png?raw=true "Data Choosers")
