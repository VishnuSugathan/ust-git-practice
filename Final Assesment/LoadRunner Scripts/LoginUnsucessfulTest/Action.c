//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("LoginUnsucessful");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type vishnusugathan in Username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type **** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Login button", "snapshot=Action_7.inf");
	truclient_step("8", "Verify The username/password... 's 'Visible Text' Contain The username/password co...r your patience.", "snapshot=Action_8.inf");
	lr_end_transaction("LoginUnsucessful",0);

	return 0;
}
