Pod::Spec.new do |s|
  s.name = "YJDemoSDK"
  s.version = "0.1.0"
  s.summary = "A short description of YJDemoSDK."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"bensonyj"=>"yingjian23@gmail.com"}
  s.homepage = "https://github.com/bensonyj/YJDemoSDK"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = ["UIKit", "SystemConfiguration", "Security", "MobileCoreServices", "Foundation", "CoreFoundation"]
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/YJDemoSDK.framework'
end
