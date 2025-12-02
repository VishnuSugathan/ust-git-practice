//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Tue Dec  2 11:16:18 2025
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	// 1: Navigate to "http://127.0.0.1:1080/webtours/"
	// 3: Type vishnusugathan in Username textbox
	// 5: Type **** in Password passwordbox
	// 6: Click on Login button
	web.regFind(
		{
			text : 'Web Tours Error - Incorrect Password'
		}
	);

	return 0;
}

