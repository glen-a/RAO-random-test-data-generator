SET IDENTITY_INSERT OFFER ON  
 GO
INSERT INTO [dbo].[OFFER] 
 (offerId, sport, matchId, refId, status, dateOfOffer, declinedReason, priority, typeOfOffer) 
values 
(
'35456',
'Soccer',
'10',
'10000',
'4',
'2015/9/11',
null,
'5',
'Referee'
)
 GO 

INSERT INTO [dbo].[OFFER] 
 (offerId, sport, matchId, refId, status, dateOfOffer, declinedReason, priority, typeOfOffer) 
values 
(
'23568',
'Soccer',
'19',
'10000',
'4',
'2015/9/11',
null,
'5',
'Referee'
)
 GO 

SET IDENTITY_INSERT OFFER OFF 
 GO
