$:<< File.join(File.dirname(__FILE__), "./lib")
$:<< File.join(File.dirname(__FILE__), "./ext")

require 'gem_with_extension'

GemWithExtension::run_c_code
