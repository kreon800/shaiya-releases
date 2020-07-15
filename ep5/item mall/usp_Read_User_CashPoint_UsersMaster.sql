USE [PS_GameData]
GO

/****** Object:  StoredProcedure [dbo].[usp_Read_User_CashPoint_UsersMaster]    Script Date: 7/14/2020 3:42:15 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE PROCEDURE [dbo].[usp_Read_User_CashPoint_UsersMaster]  
@UserUID int

AS

SET NOCOUNT ON

DECLARE @CashPoint int = (SELECT Point FROM PS_UserData.dbo.Users_Master WHERE UserUID=@UserUID)

IF @CashPoint < 0
BEGIN
	UPDATE PS_UserData.dbo.Users_Master SET Point=0 WHERE UserUID=@UserUID
	SET @CashPoint = 0
END

RETURN @CashPoint

SET NOCOUNT OFF

GO


