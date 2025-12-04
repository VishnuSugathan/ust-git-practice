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
	truclient_step("8", "Select Portland from Departure City listbox", "snapshot=Action_8.inf");
	truclient_step("9", "Select Los Angeles from Arrival City listbox", "snapshot=Action_9.inf");
	truclient_step("11", "Click on 12/05/2025 textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Type 12/3/2024 in 12/05/2025 textbox", "snapshot=Action_12.inf");
	truclient_step("13", "Click on First radio", "snapshot=Action_13.inf");
	truclient_step("14", "Click on findFlights button", "snapshot=Action_14.inf");
	truclient_step("15", "Click on 532;351;12/3/2024Blue... gridcell", "snapshot=Action_15.inf");
	truclient_step("16", "Click on 532;351;12/3/2024 radio", "snapshot=Action_16.inf");
	truclient_step("17", "Click on 531;330;12/3/2024 radio", "snapshot=Action_17.inf");
	truclient_step("18", "Click on 533;303;12/3/2024 radio", "snapshot=Action_18.inf");
	truclient_step("19", "Click on reserveFlights button", "snapshot=Action_19.inf");
	lr_end_transaction("SearchFlight",0);

	return 0;
}
