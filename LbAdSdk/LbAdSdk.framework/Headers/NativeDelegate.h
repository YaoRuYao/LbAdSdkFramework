//
//  NativeDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/17.
//

#import <AnyThinkSDK/AnyThinkSDK.h>
@protocol NativeDelegate<ATAdLoadingDelegate>

@optional
//广告展示成功
-(void) didShowNativeAdInAdView:(UIView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra;
//广告点击
-(void) didClickNativeAdInAdView:(UIView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra;
//开始播放视频
-(void) didStartPlayingVideoInAdView:(UIView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra;
//视频播放完毕
-(void) didEndPlayingVideoInAdView:(UIView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra;
//广告中关闭按钮点击
-(void) didTapCloseButtonInAdView:(UIView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra;
@end
