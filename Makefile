.phony:

build: .phony
	CLFAGS=-Wno-declaration-after-statement bundle exec rake mruby:build
	#CLFAGS=-Wno-declaration-after-statement bundle exec rake mruby:build 2>&1 | grep -i error
