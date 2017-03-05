//
//  ABKeyboardAccessoryViewController.h
//  ABPortfolio
//
//  Created by Andrew Boryk on 3/5/17.
//  Copyright © 2017 Andrew Boryk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ABKeyboardAccessory/ABKeyboardAccessory.h>

@interface ABKeyboardAccessoryViewController : UIViewController <ABKeyboardAccessoryDelegate, UITextFieldDelegate>

#pragma mark - Properties
/// Test field for typing
@property (strong, nonatomic) IBOutlet UITextField *inputField;

/// Space between textField toolbar and bottom of the screen
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *bottomOffset;

#pragma mark - Actions
/// Detect background touch and hide keyboard
- (IBAction)backgroundTouchAction:(id)sender;

@end
