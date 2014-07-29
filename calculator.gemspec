Gem::Specification.new do |s|
  s.name    = "calculator"
  s.version = "0.0.1"
  s.summary = "calculator"
  s.author  = "Hieu Dang"

  s.files = Dir.glob("ext/**/*.{c,rb}") +
            Dir.glob("lib/**/*.rb")

  s.extensions << "ext/calculator/extconf.rb"

  s.add_development_dependency "rake-compiler"
end