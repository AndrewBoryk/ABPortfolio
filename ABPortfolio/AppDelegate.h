//
//  AppDelegate.h
//  ABPortfolio
//
//  Created by Andrew Boryk on 3/5/17.
//  Copyright © 2017 Andrew Boryk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

/// Determines whether device rotation is restricted
@property (nonatomic) BOOL restrictRotation;

@end

