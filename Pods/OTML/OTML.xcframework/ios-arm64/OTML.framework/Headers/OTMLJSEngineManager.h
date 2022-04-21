//
//  OTMLJSEngineManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OTMLViewController;

#define HTMLFORSCRIPT @"<html><head><script type=\"text/javascript\">%@</script><script type=\"text/javascript\">%@</script><script type=\"text/javascript\">%@</script></head><body></body></html>"

static NSString * bridge_ios8 = @"function singleActionCallbackWithParams(out){    return \"js-action:\" + out;}function actionCallbackWithParams(out){    webkit.messageHandlers.myHandler.postMessage(\"js-action:\" + out);}function logError(out){    webkit.messageHandlers.myHandler.postMessage(\"js-LOG:\" + out);}";
static NSString * bridge_ios7 = @"var timeout = 0;function singleActionCallbackWithParams(out){    return \"js-action:\" + out;}function actionCallbackWithParams(out){    setTimeout(function(){window.location = \"js-action:\" + out;},timeout);    timeout=timeout+250;    setTimeout(function(){timeout=timeout-250;}, 250);}function logError(out){    setTimeout(function(){window.location = \"js-LOG:\" + out;},timeout);    timeout=timeout+250;    setTimeout(function(){timeout=timeout-250;}, 250);}";
static NSString * actionScript = @"function createParam(name, value) {\r\n    return \"<param name=\\\"\" + name + \"\\\" value=\\\"\" + value + \"\\\" />\\n\";\r\n}\r\n\r\nfunction createAction(target, trigger, type, parameters){\r\n    var action = \"<action target=\\\"\" + target + \"\\\" trigger=\\\"\" + trigger + \"\\\" type=\\\"\" + type + \"\\\">\\n\" + \"<parameters>\\n\";\r\n    for (var i = 0; i < parameters.length; i++) {\r\n        action += parameters[i];\r\n    }\r\n    action += \"</parameters>\\n</action>\";\r\n    return action;\r\n}\r\n\r\nfunction createActionSet() {\r\n    var action_to_return = \"<action target=\\\".update\\\" trigger=\\\"immediate\\\" type=\\\"post\\\"> <parameters>\";\r\n\tfor (var i = 0; i < arguments.length; i++) {\r\n        var ieasim_action = arguments[i];\r\n        var index_of_target = ieasim_action.indexOf(\"<action target=\\\"\");\r\n        var tagert_end_index = ieasim_action.indexOf(\"\\\" trigger=\\\"\");\r\n        var the_target = ieasim_action.substring(index_of_target+\"<action target=\\\"\".length,tagert_end_index);\r\n        \r\n        var the_split_array = ieasim_action.split(\"<param name=\\\"\");\r\n        var number_of_paramether = the_split_array.length;\r\n        for (var j=1 ; j<number_of_paramether ; j++){\r\n            var all_splitted_string =the_split_array[j];\r\n            var index_of_fixed_part = all_splitted_string.indexOf(\"\\\"\");\r\n            var param_name = all_splitted_string.substring(0,index_of_fixed_part);\r\n            var param_index_of_termination = all_splitted_string.indexOf(\"/>\")+\"/>\".length;\r\n            \r\n            if(param_name==\"otml_context\"){\r\n                action_to_return+= \"<param name=\\\"\"+param_name + all_splitted_string.substring(index_of_fixed_part,param_index_of_termination);\r\n            }else{\r\n                if (param_name == \"otml_trigger\") {\r\n                    action_to_return+= \"<param name=\\\"\"+param_name+\".\"+the_target + all_splitted_string.substring(index_of_fixed_part,param_index_of_termination);\r\n                } else {\r\n                    action_to_return+= \"<param name=\\\"\"+the_target+\".\"+param_name + all_splitted_string.substring(index_of_fixed_part,param_index_of_termination);\r\n                }\r\n            }\r\n        }\r\n        \r\n\t}\r\n    \r\n    action_to_return += \"</parameters></action>\";\r\n\treturn action_to_return;\r\n}\r\n\r\nfunction newAction() {\r\n    var parameters = new Array();\r\n    for (var i = 3; i < arguments.length; i+=2) {\r\n        parameters.push(createParam(arguments[i], arguments[i+1]));\r\n    }\r\n    return createAction(arguments[0], arguments[1], arguments[2], parameters);\r\n}\r\n";


@interface OTMLJSEngineManager : NSObject

+(OTMLJSEngineManager*)getJSEngineManagerWithViewController:(OTMLViewController*)aViewController;
-(instancetype)initWithViewController:(OTMLViewController*)aViewController;
-(void)loadHTML;
-(void)dispose;
-(void) executeJSWithTarget:(NSString*)target andParameters:(NSDictionary*) parameters;

@property (nonatomic, weak) OTMLViewController * delegateViewController;


+(NSString*) getBridgeScript;
+(NSString*) getActionScript;
-(NSString*) getCommonJSScript:(NSString*) aJS_ID;


-(NSString*) preResolveJSString:(NSString*) aScript;
-(NSString*) preInjectJS:(NSString*) aScript;

-(BOOL)jsB64CallbackExecutionWithString:(NSString*) b64RequestString;
+(BOOL)jsB64CallbackExecutionWithString:(NSString*) b64RequestString onViewController:(OTMLViewController*)aViewController;

-(NSMutableArray*)getQueuedJS;

@end
