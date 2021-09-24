//
//  InterstitialDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/22.
//


#import <AnyThinkSDK/AnyThinkSDK.h>

@protocol InterstitialDelegate<ATAdLoadingDelegate>

//插屏广告展示成功
-(void) interstitialDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//插屏广告展示失败
-(void) interstitialFailedToShowForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary*)extra;
//插屏视频广告播放开始
-(void) interstitialDidStartPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//插屏视频广告播放结束
-(void) interstitialDidEndPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//插屏视频广告播放失败
-(void) interstitialDidFailToPlayVideoForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary*)extra;
//插屏广告关闭
-(void) interstitialDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//插屏广告点击
-(void) interstitialDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;

@end
