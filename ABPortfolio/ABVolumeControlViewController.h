//
//  ABVolumeControlViewController.h
//  ABPortfolio
//
//  Created by Andrew Boryk on 3/5/17.
//  Copyright © 2017 Andrew Boryk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ABVolumeControlViewController : UIViewController

/// Button to change themes
@property (strong, nonatomic) IBOutlet UIButton *changeThemeButton;

/// Button to set volumeControl style to ABVolumeControlStyleNone
@property (strong, nonatomic) IBOutlet UIButton *removeStyleButton;

/// Button to set volumeControl style to ABVolumeControlStyleMinimal
@property (strong, nonatomic) IBOutlet UIButton *minimalStyleButton;

/// Button to set volumeControl style to ABVolumeControlStyleStatusBar
@property (strong, nonatomic) IBOutlet UIButton *statusBarStyleButton;

/// Button to set volumeControl style to ABVolumeControlStyleCustom
@property (strong, nonatomic) IBOutlet UIButton *customStyleButton;

/// Custom slider for volumeControl
@property (strong, nonatomic) IBOutlet UISlider *customVolumeSlider;

/// Switch to adjust theme
@property (strong, nonatomic) IBOutlet UISegmentedControl *themeSwitch;

/// Change the theme between dark and light
- (IBAction)changeThemeAction:(id)sender;

/// Set volumeControl style to ABVolumeControlStyleNone
- (IBAction)removeStyleAction:(id)sender;

/// Set volumeControl style to ABVolumeControlStyleMinimal
- (IBAction)minimalStyleAction:(id)sender;

/// Set volumeControl style to ABVolumeControlStyleStatusBar
- (IBAction)statusBarStyleAction:(id)sender;

/// Set volumeControl style to ABVolumeControlStyleCustom
- (IBAction)customStyleAction:(id)sender;

/// Custom volume slider changed
- (IBAction)customVolumeSliderChanged:(id)sender;

/// Switched themes for ABVolumeControl
- (IBAction)themeSwitchChanged:(id)sender;

@end
