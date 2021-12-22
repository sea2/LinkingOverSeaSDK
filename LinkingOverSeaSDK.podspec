#
# Be sure to run `pod lib lint LinKingOASDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinkingOverSeaSDK'
  s.version          = '1.0.12'
  s.summary          = 'LinkingOverSeaSDK America version'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
"LinkingOverSeaSDK America version"
"add user date manager"
                       DESC

  s.homepage         = 'https://github.com/sea2'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'sea2' => '497661292@qq.com' }
  s.source           = { :git => 'https://github.com/sea2/LinkingOverSeaSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.static_framework = true

  s.vendored_frameworks = "LinKingOASDK/Products/LinKingOASDK.framework"
  s.resources = "LinKingOASDK/Assets/*.*"
         s.dependency 'IQKeyboardManager', '~> 6.5.5'
        s.dependency 'TPKeyboardAvoiding', '~> 1.3.4'
        s.dependency 'FBSDKLoginKit', '~> 12.1.0'
        s.dependency 'FBSDKShareKit', '~> 12.1.0'
        s.dependency 'AppsFlyerFramework', '~> 6.4.3'
#        s.dependency 'Beta-AppsFlyerFramework', '~> 6.0.2.174'
        s.dependency 'SDWebImage', '>= 5.0.0'
        s.dependency 'Toast', '~> 4.0.0'
        s.dependency 'AFNetworking', '~> 4.0.1'
#        s.dependency 'FBAudienceNetwork', '~> 6.5.1'
#        s.dependency 'IronSourceSDK','7.1.5.1.0'
#        s.dependency 'IronSourceAdMobAdapter','4.3.23.0'
#        s.dependency 'IronSourcePangleAdapter','4.3.3.1'
#        s.dependency 'IronSourceFacebookAdapter','4.3.26'
        s.dependency 'IronSourceSDK','7.1.12.0'
        s.dependency 'IronSourceAdMobAdapter','4.3.28.0'
        s.dependency 'IronSourceFacebookAdapter','4.3.32.0'
        s.dependency 'IronSourcePangleAdapter','4.3.9.1'
        s.dependency 'IronSourceUnityAdsAdapter','4.3.17.0'
        s.dependency 'IronSourceTapjoyAdapter','4.1.18.3'
        s.dependency 'IronSourceAdColonyAdapter','4.3.11.3'
        s.dependency 'IronSourceVungleAdapter','4.3.15.0'



  s.xcconfig = {
      'VALID_ARCHS' =>  'arm64 x86_64 armv7',
  }
  

end
