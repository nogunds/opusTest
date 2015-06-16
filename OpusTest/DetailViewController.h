//
//  DetailViewController.h
//  OpusTest
//
//  Created by 황용하 on 2015. 6. 16..
//  Copyright (c) 2015년 황용하. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

