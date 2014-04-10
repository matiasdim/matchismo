//
//  Card.h
//  matchismo
//
//  Created by Matías Gil Echavarría on 12/17/13.
//  Copyright (c) 2013 matiasdim. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

-(int)match:(NSArray *)otherCards;

@end
