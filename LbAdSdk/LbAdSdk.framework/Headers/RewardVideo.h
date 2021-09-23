//
//  RewardAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/18.
//

#import <UIKit/UIKit.h>
#import "RewardVideoDelegate.h"
#import "BaseAD.h"

@interface RewardVideo:BaseAD {
    UIViewController *_window;
}

- (instancetype) initWithPlacementID:(NSString *)id containerView:(UIViewController *)containerView delegate:(id<RewardVideoDelegate>)delegate;

@end

