//
//  Deck.h
//  matchismo
//
//  Created by Matías Gil Echavarría on 12/17/13.
//  Copyright (c) 2013 matiasdim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

-(Card *)drawRandomCard;

@end
