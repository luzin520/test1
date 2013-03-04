//
//  DetailViewController.h
//  test1
//
//  Created by mb on 3/3/13.
//  Copyright (c) 2013 mb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
