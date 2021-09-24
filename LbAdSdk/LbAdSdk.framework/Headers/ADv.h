//
//  ADv.h
//  LbAdSdk
//
//  Created by SX on 2021/9/14.
//

#import "TalkingData.h"
#import "SplashAD.h"
#import "NativeAD.h"
#import "BannerAD.h"
#import "RewardVideo.h"
#import "InterstitialAD.h"
#import "FullVideo.h"
#import <UIKit/UIKit.h>

@interface ADv:NSObject{
}

+(void) debug:(BOOL)debugEnabled;

+(void) setChannel:(NSString *)channelString;

+(void) initApp:(NSString *)appId channel:(NSString *)channelString tracking:(BOOL)tracking;

+(void) initApp:(NSString *)appId channel:(NSString *)channelString;

+(SplashAD *) showSp:(NSString *)id containerView:(UIWindow *)containerView delegate:(id<SplashDelegate>)delegate;

+(NativeAD *) showNativeAD:(NSString *)id containerView:(UIView *)containerView configuration:(NativeConfiguration*)configuration delegate:(id<NativeDelegate>)delegate;

+(RewardVideo *) showRewardVideo:(NSString *)id viewController:(UIViewController *)viewController delegate:(id<RewardVideoDelegate>)delegate;

+(BannerAD *) showBannerAD:(NSString *)id containerView:(UIView *)containerView configuration:(BannerConfiguration*)configuration delegate:(id<BannerDelegate>)delegate;

+(InterstitialAD *) showInterstitialAD:(NSString *)id viewController:(UIViewController *)viewController delegate:(id<InterstitialDelegate>)delegate;

+(FullVideo *)showFullVideo:(NSString *)id viewController:(UIViewController *)viewController delegate:(id<FullVideoDelegate>)delegate;

@end



