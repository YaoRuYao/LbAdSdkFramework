//
//  RewardedDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/18.
//

#import <AnyThinkSDK/AnyThinkSDK.h>
@protocol RewardVideoDelegate<ATAdLoadingDelegate>

@optional
//激励视频广告播放开始
-(void) rewardedVideoDidStartPlayingForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//激励视频广告播放结束
-(void) rewardedVideoDidEndPlayingForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//激励视频广告播放失败
-(void) rewardedVideoDidFailToPlayForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary*)extra;
//激励视频广告关闭
-(void) rewardedVideoDidCloseForPlacementID:(NSString*)placementID rewarded:(BOOL)rewarded extra:(NSDictionary*)extra;
//激励视频广告点击
-(void) rewardedVideoDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
//激励视频广告奖励下发
-(void) rewardedVideoDidRewardSuccessForPlacemenID:(NSString*)placementID extra:(NSDictionary*)extra;
@end
