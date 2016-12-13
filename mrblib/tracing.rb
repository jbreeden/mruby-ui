module UI
  module Tracing
    def self.prepended(mod)
      mod.instance_methods(false).each do |m|
        self.define_method(m) do |*args, &block|
          if args.length > 0
            target = args[0]
            if target.kind_of?(UI::Pointer)
              puts "Calling #{m} with #{target.class} #{target.ptr_addr}"
            else
              puts "Calling #{m} with #{target.class}"
            end
          else
            puts "Calling #{m}"
          end
          super(*args, &block)
        end
      end
    end
  end

  class << self
    #prepend Tracing
  end
end
