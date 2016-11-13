.phony:

build: .phony
	CFLAGS="-std=c99" bundle exec rake mruby:build
