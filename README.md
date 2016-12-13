# mruby-ui

Bindings to [libui](https://github.com/andlabs/libui) for MRuby.

The api should be mostly up to date & complete with respect to libui's master branch. Still, this is certainly "pre-release" software,
at best. Libui itself is still in alpha as well.

## Screenshots

These screenshots are from the control gallery example, which was ported from C to MRuby.

![Basic Controls](/images/basic_controls.png?raw=true "Basic Controls")
![Numbers and Lists](/images/numbers_and_lists.png?raw=true "Numbers and Lists")
![Data Choosers](/images/data_choosers.png?raw=true "Data Choosers")

## Getting Started

You will see a `build_config.rb` in the root of this directory. That file is used to build a standalone mruby with
mruby-ui installed. This should allow you to quickly build and test the gem on your system against the examples
provided in the `examples/` directory.

If you're building mruby-ui into a project with its own `build_config.rb`, you can probably ignore this section.

The default `build_config.rb` assumes this gem will be checked out next to mruby, and so
finds itself while building with `../mruby-ui`. See the `gem` declarations in `build_config.rb`.
(TODO: Environment variable like MRBGEMS_HOME?)

So your directories where mruby-ui is cloned should look like this:

```
$PROJECT_ROOT
├── mruby/     # Clone of mruby
└── mruby-ui/  # Clone of mruby-ui
 ```

If your files aren't setup this way, update your `build_config.rb` accordingly.

Next:

- Make sure you have Bundler installed: `gem install bundler`
- Pull down dependencies: `bundle install`
- Compile & install [libui](https://github.com/andlabs/libui)
- Build: `bundle exec rake mruby:build`
  + You may need to configure the CFLAGS & LDFLAGS environment variables for this command,
    if you haven't installed the built libui files & header files into known
    system directories (or otherwise placed them on the appropriate paths).

After your build is finished, try running `./build/bin/mruby ./examples/controlgallery.rb` to test it.

Note: So far I'm only developing on Linux, but it should work the same across platforms. Though, you may
need to edit the `build_config.rb` file for your specific compiler options.
