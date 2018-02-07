#
# Be sure to run `pod lib lint YJDemoSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YJDemoSDK'
  s.version          = '0.1.0'
  s.summary          = 'A short description of YJDemoSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/bensonyj/YJDemoSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'bensonyj' => 'yingjian23@gmail.com' }
  s.source           = { :git => 'https://github.com/bensonyj/YJDemoSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'YJDemoSDK/Classes/*'
  
  # s.resource_bundles = {
  #   'YJDemoSDK' => ['YJDemoSDK/Assets/*.png']
  # }

  s.public_header_files = 'YJDemoSDK/Classes/*.h'
  s.frameworks = 'UIKit', 'SystemConfiguration', 'Security', 'MobileCoreServices', 'Foundation', 'CoreFoundation'
  s.dependency 'AFNetworking', '~> 3.0'
  s.dependency 'ReactiveCocoa', '~> 2.5'
  s.dependency 'MBProgressHUD'
  s.dependency 'SDWebImage'
  s.dependency 'Masonry'
  s.dependency 'MJExtension'
  s.dependency 'MJRefresh'
  s.dependency 'IQKeyboardManager'

end
