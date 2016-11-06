require 'mruby/rake/tasks'

task :tags do
   sh "ctags -R ../../libui ../mruby"
end
