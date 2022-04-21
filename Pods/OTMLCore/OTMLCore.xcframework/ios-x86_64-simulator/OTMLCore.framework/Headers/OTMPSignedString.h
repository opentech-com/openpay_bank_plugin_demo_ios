//
//  OTMPSignedString.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 20/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


/**
 
 Flusso di funzionamento
 
 Dati in ingresso:
 cers -> certificato pubblico otml
 ck1 e ck2 -> 2 chiavi random
 cks -> firma con chiave privata otml di (ck1 xor ck2)
 * Se i dati in ingresso non vengono settati l'app crasha
 
 Generazione dei cheksum
 I checksum sono generati automaticamente dallo script pyton
 Per funzionare lo script è necessario:
 - Aggiungere #import "StringSigns.h" su ApplicationProperties.pch
 - StringSigns.h è autogenerato
 - Aggiungere i define di ck1 ck2 cks e cers su OTML_Certificate_Config.pch
 - **** Nello script: Cambiare i ck1 e ck2 hardcodati + aggiornare la variabile APPPROPERTY_PCH con la path corretta TODO: eliminare questa dipendenza
 
 Verifica di una stringa
 Data una stringa x e il suo checksum c (autogenerato nel punto sopra)
 
 Viene verificato il setup dei dati in ingresso
 
 Viene fatto (ck1 xor ck2) = ck
 Viene verificato con rsa che ck e la sua firma siano valide (questo assicura che nessuna ha cambiato ck1 e ck2)
 
 Viene fatto pbkdf2 di x con salt ck
 Viene verificato che il risultato (in base 64) sia uguale al checksum c (precomputato e dato in ingresso ad init)
 Viene azzerato ck
 
 In qualunque caso di errore l'app crasha
 
 */
#import <Foundation/Foundation.h>

@interface OTMPSignedString : NSString

+(void)setCers:(NSString*)cers;
+(void)setCK1:(NSData*)ck1;
+(void)setCK2:(NSData*)ck2;
+(void)setCKS:(NSData*)cks;

-(id)initWithString:(NSString*)aString checksum:(NSString*)checksum;

@end
