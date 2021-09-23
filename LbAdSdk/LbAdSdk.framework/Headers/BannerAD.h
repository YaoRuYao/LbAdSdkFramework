//
//  BannerAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/18.
//



#import <UIKit/UIKit.h>
#import "BannerDelegate.h"
#import "BaseAD.h"

@interface BannerConfiguration : NSObject
@property(nonatomic) CGRect ADFrame;
@property CGFloat borderWidth;
@property(nonatomic, weak) UIViewController *rootViewController;
@end


@interface BannerAD:BaseAD {
    UIView * _view;
    BannerConfiguration * _configuration;
}

- (instancetype) initWithPlacementID:(NSString *)id containerView:(UIView *)containerView configuration:(BannerConfiguration*)configuration delegate:(id<BannerDelegate>)delegate;

@end
