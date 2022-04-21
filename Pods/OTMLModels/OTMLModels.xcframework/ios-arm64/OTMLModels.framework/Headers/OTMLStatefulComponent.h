//
//  OTMLStatefulComponent.h
//  ING
//
//  Created by Pasquale Cerqua on 18/10/12.
//
// 


typedef NS_ENUM(u_int8_t, OTMLComponentStatus){
    OTMLComponentStatus_normal = 0,
	OTMLComponentStatus_pressed = 1 << 0,
	OTMLComponentStatus_selected = 1 << 1,
	OTMLComponentStatus_disabled = 1 << 2,
    OTMLComponentStatus_error = 1 << 3
};


@protocol OTMLStatefulComponent <NSObject>

-(BOOL) setSelected:(BOOL)isSelected;
-(void) setInnerViewsSelected:(BOOL)isSelected;

-(BOOL) setEnabled:(BOOL)isEnabled;
-(void) setInnerViewsEnabled:(BOOL)isEnabled;

-(BOOL) setHighlighted:(BOOL)isHighlighted;
-(void) setInnerViewsHighlighted:(BOOL)isHighlighted;

@end

@protocol OTMLStatefulObject <NSObject>

-(void) setState:(OTMLComponentStatus) state;
-(void) setStateON:(OTMLComponentStatus) bitmastToTurnOn;
-(void) setStateOFF:(OTMLComponentStatus) bitmastToTurnOff;

@end
