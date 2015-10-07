SET IDENTITY_INSERT LOCATION ON  
 GO
INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'1',
'glens field',
'166',
'65 Woerdens Road',
'Wollongong',
'9357',
'88256630',
'Australia',
'NT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'2',
'collegens field',
'557',
'21 Bayfield Street',
'Wollongong',
'7922',
'40470251',
'Australia',
'QLD',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'3',
'steel field',
'529',
'21 Nandewar Street',
'Wollongong',
'5973',
'26396710',
'Australia',
'ACT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'4',
'grass knowles',
'248',
'70 Oriana Street',
'Wollongong',
'9410',
'28695466',
'Australia',
'QLD',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'5',
'locks field',
'354',
'74 Bayview Road',
'Wollongong',
'1160',
'73122560',
'Australia',
'NSW',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'6',
'cirpus paddock',
'794',
'69 Jacolite Street',
'Wollongong',
'1742',
'93790547',
'Australia',
'SA',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'7',
'middle field',
'274',
'33 Elizabeth Street',
'Wollongong',
'10326',
'107187149',
'Australia',
'VIC',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'8',
'first field',
'868',
'46 Lane Street',
'Wollongong',
'6656',
'97394626',
'Australia',
'TAS',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'9',
'last field',
'68',
'18 Lane Street',
'Wollongong',
'3084',
'55922914',
'Australia',
'VIC',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'10',
'main field',
'323',
'34 Tooraweenah Road',
'Wollongong',
'8066',
'36464062',
'Australia',
'ACT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

SET IDENTITY_INSERT LOCATION OFF 
 GO
