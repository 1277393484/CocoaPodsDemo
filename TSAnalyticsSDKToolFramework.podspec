Pod::Spec.new do |s|
  s.name         = "TSAnalyticsSDKToolFramework"
  s.version      = "1.0.1"
  s.summary      = "my test to upload framework to CocoaPods"
  s.description  = <<-DESC
                       this is my first framework, now I am learning to upload it to cocoapod
                   DESC
  s.homepage     = "https://github.com/1277393484/CocoaPodsDemo"
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = "ryan"
  # s.platform     = :ios
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/1277393484/CocoaPodsDemo.git", :tag => "#{s.version}" }

  # the framework upload to Cocoa Pods
  s.vendored_frameworks = "DemoFramework.framework"
  #s.frameworks = "Foundation"
end
