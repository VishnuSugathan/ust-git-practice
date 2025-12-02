//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Login_txn");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type vishnusugathan in Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ********** in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Login button", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Search Flights Button image", "snapshot=Action_7.inf");
	truclient_step("8", "Click on findFlights button", "snapshot=Action_8.inf");
	truclient_step("9", "Click on reserveFlights button", "snapshot=Action_9.inf");
	truclient_step("10", "Click on buyFlights button", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Itinerary Button image", "snapshot=Action_11.inf");
	truclient_step("12", "Click on A Coach class ticket for checkbox", "snapshot=Action_12.inf");
	truclient_step("13", "Click on removeFlights button", "snapshot=Action_13.inf");
	truclient_step("14", "Click on SignOff Button image", "snapshot=Action_14.inf");
	lr_end_transaction("Login_txn",0);

	return 0;
}
