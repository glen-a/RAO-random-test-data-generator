SET IDENTITY_INSERT TYPE ON  
 GO
INSERT INTO [dbo].[TYPE] 
 (typeId, name, description, priority, status) 
values 
(
'1',
'Referee',
'a description: Referee is pretty cool ',
'5',
'1'
)
 GO 

INSERT INTO [dbo].[TYPE] 
 (typeId, name, description, priority, status) 
values 
(
'2',
'Referee Assistant 1',
'a description: Referee Assistant 1 is pretty cool ',
'5',
'1'
)
 GO 

INSERT INTO [dbo].[TYPE] 
 (typeId, name, description, priority, status) 
values 
(
'3',
'Referee Assistant 2',
'a description: Referee Assistant 2 is pretty cool ',
'5',
'1'
)
 GO 

INSERT INTO [dbo].[TYPE] 
 (typeId, name, description, priority, status) 
values 
(
'4',
'Fourth Official',
'a description: Fourth Official is pretty cool ',
'5',
'1'
)
 GO 

SET IDENTITY_INSERT TYPE OFF  
 GO
