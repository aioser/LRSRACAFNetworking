#
# Be sure to run `pod lib lint AFNetworking-RACExtensions-JM.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AFNetworking-RACExtensions-JM'
  s.version          = '1.5'
  s.summary          = 'AFNetworking-RACExtensions-JM.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
AFNetworking RAC 扩展
                       DESC

  s.homepage         = 'https://github.com/bloack/AFNetworking-RACExtensions-JM.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '刘俊臣' => 'junchen.liu@jiamiantech.com' }
  s.source           = { :git => 'https://github.com/bloack/AFNetworking-RACExtensions-JM.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'AFNetworking-RACExtensions-JM/Classes/**/*'
  
  # s.resource_bundles = {
  #   'AFNetworking-RACExtensions-JM' => ['AFNetworking-RACExtensions-JM/Assets/*.png']
  # }

  s.public_header_files = 'AFNetworking-RACExtensions-JM/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'AFNetworking', '~> 3.2'
  s.dependency 'ReactiveObjC'
end
