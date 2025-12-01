//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Add empty tab", "snapshot=Action_1.inf");
	truclient_step("2", "Activate tab #2", "snapshot=Action_2.inf");
	truclient_step("3", "Navigate to 'https://petstore.octoperf.com/'", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Enter the Store link", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Sign In link", "snapshot=Action_5.inf");
	truclient_step("6", "Login", "snapshot=Action_6.inf");
	{
		truclient_step("6.1", "Type 223344 in username textbox", "snapshot=Action_6.1.inf");
		truclient_step("6.2", "Click on password passwordbox", "snapshot=Action_6.2.inf");
		truclient_step("6.3", "Type **** in password passwordbox", "snapshot=Action_6.3.inf");
		truclient_step("6.4", "Click on Login button", "snapshot=Action_6.4.inf");
	}
	truclient_step("7", "Click on link (1) image", "snapshot=Action_7.inf");
	truclient_step("8", "Click on FI SW 01 link", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Add to Cart link", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Proceed to Checkout link", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Continue button", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Confirm link", "snapshot=Action_12.inf");
	truclient_step("13", "Click on Return to Main Menu link", "snapshot=Action_13.inf");

	return 0;
}
