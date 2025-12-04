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
	lr_end_transaction("Login",0);
	lr_start_transaction("SearchFlight");
	truclient_step("7", "Click on Search Flights Button image", "snapshot=Action_7.inf");
	truclient_step("8", "Select Seattle from Departure City listbox", "snapshot=Action_8.inf");
	truclient_step("9", "Select Zurich from Arrival City listbox", "snapshot=Action_9.inf");
	truclient_step("10", "Click on 1 textbox", "snapshot=Action_10.inf");
	truclient_step("11", "Type 10 in 1 textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Click on WindowWindow label", "snapshot=Action_12.inf");
	truclient_step("13", "Click on Business radio", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Roundtrip ticket checkbox", "snapshot=Action_14.inf");
	truclient_step("15", "Click on findFlights button", "snapshot=Action_15.inf");
	truclient_step("16", "Click on 792;613;12/05/2025 radio", "snapshot=Action_16.inf");
	truclient_step("17", "Click on 973;531;12/06/2025 radio", "snapshot=Action_17.inf");
	truclient_step("18", "Click on reserveFlights button", "snapshot=Action_18.inf");
	lr_end_transaction("SearchFlight",0);
	lr_start_transaction("BuyTicket");
	truclient_step("19", "Click on buyFlights button", "snapshot=Action_19.inf");
	truclient_step("20", "Click on SignOff Button image", "snapshot=Action_20.inf");
	lr_end_transaction("BuyTicket",0);

	return 0;
}
