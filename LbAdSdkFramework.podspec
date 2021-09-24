Pod::Spec.new do |s|
  s.name                      = 'LbAdSdkFramework'
  s.version                   = '1.0.1'
  s.summary                   = 'AD Framework'
  s.homepage                  = 'https://github.com/YaoRuYao/LbAdSdkFramework'
  s.license                   = { :type => 'MIT', :file => 'LICENSE' }
  s.author                    = { 'sx' => 'szlbkj@outlook.com' }
  s.source                    = { :git => 'https://github.com/YaoRuYao/LbAdSdkFramework.git', :tag => s.version }
  s.platform                  = :ios
  s.ios.deployment_target     = '9.0'
  s.swift_version             = '4.0'
  s.ios.vendored_frameworks   = 'LbAdSdk/*.framework'

  # 依赖库
  s.dependency 'AnyThinkiOS','5.7.65'
  s.dependency 'AnyThinkiOS/AnyThinkPangleAdapter','5.7.65'
  s.dependency 'Ads-CN-Beta','3.9.0.0'
  s.dependency 'AnyThinkiOS/AnyThinkKSAdapter','5.7.65'
  s.dependency 'KSAdSDK', '3.3.13'
  s.dependency 'SDWebImage'
  s.dependency 'AnyThinkiOS/AnyThinkGDTAdapter','5.7.65'
  s.dependency 'GDTMobSDK', '4.13.0'
end 