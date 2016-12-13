require 'mruby/rake/tasks'

ENV['CFLAGS'] = "-I #{File.expand_path('~')}/projects/vendor/libui -std=gnu99 -Wfatal-errors #{ENV['CFLAGS']}"

task :tags do
   sh "ctags -R ~/projects/vendor/libui ../mruby ."
end
