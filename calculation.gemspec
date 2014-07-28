Gem::Specification.new do |s|
  s.name    = "calculation"
  s.version = "0.0.1"
  s.summary = "calculation"
  s.author  = "Hieu Dang"

  s.files = Dir.glob("ext/**/*.{c,rb}") +
            Dir.glob("lib/**/*.rb")

  s.extensions << "ext/calculation/extconf.rb"

  s.add_development_dependency "rake-compiler"
end