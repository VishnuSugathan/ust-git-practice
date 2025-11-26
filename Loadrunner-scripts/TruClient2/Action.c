//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://www.google.com/?gws_rd=ssl'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Sign in link", "snapshot=Action_2.inf");
	truclient_step("4", "Click on Create account button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on For my personal use menuitem", "snapshot=Action_5.inf");
	truclient_step("7", "Verify Enter your name 's 'Visible Text' Contain Enter your name", "snapshot=Action_7.inf");

	return 0;
}
