//
//  Deck.m
//  matchismo
//
//  Created by Matías Gil Echavarría on 12/17/13.
//  Copyright (c) 2013 matiasdim. All rights reserved.
//

#import "Deck.h"

@interface Deck()
@property (strong, nonatomic) NSMutableArray *cards; // of card
@end

@implementation Deck

- (NSMutableArray *)cards
{
    if(!_cards) _cards = [[NSMutableArray alloc] init];
    return _cards;
}

- (void)addCard:(Card *)card atTop:(BOOL)atTop
{
    if (atTop) {
        [self.cards insertObject:card atIndex:0];
    }else{
        [self.cards addObject:card];
    }
}

- (void) addCard:(Card *)card
{
    
}



@end
