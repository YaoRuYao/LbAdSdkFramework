//
//  SplashAD.h
//  LbAdSdk
//
//  Created by SX on 2021/9/14.
//



#import <UIKit/UIKit.h>
#import "SplashDelegate.h"
#import "BaseAD.h"

@interface SplashAD:BaseAD {
    UIWindow *_window;
}

- (instancetype) initWithPlacementID:(NSString *)id containerView:(UIWindow *)containerView delegate:(id<SplashDelegate>)delegate;

@end

