require 'mruby/rake/tasks'

task :tags do
   sh "ctags -R ../../libui ../mruby"
end

namespace :bindings do
  task :'list-functions' do
    sh %q{cat declarations.json | grep FunctionDecl | sed -E 's/.*"name": "([^"]+)".*/\1/p; d'}
  end
end
