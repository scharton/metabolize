//
//  FirstViewController.h
//  Metabolize
//
//  Created by Derek F. Scharton on 5/11/13.
//  Copyright (c) 2013 Derek F. Scharton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate>

@property (strong, nonatomic) IBOutlet UIPickerView *picker;
@property (strong, nonatomic) IBOutlet UILabel *pickerValue;


@end
