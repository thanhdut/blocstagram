//
//  ImagesTableViewController.h
//  Blocstagram
//
//  Created by Thanhduy Tran on 6/16/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImagesTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *images;

-(NSArray *)items;

@end
