/** @category NSNumber(CPTExtensions)
 *  @brief Core Plot extensions to NSNumber.
 **/
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface NSNumber(CPTExtensions)

+(nonnull instancetype)numberWithCGFloat:(CGFloat)number;

-(CGFloat)cgFloatValue;
-(nonnull instancetype)initWithCGFloat:(CGFloat)number;

-(nonnull NSDecimalNumber *)decimalNumber;

@end
