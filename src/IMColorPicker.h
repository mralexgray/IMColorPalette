//
//  IMColorPicker.h
//  IMColorPickerDemo
//
//  Created by Chase Zhang on 5/28/14.
//  Copyright (c) 2014 io-meter. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface IMColorPicker : NSControl

@property(nonatomic, readonly) NSColor *color;
@property(nonatomic, readonly) NSColor *mouseOverColor;
@property(nonatomic) NSArray *colors;

@property(nonatomic) CGFloat pickerSize;

@end
