# mruby-ui

Bindings to [libui](https://github.com/andlabs/libui) for MRuby.

The api should be mostly up to date & complete with respect to libui's master branch. Still, this is certainly "pre-release" software,
at best. Libui itself is still in alpha as well.

See the [class_bindings.rb](https://github.com/jbreeden/mruby-ui/blob/master/mrblib/class_mappings.rb)
to get an overview of the classes and methods available (note that not all functions are defined there, many
are defined in [mruby_UI.c](https://github.com/jbreeden/mruby-ui/blob/master/src/mruby_UI.c) on the `UI` module itself). You
may also want to check out the [examples](https://github.com/jbreeden/mruby-ui/tree/master/examples).

## Screenshots

These screenshots are from the control gallery example, which was ported from C to MRuby.

![Basic Controls](/images/basic_controls.png?raw=true "Basic Controls")
![Numbers and Lists](/images/numbers_and_lists.png?raw=true "Numbers and Lists")
![Data Choosers](/images/data_choosers.png?raw=true "Data Choosers")

## Getting Started

- First checkout this repo.
- Make sure you have Bundler installed (`gem install bundler`)
- `bundle install` to pull down development dependencies.
- You'll need to compile/install [libui](https://github.com/andlabs/libui) yourself.
- `make build` to build mruby with mruby-ui.
- After your build is finished, try running `./build/bin/mruby ./examples/controlgallery.rb` to test it.

Note: So far I'm only developing on Linux, but it should work the same across platforms. Though, you may
need to edit the `build_config.rb` file for your specific compiler options.
