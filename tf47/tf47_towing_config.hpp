/* Include into Init. RHS ready. Written by Chris [TF47]*/
/*INIT Advanced TOWING/ DO NOT CHANGE*/
SA_MAX_TOWED_CARGO = 1;
SA_TOW_SUPPORTED_VEHICLES_OVERRIDE = [ "CAR", "TANK" ];
SA_TOW_LOCKED_VEHICLES_ENABLED = false;
SA_TOW_RULES_OVERRIDE = [
  //HEMMT
  ["rhsusf_HEMTT_A2_base", "CAN_TOW", "CAR"], //HEMMT CAN TOW all wheeled
  ["rhsusf_HEMTT_A2_base", "CAN_TOW", "rhsusf_m113tank_base"], //HEMMT can tow m113
  ["rhsusf_HEMTT_A2_base", "CANT_TOW", "Tank"], //HEMMT cannot any other tanks then m113
  ["rhsusf_HEMTT_A4_base", "CAN_TOW", "CAR"], //HEMMT can tow m113
  ["rhsusf_HEMTT_A4_base", "CAN_TOW", "rhsusf_m113tank_base"], //HEMMT can tow m113
  ["rhsusf_HEMTT_A4_base", "CANT_TOW", "TANK"], //HEMMT cannot any other tanks then m113
  //APC/IFV
  ["APC_Tracked_03_base_F", "CAN_TOW", "APC_Tracked_03_base_F"], //IFV (Bradley) can tow other Bradleys
  ["APC_Tracked_03_base_F", "CAN_TOW", "CAR"], //Bradley can tow all wheeled except hemmt
  ["APC_Tracked_03_base_F", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //Bradley cannot Tow Hemmt
  ["APC_Tracked_03_base_F", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //
  //FMTV
  ["rhsusf_fmtv_base", "CAN_TOW", "rhsusf_hmmwe_base"], //FMTV can tow all hmmwv
  ["rhsusf_fmtv_base", "CAN_TOW", "rhsusf_fmtv_base"], //FMTV can tow other FMTV
  ["rhsusf_fmtv_base", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //FMTV cannot Tow Hemmt
  ["rhsusf_fmtv_base", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //FMTV cannot Tow Hemmt
  ["rhsusf_fmtv_base", "CANT_TOW", "Tank"], //FMTV cannot tow Tank
  //HMMWV
  ["rhsusf_hmmwe_base", "CAN_TOW", "rhsusf_hmmwe_base"], //HMMWV can tow all other hmmwv
  ["rhsusf_hmmwe_base", "CANT_TOW", "Truck_01_base_F"], //HMMWV cannot tow trucks
  ["rhsusf_hmmwe_base", "CANT_TOW", "rhsusf_rg33_base"], //HMMWV cannot tow any mraps
  ["rhsusf_hmmwe_base", "CANT_TOW", "rhsusf_rg33l_base"], //HMMWV cannot tow any mraps
  ["rhsusf_hmmwe_base", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //HMMWV cannot tow hemmt
  ["rhsusf_hmmwe_base", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //HMMWV cannot tow hemmt
  //MBT M1A1/A2
  ["MBT_01_base_F", "CAN_TOW", "CAR"], //MBT can tow all cars
  ["MBT_01_base_F", "CAN_TOW", "Tank"], //MBT can tow all tanks
  //M113
  ["rhsusf_m113tank_base", "CAN_TOW", "rhsusf_hmmwe_base"], //M113 can tow all HMMWVs
  ["rhsusf_m113tank_base", "CANT_TOW", "Truck_01_base_F"], //M113 cannot tow Trucks
  ["rhsusf_m113tank_base", "CANT_TOW", "rhsusf_rg33_base"], //M113 cannot tow rg33
  ["rhsusf_m113tank_base", "CANT_TOW", "rhsusf_rg33l_base"], //M113 cannot tow rg33l
  ["rhsusf_m113tank_base", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //M113 cannot tow hemmt
  ["rhsusf_m113tank_base", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //M113 cannot tow hemmt
  ["rhsusf_m113tank_base", "CANT_TOW", "MBT_01_base_F"], //M113 cannot tow mbts
  ["rhsusf_m113tank_base", "CANT_TOW", "APC_Tracked_03_base_F"], //M113 cannot tow apc
  //RG33
  ["rhsusf_rg33_base", "CAN_TOW", "rhsusf_hmmwe_base"], //RG33 can tow hmmwv
  ["rhsusf_rg33_base", "CAN_TOW", "rhsusf_fmtv_base"], //RG33 can tow fmtv
  ["rhsusf_rg33_base", "CAN_TOW", "rhsusf_rg33_base"], //RG33 can tow rg33
  ["rhsusf_rg33_base", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //rg33 cannot tow hemmt
  ["rhsusf_rg33_base", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //rg33 cannot tow hemmt
  ["rhsusf_rg33_base", "CANT_TOW", "MBT_01_base_F"], //rg33 cannot tow mbts
  ["rhsusf_rg33_base", "CANT_TOW", "APC_Tracked_03_base_F"], //rg33 cannot tow apc
  //RG-33L (Six wheel)
  ["rhsusf_RG33L_base", "CAN_TOW", "rhsusf_RG33L_base"], //M1237 can tow M1237
  ["rhsusf_RG33L_base", "CAN_TOW", "rhsusf_hmmwe_base"], //M1237 can tow hmmwv
  ["rhsusf_RG33L_base", "CAN_TOW", "rhsusf_rg33_base"], //M1237 can tow rg33
  ["rhsusf_rg33_base", "CANT_TOW", "rhsusf_HEMTT_A4_base"], //rg33l cannot tow hemmt
  ["rhsusf_rg33_base", "CANT_TOW", "rhsusf_HEMTT_A2_base"], //rg33l cannot tow hemmt
  ["rhsusf_rg33_base", "CANT_TOW", "MBT_01_base_F"], //rg33l cannot tow mbts
  ["rhsusf_rg33_base", "CANT_TOW", "APC_Tracked_03_base_F"] //rg33l cannot tow apc
];
