//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type vishnusugathan in Username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type ********** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Login button", "snapshot=Action_7.inf");
	truclient_step("8", "Click on SignOff Button image", "snapshot=Action_8.inf");
	truclient_step("9", "[object not set]", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Username textbox", "snapshot=Action_10.inf");
	truclient_step("11", "Type vishnusugathan in Username textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Password passwordbox", "snapshot=Action_12.inf");
	truclient_step("13", "Type ********** in Password passwordbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Login button", "snapshot=Action_14.inf");
	truclient_step("15", "Click on SignOff Button image", "snapshot=Action_15.inf");

	return 0;
}
