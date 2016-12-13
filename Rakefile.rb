require 'mruby/rake/tasks'

ENV['CFLAGS'] = "-I ~/projects/vendor/libui/include -std=gnu99 -I/home/jbreeden/projects/libui -Wfatal-errors #{ENV['CFLAGS']}"

task :tags do
   sh "ctags -R ~/projects/vendor/libui ../mruby ."
end
