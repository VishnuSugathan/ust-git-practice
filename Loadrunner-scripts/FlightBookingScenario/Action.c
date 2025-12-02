//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type vishnusugathan in Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ********** in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Login button", "snapshot=Action_6.inf");
	truclient_step("8", "Verify Welcome, vishnusugathan,... 's 'Visible Text' Contain Welcome, vishnusugathan,...hen you're done!", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Search Flights Button image", "snapshot=Action_9.inf");
	truclient_step("10", "Select San Francisco from Departure City listbox", "snapshot=Action_10.inf");
	truclient_step("11", "Select London from Arrival City listbox", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Roundtrip ticket checkbox", "snapshot=Action_12.inf");
	truclient_step("13", "Click on Business radio", "snapshot=Action_13.inf");
	truclient_step("14", "Click on WindowWindow label", "snapshot=Action_14.inf");
	truclient_step("15", "Click on findFlights button", "snapshot=Action_15.inf");
	truclient_step("16", "Click on 622;803;12/03/2025 radio", "snapshot=Action_16.inf");
	truclient_step("17", "Click on 263;695;12/04/2025 radio", "snapshot=Action_17.inf");
	truclient_step("18", "Click on reserveFlights button", "snapshot=Action_18.inf");
	truclient_step("19", "Click on buyFlights button", "snapshot=Action_19.inf");

	return 0;
}
