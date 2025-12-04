//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Login");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type vishnusugathan in Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ********** in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Login button", "snapshot=Action_6.inf");
	truclient_step("7", "Verify Welcome, vishnusugathan,... 's 'Visible Text' Contain Welcome, vishnusugathan,...hen you're done!", "snapshot=Action_7.inf");
	truclient_step("8", "Click on SignOff Button image", "snapshot=Action_8.inf");
	lr_end_transaction("Login",0);

	return 0;
}
