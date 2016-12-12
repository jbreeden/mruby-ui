require 'mruby/rake/tasks'

ENV['CFLAGS'] = "-std=gnu99 -I/home/jbreeden/projects/libui -Wfatal-errors #{ENV['CFLAGS']}"

task :tags do
   sh "ctags -R ../../libui ../mruby"
end
